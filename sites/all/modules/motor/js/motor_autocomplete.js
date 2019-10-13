(function ($) {
	Drupal.behaviors.motor = {
		attach: function (context, settings) {


    		treatmentAnamnesisTerms = Drupal.settings.treatments_anamnesis;
    		treatmentComplementaryTerms = Drupal.settings.treatments_complementary;
    		treatmentNotesTerms = Drupal.settings.treatments_notes;

    		function split( val ) {
		      return val.split( /,\s*/ );
		    }
		    function extractLast( term ) {
		      return split( term ).pop();
		    }
    
			$('.field-name-field-anamnesis textarea')
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
				    treatmentAnamnesisTerms, extractLast( request.term ) ) );
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



			$('.field-name-field-complementary textarea')
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
				    treatmentComplementaryTerms, extractLast( request.term ) ) );
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

			$('.field-name-field-notes textarea')
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
				    treatmentNotesTerms, extractLast( request.term ) ) );
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