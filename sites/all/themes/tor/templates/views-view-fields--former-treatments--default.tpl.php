<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php 
/*
foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; 
    ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; 
    dpm($id);
    if ($id == 'php') {
    dpm($field);
}
    ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach;
*/ ?>

<div class="treatment-wrapper">
	<div class="treatment-header">
		<?php
			print $fields['nid_1']->content . ' - ' . date('Y-m-d', $fields['created']->raw);
		?>
	</div>
	<div class="treatment-content">
		<div class="anamnesis-content">
			<?php print $fields['field_anamnesis']->label_html; ?>
			<?php print $fields['field_anamnesis']->content; ?>
		</div>
		<div class="present-state-content">
			<?php print $fields['field_present_state']->label_html; ?>
			<?php print $fields['field_present_state']->content; ?>
		</div>
		<div class="diagnosis-content">
			<?php print $fields['field_diagnosis']->label_html; ?>
			<?php print $fields['field_diagnosis']->content; ?>
		</div>
		<div class="complementary-content">
			<?php print $fields['field_complementary']->label_html; ?>
			<?php print $fields['field_complementary']->content; ?>
		</div>
		<div class="operation-content">
			<?php print $fields['field_operation']->label_html; ?>
			<?php print $fields['field_operation']->content; ?>
		</div>
		<div class="notes-content">
			<?php print $fields['field_notes']->label_html; ?>
			<?php print $fields['field_notes']->content; ?>
		</div>
		<div class="recipe-content">
			<?php print $fields['field_recipe']->label_html; ?>
			<?php print $fields['field_recipe']->content; ?>
		</div>
		<div class="drugs-used-content">
			<?php print '<span class="views-label views-label-field-recipe">' . t('Drugs used:') . '</span>'; ?>
			<?php print motor_get_drugs_used_on_treatment($fields['nid_1']->raw); ?>
		</div>
		<div class="cost-of-treatment-content">
			<?php print $fields['field_cost_of_treatment']->label_html; ?>
			<?php print $fields['field_cost_of_treatment']->content; ?>
		</div>
		<div class="sum-of-cost-content">
			<span class="views-label views-label-sum-of-cost-of-treatment"><?php print t('Sum cost:'); ?> </span>
			<?php print motor_calculate_treatment_sum_price($row->nid) . 'HUF'; ?>
		</div>


	</div>
</div>
