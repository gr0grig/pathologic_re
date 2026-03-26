// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:d6q03|W:completed|W:fail|W:place_albinos|W:pt_d6q03_albinos|W:pers_albinos|W:d6q03_albinos.xml|W:albinos_retreated|W:d6q03AlbinosFlee|A:Remove|W:albinos_dead|W:d6q03AlbinosKilled|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Adding diary entry
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x87 vars=int,float
// @PE: 0x87

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "completed";
	if(var_5_bool != 0) {
		func_83();
	} else {
		var_21_bool = var_1_string == "fail";
		if(var_21_bool != 0) {
			func_75();
			goto Label_63;
		}
		var_25_bool = var_1_string == "place_albinos";
		if(var_25_bool != 0) {
			GetMainOutdoorScene(var_3_object);
			var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
			var_3_object = var_27_object;
			func_146(var_26_object, var_27_object, "pt_d6q03_albinos", "pers_albinos", "d6q03_albinos.xml");
			var_0_object = var_26_object;
			var_3_object = 0;
			goto Label_63;
		}
		var_45_bool = var_1_string == "albinos_retreated";
		if(var_45_bool != 0) {
			SetVariable("d6q03AlbinosFlee", (int)1);
			@@@var_0_object:Remove();
			goto Label_63;
		}
		var_49_bool = var_1_string == "albinos_dead";
		if(var_49_bool == 0) goto Label_63;
		SetVariable("d6q03AlbinosKilled", (int)1);
		func_206();
		@@@var_0_object:Remove();
	}
Label_63:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_64();
	return 0;
}


main(var_0_object)
{
	SetVariable("d6q03", (int)1);
	var_3_int = 0;
	func_116((int)6);
	return 0;
}


func_64()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d6q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_75();
	}
	return 2;
}


func_164(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj();
	GetDiaryRoot(var_69_object);
	var_70_bool = var_69_object == 0; //@nz
	if(var_70_bool != 0) {
		Trace("Can't retrieve diary root");
		var_67_object = 0;
		return 2;
	}
	var_69_object = var_67_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_105(var_0_object)
{
	EventDisable(26);
	var_9_object = var_0_object;
	if(var_9_object != 0) {
		@@@var_0_object:Remove();
	}
	var_10_object = Obj();
	func_140(var_10_object);
	RemoveActor(var_10_object);
	return 0;
}


func_75()
{
	SetVariable("d6q03", (int)-1);
	func_105(var_4_int);
	return 0;
}


func_140(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_206()
{
	var_52_object = Obj(); var_53_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_53_object, (int)108, (int)2, (int)13731);
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0;
	var_53_object = var_59_object;
	func_177(var_58_bool, var_59_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_177(var_58_bool, var_59_object, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj(); var_63_int = 0; var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0;
	func_164(Obj());
	var_67_object = var_64_object;
	@@var_64_object:Find(var_60_int, var_65_object);
	var_72_bool = var_65_object == 0; //@nz
	if(var_72_bool != 0) {
		var_74_int = "Can't find diary parent with id: " + var_60_int;
		Trace(var_74_int);
		var_58_bool = 0;
		return 6;
	}
	@@var_65_object:AddChild(var_59_object);
	SetVariable("player_diary", (int)1);
	@@var_59_object:GetCategory(var_66_int);
	SetDiarySection(var_66_int);
	var_58_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_146(var_26_object, var_27_object, var_28_string, var_29_string, var_30_string)
{
	var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj();
	@@var_27_object:GetLocator(var_28_string, var_35_bool, var_36_cvector, var_37_cvector);
	var_39_bool = var_35_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Locator " + var_28_string;
		var_43_int = var_41_int + " doesn't exist";
		Trace(var_43_int);
	} else {
		@@var_27_object:AddStationaryActor(Obj(), var_36_cvector, var_37_cvector, var_29_string, var_30_string);
	}
	var_38_object = var_26_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_83()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("d6q03", var_7_int);
	var_9_bool = 0;
	var_9_bool = 0;
	var_11_bool = var_7_int != (int)1000;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int != (int)-1;
		if(var_13_bool != 0) {
			var_9_bool = 1;
		}
	}
	if(var_9_bool != 0) {
		SetVariable("d6q03", (int)1000);
		func_105(var_7_int);
	}
	return 2;
}


func_116(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_float = var_3_int * (int)24;
	var_8_bool = var_5_float >= var_7_float;
	if(var_8_bool != 0) {
		func_105(var_5_float);
	} else {
		var_15_float = var_3_int * (int)24;
		SetTimeEvent((int)0, var_15_float);
		Hold();
	}
	return 2;
	
}


