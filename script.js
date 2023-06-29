function count(ycount) {
    var messageElement = document.getElementById("message");
    var initialMessage = "This test is designed to determine whether you demonstrate symptoms similar to those of dyslexia in adults. A high score does not necessarily mean you have dyslexia or another disorder.";
  
    var messageText = initialMessage;
  
    if (ycount >= 9) {
      messageText += "<br><br>There is a high possibility that you may be experiencing symptoms of dyslexia. You should see a trained health care professional.";
    } else if (ycount > 5 && ycount < 9) {
      messageText += "<br><br>There is a mild possibility that you may be experiencing symptoms of dyslexia.";
    } else {
      messageText += "<br><br>There is a very low possibility that you may be experiencing symptoms of dyslexia.";
    }
  
    messageElement.innerHTML = messageText;
  }
   


function result() {
    var yesCount = 0; // Initialize the count of "Yes" radio buttons to 0
  
    // Get all the radio button elements with class name "radioButton"
    var radioButtons = document.getElementsByClassName("radioButton");
  
    // Loop through the radio buttons and count the ones that are selected as "Yes"
    for (var i = 0; i < radioButtons.length; i++) {
      if (radioButtons[i].checked && radioButtons[i].value === "Yes") {
        yesCount++;
      }
    }
    count(yesCount);
    // Display the count of "Yes" radio buttons
    console.log("Count of Yes: " + yesCount);

  }
  