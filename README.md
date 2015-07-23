# arduino-lcd-menu



* 1-st watering
⋅⋅* Time
⋅⋅* Duration
⋅⋅* Frequency

* 2-nd watering
⋅⋅* Time
⋅⋅* Duration

* 3-rd watering
⋅⋅* Time
⋅⋅* Duration

* DateTime

**Difference between menu and element** (<a href="https://ru.wikipedia.org/wiki/%D0%9A%D0%BE%D0%BC%D0%BF%D0%BE%D0%BD%D0%BE%D0%B2%D1%89%D0%B8%D0%BA_(%D1%88%D0%B0%D0%B1%D0%BB%D0%BE%D0%BD_%D0%BF%D1%80%D0%BE%D0%B5%D0%BA%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F)">composite pattern</a>): menu can contain children like: another menu and/or new elements(nodes) of different types. Element can't contain any childrens.

```c++
// DEFINE ARDUINO PINS FOR THE NAVIGATION BUTTONS
#define UP_BUTTON_PIN       9
#define DOWN_BUTTON_PIN     10
#define LEFT_BUTTON_PIN     7
#define RIGHT_BUTTON_PIN    8
#define CONFIRM_BUTTON_PIN  12
#define ESCAPE_BUTTON_PIN   11

//rootMenu.draw();
//rootMenu.addControls();
//rootMenu.
// actionConfirmation(false)

//instantiate global variables to bind to menu
int      selectedOption = 0;
int      selectedInt = 0;
float    selectedFloat = 26.0;
boolean  selectedBoolean = 0;

int main () {
	MenuManager menu;

	//declare navigation buttons (required)
	menu.navButtons(UP_BUTTON_PIN,DOWN_BUTTON_PIN,ESCAPE_BUTTON_PIN,CONFIRM_BUTTON_PIN);

	//(optional)create a user define screen callback to activate after 10 secs (10.000 millis) since last button push
	menu.addUsrScreen(callback,10000);

	menu
	.addMenu("menu1")
		.addSelect("el1", selectedOption, callback) //create a variable of type "option list"; callback - optional.
			.addOption("option 1")
			.addOption("option 2")
			.addOption("option 3")
			.addOption("option 4")
		.done()
		.addInt("el2", selectedInt, callback)
		.addFloat("el3", selectedFloat, callback)
		.addTime("el4", callback)
		.addDateTime("el5", callback)
		.addBoolean("el6", selectedBoolean, callback)
		.addCustomElement("el7", callback)
		.addIpAddress
	.done()

	.addCustomElement("el1", callback)

	.addMenu("menu2")
		.addCustomElement("el1", callback)
		.addCustomElement("el2", callback)
	.done()

	.addMenu("menu3")
		.addCustomElement("el1", callback)
		.addCustomElement("el2", callback)
	.done()

	.addCustomElement("el2", callback)

	.addMenu("menu4")
		.addCustomElement("el1", callback)

		.addMenu("menu1")
			.addCustomElement("el1", callback)
			.addCustomElement("el2", callback)
		.done()

		.addMenu("menu2")
			.addCustomElement("el1", callback)
			.addCustomElement("el2", callback)
		.done()
	.done();
}
```
