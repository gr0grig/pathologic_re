// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,ProcessEvents/0,CreateObjectVector/1,CreateIntVector/1,FindActor/2,DestroyWindow/0,HasInvItemProperty/3,GetInvItemProperty/3,SendMessage/3,SendMessage/2,SetVariable/2,GetInvItemName/2
// @STRINGS: W:default|W:player|A:GetItemCount|A:GetItem|W:Microscope|A:add|A:size|A:get|W:video|W:microscope_|W:slot0|W:slot|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,object,object params=0
// @EVENT_100: op=0x41 vars=int
// @EVENT_200: op=0x83 vars=int,string,object
// @PE: 0x41,0x97

task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	
Label_133:
	var_10_bool = (int)0 < (int)12;
	if(var_10_bool != 0) {
		var_11_string = ""; var_12_int = 0;
		var_8_int = var_12_int;
		func_151(var_11_string, var_12_int);
		var_23_bool = var_5_string == var_11_string;
		if(var_23_bool != 0) {
			var_0_int = var_8_int;
			func_69(var_6_object, var_7_int, var_8_int);
		} else {
			var_8_int = var_8_int + (int)1;
			goto Label_133;
		}
	}
	return 2;
	
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	func_19(var_0_int, var_1_object, var_2_object, var_3_object);
	func_69(var_1_object, var_2_object, var_3_object);
	ProcessEvents();
	return 0;
}


func_69(var_0_int, var_1_object, var_2_object)
{
	var_31_int = 0; var_32_int = 0; var_33_object = Obj(); var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_object = Obj(); var_38_int = 0;
	@@@var_1_object:size(var_35_int);
	var_36_int = 0;
	
Label_73:
	var_40_bool = var_36_int < (int)12;
	if(var_40_bool != 0) {
		var_41_bool = var_36_int < var_35_int;
		if(var_41_bool != 0) {
			@@@var_1_object:get(var_37_object, var_36_int);
			@@@var_2_object:get(var_38_int, var_36_int);
			var_42_bool = var_0_int == var_36_int;
			if(var_42_bool != 0) {
				var_44_string = ""; var_45_int = 0;
				var_36_int = var_45_int;
				func_151(var_44_string, var_45_int);
				SendMessage((int)16384, var_44_string, var_37_object);
				SendMessage(var_38_int, "video");
				var_58_string = ""; var_59_object = Obj();
				var_37_object = var_59_object;
				func_172(var_58_string, var_59_object);
				var_66_int = "microscope_" + var_58_string;
				SetVariable(var_66_int, (int)1);
			} else {
				var_73_string = ""; var_74_int = 0;
				var_36_int = var_74_int;
				func_151(var_73_string, var_74_int);
				SendMessage((int)0, var_73_string, var_37_object);
		}
			var_76_string = ""; var_77_int = 0;
			var_36_int = var_77_int;
			func_151(var_76_string, var_77_int);
			SendMessage((int)32768, var_76_string);
	}
		var_69_string = ""; var_70_int = 0;
		var_36_int = var_70_int;
		func_151(var_69_string, var_70_int);
		SendMessage((int)65537, var_69_string);
		var_37_object = 0;
		goto Label_127;
		var_36_int = var_36_int + (int)1;
		goto Label_73;
	}
	return 8;
	
}


func_167(var_23_int, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	@@var_24_object:GetItemID(var_26_int);
	var_26_int = var_23_int;
	return 2;
}


func_172(var_58_string, var_59_object)
{
	var_60_int = 0; var_61_string = ""; var_62_int = 0; var_63_string = "";
	var_64_int = 0; var_65_object = Obj();
	var_59_object = var_65_object;
	func_167(var_64_int, var_65_object);
	var_64_int = var_62_int;
	GetInvItemName(var_63_string, var_62_int);
	var_63_string = var_58_string;
	return 4;
}


func_19(var_0_int, var_1_object, var_2_object, var_3_object)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_int = 0;
	var_0_int = -1;
	CreateObjectVector(var_1_object);
	CreateIntVector(var_2_object);
	FindActor(var_3_object, "player");
	var_19_bool = var_3_object == 0; //@nz
	if(var_19_bool != 0) {
		DestroyWindow();
		return 12;
	}
	@@@var_3_object:GetItemCount(var_12_int, (int)4);
	var_13_int = 0;
	
Label_37:
	var_21_bool = var_13_int < var_12_int;
	if(var_21_bool != 0) {
		@@@var_3_object:GetItem(var_14_object, var_13_int, (int)4);
		var_23_int = 0; var_24_object = Obj();
		var_14_object = var_24_object;
		func_167(var_23_int, var_24_object);
		var_23_int = var_15_int;
		HasInvItemProperty(var_16_bool, var_15_int, "Microscope");
		var_28_bool = var_16_bool == 0; //@nz
		if(var_28_bool != 0) {
		} else {
			GetInvItemProperty(var_17_int, var_15_int, "Microscope");
			@@@var_1_object:add(var_14_object);
			@@@var_2_object:add(var_17_int);
			var_14_object = 0;
	}
		var_13_int = var_13_int + (int)1;
		goto Label_37;
	}
	return 12;
	
}


func_151(var_44_string, var_45_int)
{
	var_47_int = var_45_int + (int)1;
	var_49_bool = var_47_int < (int)10;
	if(var_49_bool != 0) {
		var_52_int = var_45_int + (int)1;
		var_44_string = "slot0" + var_52_int;
		return 0;
	}
	var_55_int = var_45_int + (int)1;
	var_44_string = "slot" + var_55_int;
	return 0;
}


