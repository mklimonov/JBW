<?php
/**
 * @file
 * jbw3_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function jbw3_commerce_default_rules_configuration() {
  $items = array();
  $items['rules_hide_cart_while_donate'] = entity_import('rules_config', '{ "rules_hide_cart_while_donate" : {
      "LABEL" : "Hide cart while donate",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "entity" ],
      "ON" : [ "commerce_order_view" ],
      "DO" : []
    }
  }');
  $items['rules_redirect_to_checkout_while_donate'] = entity_import('rules_config', '{ "rules_redirect_to_checkout_while_donate" : {
      "LABEL" : "Redirect to checkout while donate",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "commerce_order", "rules", "commerce_cart" ],
      "ON" : [ "commerce_cart_product_add" ],
      "IF" : [
        { "commerce_order_contains_product" : {
            "commerce_order" : [ "commerce_order" ],
            "product_id" : "DONATE_JBW",
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "checkout\\/[commerce-order:order-id]" } } ]
    }
  }');
  $items['rules_send_e_mail_to_user_when_he_buy_ticket'] = entity_import('rules_config', '{ "rules_send_e_mail_to_user_when_he_buy_ticket" : {
      "LABEL" : "Send e-mail to user when he buy ticket",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "commerce" ],
      "REQUIRES" : [ "rules", "mimemail", "commerce_payment" ],
      "ON" : [ "commerce_payment_order_paid_in_full" ],
      "DO" : [
        { "mimemail" : {
            "to" : "[commerce-order:mail]",
            "cc" : "[commerce-order:mail]",
            "bcc" : "[site:mail]",
            "from_name" : "Jewish Book Week",
            "from_mail" : "[site:mail]",
            "subject" : "Your order\\u0027s PayPal id",
            "body" : "Your PayPal id is [commerce-payment-transaction:transaction-id]",
            "plaintext" : "Your PayPal id is [commerce-payment-transaction:transaction-id]"
          }
        }
      ]
    }
  }');
  $items['rules_update_price_of_donate'] = entity_import('rules_config', '{ "rules_update_price_of_donate" : {
      "LABEL" : "Update price of donate",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_product_reference" ],
      "ON" : [ "commerce_product_calculate_sell_price" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "field_donation_amount" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:field-donation-amount" ],
              "op" : "*",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "donation_in_pounds" : "Donation in pounds" } }
          }
        },
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "donation-in-pounds" ],
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
