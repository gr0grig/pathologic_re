// @IMPORTS: SetVisibility/1,Hold/0,GetItem/2,GetItemAmount/2,RemoveActor/1,GetScene/1,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3
// @STRINGS: W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:nouse_container|A:add|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object

task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = 0; var_7_object = Obj();
	var_0_object = var_7_object;
	func_97(var_6_bool, var_7_object);
	var_40_bool = var_6_bool == 0; //@nz
	if(var_40_bool != 1) {
		var_41_bool = 0;
		func_127(var_41_bool);
		var_45_bool = var_41_bool == 0; //@nz
		if(var_45_bool != 1) {
			var_5_bool = 0;
		}
	}
	if(var_5_bool != 0) {
		return 4;
	}
	GetItem(var_3_object, (int)0);
	GetItemAmount(var_4_int, (int)0);
	var_48_bool = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	var_0_object = var_49_object;
	var_3_object = var_50_object;
	var_4_int = var_51_int;
	func_145(var_48_bool, var_49_object, var_50_object, var_51_int);
	if(var_48_bool != 0) {
		var_65_object = Obj();
		func_121(var_65_object);
		RemoveActor(var_65_object);
	}
	return 4;
}
EMIT "Stack[-2] = 0";


main()
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_97(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_61(var_10_bool, var_11_object);
	var_27_bool = var_10_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_7_object = var_29_object;
	func_44(var_28_bool, var_29_object, "noaccess");
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_6_bool = 1;
		return 2;
	}
	@@var_7_object:GetProperty("noaccess", var_9_int);
	var_6_bool = var_9_int == (int)0;
	return 2;
}


func_133(var_60_int, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateIntVector(var_63_object);
	@@var_63_object:add(var_60_int);
	@@var_63_object:add(var_61_int);
	SendWorldWndMessage((int)3, var_63_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_44(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0;
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", (int)2);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	@@var_29_object:HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
	return 2;
}


func_145(var_48_bool, var_49_object, var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	@@var_50_object:GetItemID(var_55_int);
	GetInvItemProperty(var_56_int, var_55_int, "Category");
	@@var_49_object:AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	var_59_bool = var_57_bool;
	if(var_59_bool != 0) {
		var_60_int = 0; var_61_int = 0;
		var_55_int = var_60_int;
		var_51_int = var_61_int;
		func_133(var_60_int, var_61_int);
	}
	var_57_bool = var_48_bool;
	return 6;
}


func_56(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	@@var_22_object:IsDead(var_24_bool);
	var_24_bool = var_21_bool;
	return 2;
}


func_121(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	self(var_67_object);
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_61(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj();
	var_16_bool = var_11_object == 0; //@ne
	if(var_16_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_17_bool = 0;
	var_17_bool = 0;
	var_20_bool = IsFuncExist(var_11_object, "IsDead", (int)1);
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_11_object = var_22_object;
		func_56(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	GetScene(var_14_object);
	var_25_bool = var_14_object == 0; //@ne
	if(var_25_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	@@var_11_object:GetScene(var_15_object);
	var_26_bool = var_14_object != var_15_object;
	if(var_26_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_10_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_127(var_41_bool)
{
	var_42_int = 0; var_43_int = 0;
	GetVariable("nouse_container", var_43_int);
	var_41_bool = !var_43_int;
	return 2;
}


