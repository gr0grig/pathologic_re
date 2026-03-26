// @IMPORTS: CaptureKeyboard/0,SetCursor/1,FindActor/2,DestroyWindow/0,SendMessage/2,ProcessEvents/0,DestroyWindow/1
// @STRINGS: W:default|W:player|W:health|A:GetProperty|W:immunity|W:reputation|W:hunger|W:tiredness|W:disease|W:infection|W:armor|W:armor_fire|W:armor_phys|W:armor_bullet|W:armor_disease|W:reputation_text|W:health_text|W:immunity_text|W:hunger_text|W:tiredness_text|W:infection_text|W:armor_phys_text|W:armor_bullet_text|W:armor_fire_text|W:armor_disease_text|W:body_text|W:clothes_text|W:time_text|W:people_button
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_200: op=0x94 vars=int,string,object
// @EVENT_101: op=0x9c vars=int
// @EVENT_100: op=0xa4 vars=int
// @PE: 0x94,0x9c,0xa4

task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_4_bool = var_1_string == "people_button";
	if(var_4_bool != 0) {
		DestroyWindow((int)1);
	}
	return 0;
}


task_0_event_101(var_0_int)
{
	var_2_bool = var_0_int == (int)256;
	if(var_2_bool != 0) {
		DestroyWindow((int)1);
	}
	return 0;
}


task_0_event_100(var_0_int)
{
	DestroyWindow();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_object = Obj(); var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0;
	CaptureKeyboard();
	SetCursor("default");
	FindActor(var_7_object, "player");
	var_16_bool = var_7_object == 0; //@nz
	if(var_16_bool != 0) {
		DestroyWindow();
		return 14;
	}
	@@var_7_object:GetProperty("health", var_8_float);
	var_19_float = (int)100 * var_8_float;
	SendMessage(var_19_float, "health");
	@@var_7_object:GetProperty("immunity", var_8_float);
	var_23_float = (int)100 * var_8_float;
	SendMessage(var_23_float, "immunity");
	@@var_7_object:GetProperty("reputation", var_8_float);
	var_27_float = (int)100 * var_8_float;
	SendMessage(var_27_float, "reputation");
	@@var_7_object:GetProperty("hunger", var_8_float);
	var_31_float = (int)100 * var_8_float;
	SendMessage(var_31_float, "hunger");
	@@var_7_object:GetProperty("tiredness", var_8_float);
	var_35_float = (int)100 * var_8_float;
	SendMessage(var_35_float, "tiredness");
	@@var_7_object:GetProperty("disease", var_8_float);
	var_39_float = (int)100 * var_8_float;
	SendMessage(var_39_float, "infection");
	@@var_7_object:GetProperty("armor", var_9_float);
	@@var_7_object:GetProperty("armor_fire", var_10_float);
	@@var_7_object:GetProperty("armor_phys", var_11_float);
	@@var_7_object:GetProperty("armor_bullet", var_12_float);
	@@var_7_object:GetProperty("armor_disease", var_13_float);
	var_46_int = var_9_float + var_10_float;
	SendMessage(var_46_int, "armor_fire");
	var_48_int = var_9_float + var_11_float;
	SendMessage(var_48_int, "armor_phys");
	var_50_int = var_9_float + var_12_float;
	SendMessage(var_50_int, "armor_bullet");
	SendMessage(var_13_float, "armor_disease");
	SendMessage((int)700, "reputation_text");
	SendMessage((int)701, "health_text");
	SendMessage((int)702, "immunity_text");
	SendMessage((int)703, "hunger_text");
	SendMessage((int)704, "tiredness_text");
	SendMessage((int)705, "infection_text");
	SendMessage((int)706, "armor_phys_text");
	SendMessage((int)707, "armor_bullet_text");
	SendMessage((int)708, "armor_fire_text");
	SendMessage((int)709, "armor_disease_text");
	SendMessage((int)710, "body_text");
	SendMessage((int)711, "clothes_text");
	SendMessage((int)712, "time_text");
	ProcessEvents();
	return 14;
}
EMIT "Stack[-7] = 0";


