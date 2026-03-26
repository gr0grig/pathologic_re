// @IMPORTS: EnableClipping/1,LoadImage/1,SetOwnerDraw/1,ProcessEvents/0,GetPlayerHealth/1,Blit/3
// @STRINGS: W:ui/stat_Danko0.png|W:ui/stat_Danko1.png|W:ui/stat_Danko2.png|W:ui/stat_Burah0.png|W:ui/stat_Burah1.png|W:ui/stat_Burah2.png|W:ui/stat_Klara0.png|W:ui/stat_Klara1.png|W:ui/stat_Klara2.png
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,string,string params=0
// @EVENT_0: op=0x26 vars=

task_0_event_0(var_0_string, var_1_string, var_2_string)
{
	var_3_float = 0; var_4_float = 0;
	GetPlayerHealth(var_4_float);
	var_6_bool = var_4_float >= (float)0.699999988079071;
	if(var_6_bool != 0) {
		Blit(var_0_string, (int)0, (int)0);
	} else {
		var_10_bool = var_4_float >= (float)0.20000000298023224;
		if(var_10_bool != 0) {
			Blit(var_1_string, (int)0, (int)0);
			goto Label_61;
		}
		Blit(var_2_string, (int)0, (int)0);
	}
Label_61:
	return 2;
	
}


main(var_0_string, var_1_string, var_2_string)
{
	EnableClipping((bool)1);
	var_4_int = 0;
	func_62(var_4_int);
	var_6_bool = var_4_int == (int)0;
	if(var_6_bool != 0) {
		var_0_string = "ui/stat_Danko0.png";
		var_1_string = "ui/stat_Danko1.png";
		var_2_string = "ui/stat_Danko2.png";
	} else {
		var_8_int = 0;
		func_62(var_8_int);
		var_10_bool = var_8_int == (int)1;
		if(var_10_bool != 0) {
			var_0_string = "ui/stat_Burah0.png";
			var_1_string = "ui/stat_Burah1.png";
			var_2_string = "ui/stat_Burah2.png";
			goto Label_26;
		}
		var_0_string = "ui/stat_Klara0.png";
		var_1_string = "ui/stat_Klara1.png";
		var_2_string = "ui/stat_Klara2.png";
	}
Label_26:
	LoadImage(var_0_string);
	LoadImage(var_1_string);
	LoadImage(var_2_string);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
	
}


func_62(var_4_int)
{
	var_4_int = 0;
	return 0;
}


