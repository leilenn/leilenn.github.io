function main() {
    // ashlei kearse-cti-110-0003
    var secret;
    var guess;

    // the numbers range from 1-100 in this game.
    // test case 1: i tested the game to see if the flow chart had no mistakes. i then tried to make a quit option.
    // 
    // test case 2: i tried inputing the quit option and it did not work very well i kept running into an error.
    secret = Math.floor(Math.random() * 100) + 1;
    guess = 1 - 100;
    window.alert("a number guessing game! enter your first number or press Q to quit");
    while (guess != secret) {
        guess = Number(window.prompt('Enter a value for guess'));
        if (guess > secret) {
            window.alert("guess too HIGH");
        }
        if (guess < secret) {
            window.alert("guess too LOW");
        }
    }
    window.alert("correct!");
}
