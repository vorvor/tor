(function ($) {
	Drupal.behaviors.motorKeys = {
		attach: function (context, settings) {

			function autonodetitle() {
				name = $('.node-owner-form .form-field-name-field-pets .field-name-field-name input').val();
				dateOfBirth = $('.node-owner-form .form-field-name-field-pets .field-name-field-date-of-birth input').val();
				species1 = $('.node-owner-form .form-field-name-field-pets .field-name-field-species .shs-select-level-1 option:selected').text();
				species2 = $('.node-owner-form .form-field-name-field-pets .field-name-field-species .shs-select-level-2 option:selected').text();

				$('.node-owner-form .form-field-name-field-pets .form-item-field-pets-und-form-title input').val(
					name 
					+ ' - ' + dateOfBirth 
					+ ' - ' + species1 
					+ ', ' + species2);
			}

			$('.node-owner-form .form-field-name-field-pets .field-name-field-name input').keyup(function() {
				autonodetitle();
			});
			$('.node-owner-form .form-field-name-field-pets .field-name-field-date-of-birth input').keyup(function() {
				autonodetitle();
			})
			$('.node-owner-form .form-field-name-field-pets .field-name-field-species select').change(function() {
				autonodetitle();
			})

}};
}(jQuery));