// @IMPORTS: Sleep/1,Trace/1,ReportHit/5,IsLoaded/1,RemoveActor/1,IsPlayerActor/2,self/1,CreateObjectVector/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2
// @STRINGS: A:size|A:get|A:remove|W:Damaging: |W:health|W:New damage target: |A:add|W:Removed damage target: |W:cleanup|W:restore|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:armor|A:GetProperty|W:armor_|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_23: op=0x31 vars=object
// @EVENT_27: op=0x40 vars=object
// @EVENT_26: op=0x5c vars=string
// @EVENT_6: op=0x78 vars=
// @PE: 0x31,0x8a,0xf8,0xff

task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_string = "";
	var_1_object = var_3_object;
	func_157(var_2_bool, var_3_object, "health");
	if(var_2_bool != 0) {
		var_12_int = "New damage target: " + var_1_object;
		Trace(var_12_int);
		var_13_object = GlobalVars[0];
		@@var_13_object:add(var_1_object);
	}
	return 0;
}


task_0_event_27(var_0_bool, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj();
	var_8_object = GlobalVars[0];
	@@var_8_object:size(var_5_int);
	var_6_int = 0;
	
Label_69:
	var_9_bool = var_6_int < var_5_int;
	if(var_9_bool != 0) {
		var_10_object = GlobalVars[0];
		@@var_10_object:get(var_7_object, var_6_int);
		var_11_bool = var_7_object == var_1_object;
		if(var_11_bool != 0) {
			var_12_object = GlobalVars[0];
			@@var_12_object:remove(var_6_int);
			var_5_int = var_5_int + (int)-1;
		} else {
			var_6_int = var_6_int + (int)1;
			goto Label_86;
	}
		var_16_int = "Removed damage target: " + var_1_object;
		Trace(var_16_int);
		var_7_object = 0;
		goto Label_69;
	}
	return 6;
	
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = 0;
		var_6_bool = 0;
		var_7_bool = var_3_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_bool = 0;
			func_136(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_242(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_119;
		var_0_bool = false;
	}
Label_119:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_136(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_242(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_float = 0; var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_float = 0;
	var_9_object = GlobalVars[0];
	func_266(Obj());
	var_10_object = var_9_object;
	GlobalVars[0] = var_9_object;
	
Label_7:
	Sleep((int)1);
	var_14_object = GlobalVars[0];
	@@var_14_object:size(var_5_int);
	var_6_int = 0;
	
Label_14:
	var_15_bool = var_6_int < var_5_int;
	if(var_15_bool != 0) {
		var_16_object = GlobalVars[0];
		@@var_16_object:get(var_7_object, var_6_int);
		var_17_bool = var_7_object == 0; //@nz
		if(var_17_bool != 0) {
			var_18_object = GlobalVars[0];
			@@var_18_object:remove(var_6_int);
		} else {
			var_20_int = "Damaging: " + var_7_object;
			Trace(var_20_int);
			var_21_float = 0; var_22_object = Obj(); var_23_float = 0; var_24_int = 0;
			var_7_object = var_22_object;
			func_169(var_21_float, var_22_object, (float)0.800000011920929, (int)2);
			var_21_float = var_8_float;
			var_91_object = Obj();
			func_242(var_91_object);
			ReportHit(var_7_object, var_91_object, (int)4, var_8_float, (float)0.800000011920929);
			var_6_int = var_6_int + (int)1;
	}
		goto Label_7;
	}
	var_7_object = 0;
	goto Label_14;
	
}
EMIT "Return(); Pop(8)";


func_136(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_169(var_21_float, var_22_object, var_23_float, var_24_int)
{
	var_25_int = 0; var_26_string = ""; var_27_int = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_int = 0; var_32_string = ""; var_33_int = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_22_object = var_38_object;
	func_157(var_37_bool, var_38_object, "health");
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_21_float = 0.0;
		return 12;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_22_object = var_48_object;
	func_157(var_47_bool, var_48_object, "armor");
	var_50_bool = var_47_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_31_int = 0;
	} else {
			@@var_22_object:GetProperty("armor", var_31_int);
	}
	var_52_string = ""; var_53_int = 0;
	var_24_int = var_53_int;
	func_138(var_52_string, var_53_int);
	var_32_string = "armor_" + var_52_string;
	var_58_bool = 0; var_59_object = Obj(); var_60_string = "";
	var_22_object = var_59_object;
	var_32_string = var_60_string;
	func_157(var_58_bool, var_59_object, var_60_string);
	var_61_bool = var_58_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_33_int = 0;
	} else {
		@@var_22_object:GetProperty(var_32_string, var_33_int);

	}
	var_62_float = 0; var_63_float = 0; var_64_float = 0;
	var_65_int = var_31_int + var_33_int;
	var_63_float = var_65_int / (float)100.0;
	func_248(var_62_float, var_63_float, (float)1);
	var_62_float = var_34_float;
	@@var_22_object:GetProperty("health", var_35_float);
	var_70_int = (int)1 - var_34_float;
	var_36_float = var_23_float * var_70_int;
	var_72_float = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0;
	var_73_float = var_35_float - var_36_float;
	func_255(var_72_float, var_73_float, (float)0, (float)1);
	@@var_22_object:SetProperty("health", var_72_float);
	var_78_bool = 0; var_79_object = Obj();
	var_22_object = var_79_object;
	func_152(var_78_bool, var_79_object);
	if(var_78_bool != 0) {
		var_82_float = 0;
		var_82_float = -var_36_float;
		func_272(var_82_float);
	}
	var_36_float = var_21_float;
	return 12;
	
}


func_266(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	CreateObjectVector(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_138(var_52_string, var_53_int)
{
	var_55_bool = var_53_int == (int)2;
	if(var_55_bool != 0) {
		var_52_string = "fire";
		return 0;
	EMIT "GOTO 0x96";
	}
	var_57_bool = var_53_int == (int)1;
	if(var_57_bool != 0) {
		var_52_string = "bullet";
		return 0;
	}
	var_52_string = "phys";
	return 0;
}


func_272(var_82_float)
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateFloatVector(var_84_object);
	@@var_84_object:add(var_82_float);
	var_86_bool = var_82_float < (int)0;
	if(var_86_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_84_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_242(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj();
	self(var_93_object);
	var_93_object = var_91_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_157(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0;
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", (int)2);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	@@var_38_object:HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
	return 2;
}


func_248(var_62_float, var_63_float, var_64_float)
{
	var_67_bool = var_63_float < var_64_float;
	if(var_67_bool != 0) {
		var_63_float = var_62_float;
	} else {
		var_64_float = var_62_float;
	}
	return 0;
	
}


func_152(var_78_bool, var_79_object)
{
	var_80_bool = 0; var_81_bool = 0;
	IsPlayerActor(var_79_object, var_81_bool);
	var_81_bool = var_78_bool;
	return 2;
}


func_255(var_72_float, var_73_float, var_74_float, var_75_float)
{
	var_76_bool = var_73_float < var_74_float;
	if(var_76_bool != 0) {
		var_74_float = var_72_float;
		return 0;
	}
	var_77_bool = var_73_float > var_75_float;
	if(var_77_bool != 0) {
		var_75_float = var_72_float;
		return 0;
	}
	var_73_float = var_72_float;
	return 0;
}


