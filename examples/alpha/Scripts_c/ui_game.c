// @IMPORTS: ShowCursor/0,SetOwnerDraw/1,SetCursor/1,SetBackground/1,PlaySound/1,ProcessEvents/0,ShowCursor/1,NewGame/2,DestroyWindow/0
// @STRINGS: W:default|W:menumusic|W:start|W:world_danko.xml|W:player_danko.xml|W:loadgame_button|W:savegame_button|W:danko_button
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x11 vars=
// @EVENT_200: op=0x12 vars=int,string,object
// @PE: 0x12

task_0_event_0()
{
	return 0;
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_4_bool = var_1_string == "start";
	if(var_4_bool != 0) {
		ShowCursor((bool)0);
		NewGame("world_danko.xml", "player_danko.xml");
		DestroyWindow();
	}
	var_9_bool = var_1_string == "loadgame_button";
	if(var_9_bool != 0) {
		DestroyWindow();
	}
	var_11_bool = var_1_string == "savegame_button";
	if(var_11_bool != 0) {
		DestroyWindow();
	}
	var_13_bool = var_1_string == "danko_button";
	if(var_13_bool != 0) {
		ShowCursor((bool)0);
		NewGame("world_danko.xml", "player_danko.xml");
		DestroyWindow();
	}
	return 0;
}


main()
{
	ShowCursor();
	SetOwnerDraw((bool)0);
	SetCursor("default");
	SetBackground("default");
	PlaySound("menumusic");
	ProcessEvents();
	return 0;
}


