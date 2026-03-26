// @IMPORTS: SetVisibility/1,Hold/0,GetItem/2,GetItemAmount/2,RemoveActor/1,IsLoaded/1,GetScene/1,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3
// @STRINGS: W:cleanup|W:restore|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:nouse_container|A:add|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_0: op=0x7 vars=object
// @EVENT_26: op=0x2c vars=string
// @EVENT_6: op=0x48 vars=

task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	var_6_bool = 0;
	var_6_bool = 1;
	var_7_bool = 0; var_8_object = Obj();
	var_1_object = var_8_object;
	func_143(var_7_bool, var_8_object);
	var_41_bool = var_7_bool == 0; //@nz
	if(var_41_bool != 1) {
		var_42_bool = 0;
		func_173(var_42_bool);
		var_46_bool = var_42_bool == 0; //@nz
		if(var_46_bool != 1) {
			var_6_bool = 0;
		}
	}
	if(var_6_bool != 0) {
		return 4;
	}
	GetItem(var_4_object, (int)0);
	GetItemAmount(var_5_int, (int)0);
	var_49_bool = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	var_1_object = var_50_object;
	var_4_object = var_51_object;
	var_5_int = var_52_int;
	func_191(var_49_bool, var_50_object, var_51_object, var_52_int);
	if(var_49_bool != 0) {
		var_66_object = Obj();
		func_167(var_66_object);
		RemoveActor(var_66_object);
	}
	return 4;
}
EMIT "Stack[-2] = 0";


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
			func_88(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_167(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_71;
		var_0_bool = false;
	}
Label_71:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_88(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_167(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_102(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	@@var_23_object:IsDead(var_25_bool);
	var_25_bool = var_22_bool;
	return 2;
}


func_167(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_107(var_11_bool, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj();
	var_17_bool = var_12_object == 0; //@ne
	if(var_17_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	var_18_bool = 0;
	var_18_bool = 0;
	var_21_bool = IsFuncExist(var_12_object, "IsDead", (int)1);
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_12_object = var_23_object;
		func_102(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	GetScene(var_15_object);
	var_26_bool = var_15_object == 0; //@ne
	if(var_26_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	@@var_12_object:GetScene(var_16_object);
	var_27_bool = var_15_object != var_16_object;
	if(var_27_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	var_11_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_173(var_42_bool)
{
	var_43_int = 0; var_44_int = 0;
	GetVariable("nouse_container", var_44_int);
	var_42_bool = !var_44_int;
	return 2;
}


func_143(var_7_bool, var_8_object)
{
	var_9_int = 0; var_10_int = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_107(var_11_bool, var_12_object);
	var_28_bool = var_11_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	var_29_bool = 0; var_30_object = Obj(); var_31_string = "";
	var_8_object = var_30_object;
	func_90(var_29_bool, var_30_object, "noaccess");
	var_38_bool = var_29_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_7_bool = 1;
		return 2;
	}
	@@var_8_object:GetProperty("noaccess", var_10_int);
	var_7_bool = var_10_int == (int)0;
	return 2;
}


func_179(var_61_int, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateIntVector(var_64_object);
	@@var_64_object:add(var_61_int);
	@@var_64_object:add(var_62_int);
	SendWorldWndMessage((int)3, var_64_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_88(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_90(var_29_bool, var_30_object, var_31_string)
{
	var_32_bool = 0; var_33_bool = 0;
	var_36_bool = IsFuncExist(var_30_object, "HasProperty", (int)2);
	var_37_bool = var_36_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	@@var_30_object:HasProperty(var_31_string, var_33_bool);
	var_33_bool = var_29_bool;
	return 2;
}


func_191(var_49_bool, var_50_object, var_51_object, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0;
	@@var_51_object:GetItemID(var_56_int);
	GetInvItemProperty(var_57_int, var_56_int, "Category");
	@@var_50_object:AddItem(var_58_bool, var_51_object, var_57_int, var_52_int);
	var_60_bool = var_58_bool;
	if(var_60_bool != 0) {
		var_61_int = 0; var_62_int = 0;
		var_56_int = var_61_int;
		var_52_int = var_62_int;
		func_179(var_61_int, var_62_int);
	}
	var_58_bool = var_49_bool;
	return 6;
}


