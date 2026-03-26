// @IMPORTS: SetVariable/2,GetSceneByName/2,Trace/1,RemoveActor/1,GetVariable/2,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:d1q03|W:ospina_kabak|W:pt_d1q04_butcher|W:pers_butcher|W:d1q03_butcher.xml|W:ospina_kabak@door1|W:unlock_butcher|W:butcher_fail|W:butcher_battle|W:butcher_death|W:eva_finish|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:d1q03IsKapella
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x1b vars=string
// @EVENT_9: op=0xa4 vars=int,float
// @PE: 0x1b,0xa4

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "unlock_butcher";
	if(var_3_bool != 0) {
		var_4_string = ""; var_5_bool = 0;
		func_193("ospina_kabak@door1", (bool)0);
	} else {
		var_15_bool = var_1_string == "butcher_fail";
		if(var_15_bool != 0) {
			func_262();
			func_109();
			goto Label_100;
		}
		var_49_bool = var_1_string == "butcher_battle";
		if(var_49_bool != 0) {
			SetVariable("d1q03", (int)2);
			goto Label_100;
		}
		var_53_bool = var_1_string == "butcher_death";
		if(var_53_bool != 0) {
			var_54_bool = 0;
			func_316(var_54_bool);
			if(var_54_bool != 0) {
				func_223();
				func_109();
			} else {
				func_236();
				func_101();
		}
			var_78_bool = var_1_string == "eva_finish";
			if(var_78_bool == 0) goto Label_100;
			RemoveActor(var_0_object);
			var_79_bool = 0;
			func_316(var_79_bool);
			if(var_79_bool != 0) {
				func_210();
				func_101();
				goto Label_100;
			}
			func_249();
			func_109();
		}
		goto Label_100;
	}
Label_100:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_117();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	SetVariable("d1q03", (int)1);
	GetSceneByName(var_2_object, "ospina_kabak");
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
	var_2_object = var_7_object;
	func_175(var_6_object, var_7_object, "pt_d1q04_butcher", "pers_butcher", "d1q03_butcher.xml");
	var_0_object = var_6_object;
	var_24_string = ""; var_25_bool = 0;
	func_193("ospina_kabak@door1", (bool)1);
	var_34_int = 0;
	func_145((int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_128(var_0_object)
{
	EventDisable(26);
	var_40_object = var_0_object;
	if(var_40_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_42_string = ""; var_43_bool = 0;
	func_193("ospina_kabak@door1", (bool)0);
	var_44_object = Obj();
	func_169(var_44_object);
	RemoveActor(var_44_object);
	return 0;
}


func_193(var_24_string, var_25_bool)
{
	var_26_object = Obj(); var_27_object = Obj();
	FindActor(var_27_object, var_24_string);
	var_28_bool = var_27_object == 0; //@nz
	if(var_28_bool != 0) {
		var_30_int = "Door " + var_24_string;
		var_32_int = var_30_int + " not found";
		Trace(var_32_int);
	} else {
		@@var_27_object:SetProperty("locked", var_25_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_262()
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateDiaryEntry(var_17_object, (int)42, (int)2, (int)512124);
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0;
	var_17_object = var_22_object;
	func_288(var_21_bool, var_22_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_145(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_float = var_34_int * (int)24;
	var_39_bool = var_36_float >= var_38_float;
	if(var_39_bool != 0) {
		func_128(var_36_float);
	} else {
		var_49_float = var_34_int * (int)24;
		SetTimeEvent((int)0, var_49_float);
		Hold();
	}
	return 2;
	
}


func_210()
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateDiaryEntry(var_81_object, (int)38, (int)2, (int)512120);
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0;
	var_81_object = var_86_object;
	func_288(var_85_bool, var_86_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_275(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	GetDiaryRoot(var_32_object);
	var_33_bool = var_32_object == 0; //@nz
	if(var_33_bool != 0) {
		Trace("Can't retrieve diary root");
		var_30_object = 0;
		return 2;
	}
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_223()
{
	var_59_object = Obj(); var_60_object = Obj();
	CreateDiaryEntry(var_60_object, (int)39, (int)2, (int)512121);
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0;
	var_60_object = var_65_object;
	func_288(var_64_bool, var_65_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_288(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0;
	func_275(Obj());
	var_30_object = var_27_object;
	@@var_27_object:Find(var_23_int, var_28_object);
	var_35_bool = var_28_object == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Can't find diary parent with id: " + var_23_int;
		Trace(var_37_int);
		var_21_bool = 0;
		return 6;
	}
	@@var_28_object:AddChild(var_22_object);
	SendWorldWndMessage((int)7);
	@@var_22_object:GetCategory(var_29_int);
	SetDiarySection(var_29_int);
	var_21_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_101()
{
	SetVariable("d1q03", (int)1000);
	func_128(var_1_string);
	return 0;
}


func_169(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj();
	self(var_46_object);
	var_46_object = var_44_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_236()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)40, (int)2, (int)512122);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_288(var_72_bool, var_73_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_109()
{
	SetVariable("d1q03", (int)-1);
	func_128(var_4_int);
	return 0;
}


func_175(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	var_19_bool = var_15_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Locator " + var_8_string;
		var_23_int = var_21_int + " doesn't exist";
		Trace(var_23_int);
	} else {
		AddActor(Obj(), var_9_string, var_7_object, var_16_cvector, var_17_cvector, var_10_string);
	}
	var_18_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_117()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d1q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_109();
	}
	return 2;
}


func_249()
{
	var_88_object = Obj(); var_89_object = Obj();
	CreateDiaryEntry(var_89_object, (int)41, (int)2, (int)512123);
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0;
	var_89_object = var_94_object;
	func_288(var_93_bool, var_94_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_316(var_54_bool)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("d1q03IsKapella", var_56_int);
	var_54_bool = var_56_int != (int)0;
	return 2;
}


