<?php
/**
 * @file
 * Definition of Zurb Foundation Two column Display Suite layout.
 */

function ds_cksub_one_column_stacked()
{
    return array(
        'label' => t('CKSub One Column Stacked'),
        'regions' => array(
            'header' => t('Header'),
            'ds_content' => t('Content'),
            'footer' => t('Footer'),
        ),
        'image' => TRUE,
    );
}
