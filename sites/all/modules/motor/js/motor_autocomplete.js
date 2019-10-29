(function ($) {
	Drupal.behaviors.motorAC = {
		attach: function (context, settings) {

    		treatments_anamnesis = Drupal.settings.treatments_anamnesis;
    		treatments_present_state = Drupal.settings.treatments_present_state;
    		treatments_diagnosis = Drupal.settings.treatments_diagnosis;
    		treatments_complementary = Drupal.settings.treatments_complementary;
    		treatments_notes = Drupal.settings.treatments_notes;
    		treatments_operation = Drupal.settings.treatments_operation;

    		function split( val ) {
		      return val.split( /,\s*/ );
		    }
		    function extractLast( term ) {
		      return split( term ).pop();
		    }

		    console.log('AC loaded.');
    
			$('.form-field-name-field-anamnesis textarea')
			.keydown(function( event ) {
				console.log('keydown');
				if ( event.keyCode === $.ui.keyCode.TAB &&
				    $( this ).autocomplete( "instance" ).menu.active ) {
				  event.preventDefault();
				}
			})
			.autocomplete({
				minLength: 0,
				source: function( request, response ) {
				  response( $.ui.autocomplete.filter(
				    treatments_anamnesis, extractLast( request.term ) ) );
				},
				focus: function() { return false; },
				select: function( event, ui ) {
				  var terms = split( this.value );
				  terms.pop();
				  terms.push( ui.item.value );
				  terms.push( "" );
				  this.value = terms.join( ", " );
				  return false;
				}
			}).css('border', '1px solid red');

			$('.form-field-name-field-present-state textarea')
			.keydown(function( event ) {
				if ( event.keyCode === $.ui.keyCode.TAB &&
				    $( this ).autocomplete( "instance" ).menu.active ) {
				  event.preventDefault();
				}
			})
			.autocomplete({
				minLength: 0,
				source: function( request, response ) {
				  response( $.ui.autocomplete.filter(
				    treatments_present_state, extractLast( request.term ) ) );
				},
				focus: function() { return false; },
				select: function( event, ui ) {
				  var terms = split( this.value );
				  terms.pop();
				  terms.push( ui.item.value );
				  terms.push( "" );
				  this.value = terms.join( ", " );
				  return false;
				}
			}).css('border', '1px solid red');




			$('.form-field-name-field-diagnosis textarea')
			.keydown(function( event ) {
				if ( event.keyCode === $.ui.keyCode.TAB &&
				    $( this ).autocomplete( "instance" ).menu.active ) {
				  event.preventDefault();
				}
			})
			.autocomplete({
				minLength: 0,
				source: function( request, response ) {
				  response( $.ui.autocomplete.filter(
				    treatments_diagnosis, extractLast( request.term ) ) );
				},
				focus: function() { return false; },
				select: function( event, ui ) {
				  var terms = split( this.value );
				  terms.pop();
				  terms.push( ui.item.value );
				  terms.push( "" );
				  this.value = terms.join( ", " );
				  return false;
				}
			}).css('border', '1px solid red');





			$('.form-field-name-field-complementary textarea')
			.keydown(function( event ) {
				if ( event.keyCode === $.ui.keyCode.TAB &&
				    $( this ).autocomplete( "instance" ).menu.active ) {
				  event.preventDefault();
				}
			})
			.autocomplete({
				minLength: 0,
				source: function( request, response ) {
				  response( $.ui.autocomplete.filter(
				    treatments_complementary, extractLast( request.term ) ) );
				},
				focus: function() { return false; },
				select: function( event, ui ) {
				  var terms = split( this.value );
				  terms.pop();
				  terms.push( ui.item.value );
				  terms.push( "" );
				  this.value = terms.join( ", " );
				  return false;
				}
			}).css('border', '1px solid red');

			$('.form-field-name-field-notes textarea')
			.keydown(function( event ) {
				if ( event.keyCode === $.ui.keyCode.TAB &&
				    $( this ).autocomplete( "instance" ).menu.active ) {
				  event.preventDefault();
				}
			})
			.autocomplete({
				minLength: 0,
				source: function( request, response ) {
				  response( $.ui.autocomplete.filter(
				    treatments_notes, extractLast( request.term ) ) );
				},
				focus: function() { return false; },
				select: function( event, ui ) {
				  var terms = split( this.value );
				  terms.pop();
				  terms.push( ui.item.value );
				  terms.push( "" );
				  this.value = terms.join( ", " );
				  return false;
				}
			}).css('border', '1px solid red');

			$('.form-field-name-field-operation textarea')
			.keydown(function( event ) {
				if ( event.keyCode === $.ui.keyCode.TAB &&
				    $( this ).autocomplete( "instance" ).menu.active ) {
				  event.preventDefault();
				}
			})
			.autocomplete({
				minLength: 0,
				source: function( request, response ) {
				  response( $.ui.autocomplete.filter(
				    treatments_operation, extractLast( request.term ) ) );
				},
				focus: function() { return false; },
				select: function( event, ui ) {
				  var terms = split( this.value );
				  terms.pop();
				  terms.push( ui.item.value );
				  terms.push( "" );
				  this.value = terms.join( ", " );
				  return false;
				}
			}).css('border', '1px solid red');

		}
	}
}(jQuery));