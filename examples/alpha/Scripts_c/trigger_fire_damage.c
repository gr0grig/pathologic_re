// @IMPORTS: Sleep/1,Trace/1,ReportHit/5,IsLoaded/1,RemoveActor/1,self/1,CreateObjectSet/1
// @STRINGS: A:iterator|A:Next|W:Damaging: |W:health|W:New damage target: |A:add|A:erase|W:Removed damage target: |W:cleanup|W:restore|W:fire|W:phys|W:HasProperty|A:HasProperty|W:armor|A:GetProperty|W:armor_|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_23: op=0x28 vars=object
// @EVENT_27: op=0x37 vars=object
// @EVENT_26: op=0x40 vars=string
// @EVENT_6: op=0x5c vars=
// @PE: 0x28,0x37,0x6e,0xc8,0xcf

task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_string = "";
	var_1_object = var_3_object;
	func_118(var_2_bool, var_3_object, "health");
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
	var_2_object = GlobalVars[0];
	@@var_2_object:erase(var_1_object);
	var_4_int = "Removed damage target: " + var_1_object;
	Trace(var_4_int);
	return 0;
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
			func_108(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_194(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_91;
		var_0_bool = false;
	}
Label_91:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_108(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_194(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_object = Obj(); var_2_bool = 0; var_3_object = Obj(); var_4_float = 0; var_5_object = Obj(); var_6_bool = 0; var_7_object = Obj(); var_8_float = 0;
	var_9_object = GlobalVars[0];
	func_218(Obj());
	var_10_object = var_9_object;
	GlobalVars[0] = var_9_object;
	
Label_7:
	Sleep((int)1);
	var_14_object = GlobalVars[0];
	@@var_14_object:iterator(var_5_object);
	
Label_13:
	@@var_5_object:Next(var_6_bool, var_7_object);
	var_15_bool = var_6_bool;
	if(var_15_bool != 0) {
		var_17_int = "Damaging: " + var_7_object;
		Trace(var_17_int);
		var_18_float = 0; var_19_object = Obj(); var_20_float = 0; var_21_int = 0;
		var_7_object = var_19_object;
		func_130(var_18_float, var_19_object, (float)0.800000011920929, (int)1);
		var_18_float = var_8_float;
		var_74_object = Obj();
		func_194(var_74_object);
		ReportHit(var_7_object, var_74_object, (int)4, var_8_float, (float)0.800000011920929);
		goto Label_13;
	}
	var_7_object = 0;
	var_5_object = 0;
	goto Label_7;
}
EMIT "Return(); Pop(8)";


func_194(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj();
	self(var_76_object);
	var_76_object = var_74_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_130(var_18_float, var_19_object, var_20_float, var_21_int)
{
	var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_int = 0; var_29_string = ""; var_30_int = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_string = "";
	var_19_object = var_35_object;
	func_118(var_34_bool, var_35_object, "health");
	var_43_bool = var_34_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_18_float = 0.0;
		return 12;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_19_object = var_45_object;
	func_118(var_44_bool, var_45_object, "armor");
	var_47_bool = var_44_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_28_int = 0;
	} else {
			@@var_19_object:GetProperty("armor", var_28_int);
	}
	var_49_string = ""; var_50_int = 0;
	var_21_int = var_50_int;
	func_110(var_49_string, var_50_int);
	var_29_string = "armor_" + var_49_string;
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_19_object = var_54_object;
	var_29_string = var_55_string;
	func_118(var_53_bool, var_54_object, var_55_string);
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_30_int = 0;
	} else {
		@@var_19_object:GetProperty(var_29_string, var_30_int);

	}
	var_57_float = 0; var_58_float = 0; var_59_float = 0;
	var_60_int = var_28_int + var_30_int;
	var_58_float = var_60_int / (float)100.0;
	func_200(var_57_float, var_58_float, (float)1);
	var_57_float = var_31_float;
	@@var_19_object:GetProperty("health", var_32_float);
	var_65_int = (int)1 - var_31_float;
	var_33_float = var_20_float * var_65_int;
	var_67_float = 0; var_68_float = 0; var_69_float = 0; var_70_float = 0;
	var_68_float = var_32_float - var_33_float;
	func_207(var_67_float, var_68_float, (float)0, (float)1);
	@@var_19_object:SetProperty("health", var_67_float);
	var_33_float = var_18_float;
	return 12;
	
}


func_200(var_57_float, var_58_float, var_59_float)
{
	var_62_bool = var_58_float < var_59_float;
	if(var_62_bool != 0) {
		var_58_float = var_57_float;
	} else {
		var_59_float = var_57_float;
	}
	return 0;
	
}


func_108(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_110(var_49_string, var_50_int)
{
	var_52_bool = var_50_int == (int)1;
	if(var_52_bool != 0) {
		var_49_string = "fire";
		return 0;
	}
	var_49_string = "phys";
	return 0;
}


func_207(var_67_float, var_68_float, var_69_float, var_70_float)
{
	var_71_bool = var_68_float < var_69_float;
	if(var_71_bool != 0) {
		var_69_float = var_67_float;
		return 0;
	}
	var_72_bool = var_68_float > var_70_float;
	if(var_72_bool != 0) {
		var_70_float = var_67_float;
		return 0;
	}
	var_68_float = var_67_float;
	return 0;
}


func_118(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0;
	var_41_bool = IsFuncExist(var_35_object, "HasProperty", (int)2);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_34_bool = 0;
		return 2;
	}
	@@var_35_object:HasProperty(var_36_string, var_38_bool);
	var_38_bool = var_34_bool;
	return 2;
}


func_218(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	CreateObjectSet(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


