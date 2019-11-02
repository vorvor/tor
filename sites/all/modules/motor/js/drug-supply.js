(function ($) {
	Drupal.behaviors.drugSupply = {
		attach: function (context, settings) {

			$('.form-field-name-field-drugs input').blur(function() {
				nid = $(this).val().match(/\d+/);
				
				$.ajax
			      ({ 
			        url: '/ajax/drug-type/' + nid[0],
			        type: 'get',
			        success: function(result)
			        {
			         	if (result == 'Narcotic') {
			         		$('.form-field-name-field-drug-distributor').show();
			         	} else {
			         		$('.form-field-name-field-drug-distributor').hide();
			         	}
			        }
			      });

			     
			});




		}
	};
}(jQuery));