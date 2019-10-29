(function ($) {
	Drupal.behaviors.motorKeys = {
		attach: function (context, settings) {

			$('body.node-type-pet').keyup(function(key) {
				char = String.fromCharCode(key.which);

				$(window).scroll(function() {
					scroll = 0;
					$('#vaccinate').removeClass('event-selected').css('display', 'inline');
					$('#treatment').removeClass('event-selected').css('display', 'inline');
				})

				// Vaccinate
				if (char == 'O' && $('#vaccinate').hasClass('event-selected')) {
					self.location = $('#vaccinate').attr('href');
				}

				if (char == 'O') {
					$('html, body').animate({
        				scrollTop: $('#vaccinate').offset().top
    				}, 1, function() {
    					scroll = $('body').offset().top;
    					setTimeout(function() {
    						$('#vaccinate').addClass('event-selected');
    					}, 300);
    				});
    				
				}

				// Treatment
				if (char == 'K' && $('#treatment').hasClass('event-selected')) {
					self.location = $('#treatment').attr('href');
				}

				if (char == 'K') {
					$('html, body').animate({
        				scrollTop: $('#treatment').offset().top
    				}, 1, function() {
    					scroll = $('body').offset().top;
    					setTimeout(function() {
    						$('#treatment').addClass('event-selected').css({
    							'display': 'block'
    						});
    					}, 300);
    				});
    				
				}


			})

			$('body.page-dashboard').keyup(function(key) {
				order = String.fromCharCode(key.which);
				if (parseInt(order) == order) {
					i = 0;
					$('.view-owners a').each(function() {
						i++;
						if (i == parseInt(order)) {
							self.location = $(this).attr('href');
						}
					})
				}
				
			})

			$('.treatment-header').click(function() {
				$(this).next().slideToggle();
			})

		}
	};
}(jQuery));