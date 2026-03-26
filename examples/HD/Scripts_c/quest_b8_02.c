// @IMPORTS: GetSceneByName/2,Trace/1,PlaySound/1,AddActor/6,GetVariable/2,SetVariable/2,RemoveActor/1,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActorByType/6,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:house_vlad|W:b8q02_trigger|W:b8q02_trigger.xml|W:pt_b8q02_book|W:scripted_container|W:b8q02_item_book.xml|W:house_vlad@door2|W:door_close|W:ihouse_vlad@door2|W:pt_b8q02_grabitel|A:GetLocator|W:pers_grabitel|W:b8q02_grabitel.xml|W:book_taken|W:door_open|W:fail|W:completed|W:b8q02|W:cleanup|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x1e vars=string
// @EVENT_9: op=0xa6 vars=int,float
// @PE: 0xa6

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_int = 0; var_5_bool = 0; var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj();
	Trace(var_2_string);
	var_16_bool = var_2_string == "b8q02_trigger";
	if(var_16_bool != 0) {
		PlaySound("door_close");
		var_18_string = ""; var_19_bool = 0;
		func_203("ihouse_vlad@door2", (bool)1);
		GetSceneByName(var_9_object, "house_vlad");
		var_10_int = 1;

	Label_48:
		var_30_int = "pt_b8q02_grabitel" + var_10_int;
		@@var_9_object:GetLocator(var_30_int, var_11_bool, var_12_cvector, var_13_cvector);
		var_31_bool = var_11_bool == 0; //@nz
		if(var_31_bool != 0) {
		} else {
			AddActor(var_14_object, "pers_grabitel", var_9_object, var_12_cvector, var_13_cvector, "b8q02_grabitel.xml");
			var_14_object = 0;
			var_10_int = var_10_int + (int)1;
			goto Label_48;
	}
		var_36_bool = var_2_string == "book_taken";
		if(var_36_bool != 0) {
			func_220();
			PlaySound("door_open");
			var_61_string = ""; var_62_bool = 0;
			func_203("ihouse_vlad@door2", (bool)0);
			goto Label_93;
		}
		var_64_bool = var_2_string == "fail";
		if(var_64_bool != 0) {
			func_105();
			goto Label_93;
		}
		var_78_bool = var_2_string == "completed";
		if(var_78_bool == 0) goto Label_93;
		func_113();
	}
	var_9_object = 0;
	goto Label_93;
	
Label_93:
	return 12;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_94();
	return 0;
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	GetSceneByName(var_3_object, "house_vlad");
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = "";
	var_3_object = var_6_object;
	func_177(var_5_object, var_6_object, "b8q02_trigger", "b8q02_trigger.xml");
	var_0_object = var_5_object;
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_3_object = var_14_object;
	func_185(var_13_object, var_14_object, "pt_b8q02_book", "scripted_container", "b8q02_item_book.xml");
	var_1_object = var_13_object;
	var_31_string = ""; var_32_bool = 0;
	func_203("house_vlad@door2", (bool)0);
	var_41_int = 0;
	func_147((int)8);
	return 2;
}
EMIT "Stack[-1] = 0";


func_121(var_0_object, var_1_object)
{
	EventDisable(26);
	var_47_object = var_0_object;
	if(var_47_object != 0) {
		RemoveActor(var_0_object);
	}
	var_48_object = var_1_object;
	if(var_48_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_50_string = ""; var_51_bool = 0;
	func_203("ihouse_vlad@door2", (bool)0);
	var_52_string = ""; var_53_bool = 0;
	func_203("house_vlad@door2", (bool)1);
	var_54_object = Obj();
	func_171(var_54_object);
	RemoveActor(var_54_object);
	return 0;
}


func_233(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	GetDiaryRoot(var_53_object);
	var_54_bool = var_53_object == 0; //@nz
	if(var_54_bool != 0) {
		Trace("Can't retrieve diary root");
		var_51_object = 0;
		return 2;
	}
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_105()
{
	SetVariable("b8q02", (int)-1);
	func_121(var_4_int, var_5_int);
	return 0;
}


func_171(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj();
	self(var_56_object);
	var_56_object = var_54_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_203(var_31_string, var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, var_31_string);
	var_35_bool = var_34_object == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Door " + var_31_string;
		var_39_int = var_37_int + " not found";
		Trace(var_39_int);
	} else {
		@@var_34_object:SetProperty("locked", var_32_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_177(var_5_object, var_6_object, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj();
	AddActor(var_10_object, var_7_string, var_6_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_8_string);
	var_10_object = var_5_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_113()
{
	SetVariable("b8q02", (int)1000);
	func_121(var_13_cvector, var_14_object);
	return 0;
}


func_147(var_41_int)
{
	var_42_float = 0; var_43_float = 0;
	GetGameTime(var_43_float);
	var_45_float = var_41_int * (int)24;
	var_46_bool = var_43_float >= var_45_float;
	if(var_46_bool != 0) {
		func_121(var_42_float, var_43_float);
	} else {
		var_59_float = var_41_int * (int)24;
		SetTimeEvent((int)0, var_59_float);
		Hold();
	}
	return 2;
	
}


func_246(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0;
	func_233(Obj());
	var_51_object = var_48_object;
	@@var_48_object:Find(var_44_int, var_49_object);
	var_56_bool = var_49_object == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Can't find diary parent with id: " + var_44_int;
		Trace(var_58_int);
		var_42_bool = 0;
		return 6;
	}
	@@var_49_object:AddChild(var_43_object);
	SendWorldWndMessage((int)7);
	@@var_43_object:GetCategory(var_50_int);
	SetDiarySection(var_50_int);
	var_42_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_185(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj();
	@@var_14_object:GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	var_26_bool = var_22_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Locator " + var_15_string;
		var_30_int = var_28_int + " doesn't exist";
		Trace(var_30_int);
	} else {
		AddActorByType(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	}
	var_25_object = var_13_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_220()
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateDiaryEntry(var_38_object, (int)295, (int)2, (int)521493);
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0;
	var_38_object = var_43_object;
	func_246(var_42_bool, var_43_object, (int)293);
	return 2;
}
EMIT "Stack[-1] = 0";


func_94()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("b8q02", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_105();
	}
	return 2;
}


