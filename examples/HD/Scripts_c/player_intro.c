// @IMPORTS: HasProperty/2,SetProperty/2,ApplyEffect/1,Hold/0,GetGroundMaterial/2,IsExistingSound/2,irand/2,PlaySound/1,KillTimer/2,ModNoise/1,SetTimer/2
// @STRINGS: W:effects|W:player_head.bin|W:player_eyes_height.bin|W:wood|W:metal|W:ground|W:water|W:carpet|W:stone|W:step_
// @GLOBALS: 0:string:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_7: op=0x14 vars=int
// @STANDALONE_EVENT_44: op=0xe0 vars=
// @STANDALONE_EVENT_20: op=0xe7 vars=
// @STANDALONE_EVENT_21: op=0xee vars=
// @STANDALONE_EVENT_45: op=0xf5 vars=
// @PE: 0x14,0x1a,0x3a,0x9c,0xbb,0xc6,0xd1,0xd5,0xd9,0xe0,0xe7,0xee,0xf5

task_0_event_7(var_0_int)
{
	var_1_bool = 0; var_2_int = 0;
	var_0_int = var_2_int;
	func_58(var_1_bool, var_2_int);
	return 0;
}


event_44()
{
	func_198();
	func_146();
	return 0;
}


event_20()
{
	func_187();
	func_146();
	return 0;
}


event_21()
{
	func_167();
	func_156();
	return 0;
}


event_45()
{
	func_177();
	return 0;
}


main()
{
	var_0_bool = 0; var_1_bool = 0;
	HasProperty("effects", var_1_bool);
	var_3_bool = var_1_bool == 0; //@nz
	if(var_3_bool != 0) {
		SetProperty("effects", (bool)1);
		ApplyEffect("player_head.bin");
		ApplyEffect("player_eyes_height.bin");
	}
Label_16:
	Hold();
	goto Label_16;
}
EMIT "Return(); Pop(2)";


func_26(var_22_string, var_23_int)
{
	var_25_bool = var_23_int == (int)1;
	if(var_25_bool != 0) {
		var_22_string = "wood";
		return 0;
	EMIT "GOTO 0x38";
	}
	var_27_bool = var_23_int == (int)2;
	if(var_27_bool != 0) {
		var_22_string = "metal";
		return 0;
	EMIT "GOTO 0x38";
	}
	var_29_bool = var_23_int == (int)3;
	if(var_29_bool != 0) {
		var_22_string = "ground";
		return 0;
	EMIT "GOTO 0x38";
	}
	var_31_bool = var_23_int == (int)4;
	if(var_31_bool != 0) {
		var_22_string = "water";
		return 0;
	EMIT "GOTO 0x38";
	}
	var_33_bool = var_23_int == (int)5;
	if(var_33_bool != 0) {
		var_22_string = "carpet";
		return 0;
	}
	var_22_string = "stone";
	return 0;
}


func_198()
{
	func_177();
	SetTimer((int)12, (float)0.6000000238418579);
	ModNoise((int)1);
	return 0;
}


func_167()
{
	var_0_bool = 0; var_1_bool = 0;
	KillTimer((int)10, var_1_bool);
	var_3_bool = var_1_bool;
	if(var_3_bool != 0) {
		ModNoise((int)-2);
	}
	return 2;
}


func_209()
{
	func_87();
	return 0;
}


func_146()
{
	var_5_bool = 0; var_6_bool = 0;
	KillTimer((int)11, var_6_bool);
	var_8_bool = var_6_bool;
	if(var_8_bool != 0) {
		ModNoise((int)-3);
	}
	return 2;
}


func_177()
{
	var_0_bool = 0; var_1_bool = 0;
	KillTimer((int)12, var_1_bool);
	var_3_bool = var_1_bool;
	if(var_3_bool != 0) {
		ModNoise((int)-1);
	}
	return 2;
}


func_213()
{
	func_87();
	return 0;
}


func_87()
{
	var_5_bool = 0; var_6_int = 0; var_7_string = ""; var_8_int = 0; var_9_bool = 0; var_10_int = 0; var_11_string = ""; var_12_string = ""; var_13_bool = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_string = ""; var_20_string = "";
	GetGroundMaterial(var_13_bool, var_14_int);
	var_21_bool = var_13_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_14_int = -1;
	}
	var_22_string = ""; var_23_int = 0;
	var_14_int = var_23_int;
	func_26(var_22_string, var_23_int);
	var_22_string = var_15_string;
	var_16_int = 0;
	
Label_99:
	var_35_int = "step_" + var_15_string;
	var_37_int = var_16_int + (int)1;
	var_38_int = var_35_int + var_37_int;
	IsExistingSound(var_17_bool, var_38_int);
	var_39_bool = var_17_bool == 0; //@nz
	if(var_39_bool != 0) {
	} else {
			var_16_int = var_16_int + (int)1;
			goto Label_99;
	}
	var_40_bool = var_16_int == 0; //@nz
	if(var_40_bool != 0) {
		var_41_string = GlobalVars[0];
		GlobalVars[0] = "";
		return 16;
	}
	var_43_bool = var_16_int == (int)1;
	if(var_43_bool != 0) {
		var_18_int = 0;
	} else {
		irand(var_18_int, var_16_int);
		var_50_int = "step_" + var_15_string;
		var_52_int = var_18_int + (int)1;
		var_19_string = var_50_int + var_52_int;
		var_53_string = GlobalVars[0];
		var_54_bool = var_19_string != var_53_string;
		if(var_54_bool != 0) {
			goto Label_135;
		}
		goto Label_123;

	}
Label_135:
	var_45_int = "step_" + var_15_string;
	var_47_int = var_18_int + (int)1;
	var_20_string = var_45_int + var_47_int;
	PlaySound(var_20_string);
	var_48_string = GlobalVars[0];
	var_20_string = var_48_string;
	GlobalVars[0] = var_48_string;
	return 16;
	
}


func_217()
{
	func_87();
	func_146();
	return 0;
}


func_58(var_1_bool, var_2_int)
{
	var_4_bool = var_2_int == (int)10;
	if(var_4_bool != 0) {
		func_209();
		var_1_bool = 1;
		return 0;
	EMIT "GOTO 0x55";
	}
	var_57_bool = var_2_int == (int)11;
	if(var_57_bool != 0) {
		func_217();
		var_1_bool = 1;
		return 0;
	EMIT "GOTO 0x55";
	}
	var_64_bool = var_2_int == (int)12;
	if(var_64_bool != 0) {
		func_213();
		var_1_bool = 1;
		return 0;
	}
	var_1_bool = 0;
	return 0;
}


func_187()
{
	func_167();
	SetTimer((int)10, (float)0.3499999940395355);
	ModNoise((int)2);
	return 0;
}


func_156()
{
	func_146();
	SetTimer((int)11, (float)0.15000000596046448);
	ModNoise((int)3);
	return 0;
}


