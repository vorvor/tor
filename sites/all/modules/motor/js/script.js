(function ($) {
	Drupal.behaviors.motorKeys = {
		attach: function (context, settings) {

			$('body.node-type-pet').keyup(function(key) {
				char = String.fromCharCode(key.which);

				$(window).scroll(function() {
					scroll = 0;
					$('#vaccinate').css('background-color', 'white');
					$('#treatment').css('background-color', 'white');
				})

				// Vaccinate
				if (char == 'V' && $('body').offset().top == scroll) {
					self.location = $('#vaccinate').attr('href');
				}

				if (char == 'V') {
					$('html, body').animate({
        				scrollTop: $('#vaccinate').offset().top
    				}, 3000, function() {
    					scroll = $('body').offset().top;
    					$('#vaccinate').css('background-color', 'red');
    				});
    				
				}

				// Treatment
				if (char == 'T' && $('body').offset().top == scroll) {
					self.location = $('#treatment').attr('href');
				}

				if (char == 'T') {
					$('html, body').animate({
        				scrollTop: $('#treatment').offset().top
    				}, 3000, function() {
    					scroll = $('body').offset().top;
    					$('#treatment').css('background-color', 'red');
    				});
    				
				}


			})
		}
	};
}(jQuery));