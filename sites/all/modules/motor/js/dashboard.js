(function ($) {
	Drupal.behaviors.motorDashboard = {
		attach: function (context, settings) {

			$('#edit-search-phrase').keyup(function() {
				$.ajax
			      ({ 
			        url: '/ajax/search-owner/' + $(this).val(),
			        type: 'get',
			        success: function(result)
			        {
			          $('#search-results-owners').html(result);
			        }
			      });

			     
			});

			$('#edit-search-phrase').focus();

		}
	};
}(jQuery));