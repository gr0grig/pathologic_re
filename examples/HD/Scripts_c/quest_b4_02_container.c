// @IMPORTS: RemoveActor/1,IsLoaded/1,FindGeometry/2,Hold/0,GetItem/2,GetItemAmount/2,GetScene/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,FindActor/2,Trigger/2
// @STRINGS: W:quest_b4_02|W:ammo_or_samopal_taken|W:cleanup|W:object|A:Enable|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:add|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0xb
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_26: op=0x18 vars=string
// @EVENT_6: op=0x27 vars=
// @PE: 0x0,0x27,0x52

task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_string = ""; var_4_string = "";
	func_201(var_2_bool, "quest_b4_02", "ammo_or_samopal_taken");
	var_8_object = Obj();
	var_1_object = var_8_object;
	func_55(var_8_object);
	return 0;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = var_3_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_166(var_7_object);
			RemoveActor(var_7_object);
		}
	}
	return 2;
}


task_0_event_6(var_0_bool)
{
	func_16();
	return 0;
}


main(var_0_bool)
{
	var_0_bool = false;
	func_43();
	return 0;
}


func_101(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_166(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_201(var_2_bool, var_3_string, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj();
	FindActor(var_6_object, var_3_string);
	var_7_bool = var_6_object == 0; //@ne
	if(var_7_bool != 0) {
		var_2_bool = 0;
		return 2;
	}
	Trigger(var_6_object, var_4_string);
	var_2_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_106(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	var_23_bool = var_18_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_24_bool = 0;
	var_24_bool = 0;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", (int)1);
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_18_object = var_29_object;
		func_101(var_28_bool, var_29_object);
		if(var_28_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	GetScene(var_21_object);
	var_32_bool = var_21_object == 0; //@ne
	if(var_32_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	@@var_18_object:GetScene(var_22_object);
	var_33_bool = var_21_object != var_22_object;
	if(var_33_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_17_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_43()
{
	var_1_object = Obj(); var_2_object = Obj();
	FindGeometry("object", var_2_object);
	@@var_2_object:Enable((bool)1);
	
Label_50:
	Hold();
	goto Label_50;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_172(var_62_int, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj();
	CreateIntVector(var_65_object);
	@@var_65_object:add(var_62_int);
	@@var_65_object:add(var_63_int);
	SendWorldWndMessage((int)3, var_65_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_142(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_106(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_89(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_16()
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_166(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


func_82()
{
	var_68_object = Obj();
	func_166(var_68_object);
	RemoveActor(var_68_object);
	return 0;
}


func_55(var_8_object)
{
	var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_8_object = var_14_object;
	func_142(var_13_bool, var_14_object);
	var_47_bool = var_13_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 4;
	}
	GetItem(var_11_object, (int)0);
	GetItemAmount(var_12_int, (int)0);
	var_50_bool = 0; var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0;
	var_8_object = var_51_object;
	var_11_object = var_52_object;
	var_12_int = var_53_int;
	func_184(var_50_bool, var_51_object, var_52_object, var_53_int);
	if(var_50_bool != 0) {
		var_8_object = Obj();
		func_82();
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_184(var_50_bool, var_51_object, var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0;
	@@var_52_object:GetItemID(var_57_int);
	GetInvItemProperty(var_58_int, var_57_int, "Category");
	@@var_51_object:AddItem(var_59_bool, var_52_object, var_58_int, var_53_int);
	var_61_bool = var_59_bool;
	if(var_61_bool != 0) {
		var_62_int = 0; var_63_int = 0;
		var_57_int = var_62_int;
		var_53_int = var_63_int;
		func_172(var_62_int, var_63_int);
	}
	var_59_bool = var_50_bool;
	return 6;
}


func_89(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0;
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", (int)2);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
	return 2;
}


