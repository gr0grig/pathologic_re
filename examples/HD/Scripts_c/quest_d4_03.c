// @IMPORTS: SetVariable/2,Trace/1,PlaySound/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,GetSceneByName/2,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:d4q03|W:warehouse_gangster@door1|W:iwarehouse_gangster@door1|W:warehouse_gangster|W:pt_gangster|W:pers_grabitel|W:d4q03_grabitel.xml|A:add|W:scene_load|W:door|W:gang_attack|W:death|A:size|A:get|A:IsDead|W:d4q03_alldead|W:completed|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int params=0
// @EVENT_26: op=0x31 vars=string
// @EVENT_9: op=0xc6 vars=int,float
// @PE: 0xc6

task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_bool = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_bool = 0;
	Trace(var_2_string);
	var_12_bool = var_2_string == "scene_load";
	if(var_12_bool != 0) {
		PlaySound("door");
	}
	var_15_bool = var_2_string == "gang_attack";
	if(var_15_bool != 0) {
		var_1_int = var_1_int + (int)1;
		var_18_bool = var_1_int >= (int)3;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_string = "";
			var_19_object = var_0_object;
			func_256(var_19_object, "attack");
		}
	} else {
		var_32_bool = var_2_string == "death";
		if(var_32_bool != 0) {
			@@@var_0_object:size(var_7_int);
			var_8_int = 0;

		Label_78:
			var_33_bool = var_8_int < var_7_int;
			if(var_33_bool != 0) {
				@@@var_0_object:get(var_9_object, var_8_int);
				@@var_9_object:IsDead(var_10_bool);
				var_34_bool = var_10_bool == 0; //@nz
				if(var_34_bool != 0) {
				} else {
					var_9_object = 0;
					var_8_int = var_8_int + (int)1;
					goto Label_78;
		}
				var_52_bool = var_2_string == "completed";
				if(var_52_bool == 0) goto Label_114;
				func_134();
			}
		}
		var_35_bool = var_8_int == var_7_int;
		if(var_35_bool != 0) {
			SetVariable("d4q03_alldead", (int)1);
			var_38_string = ""; var_39_bool = 0;
			func_239("iwarehouse_gangster@door1", (bool)0);
			var_48_string = ""; var_49_bool = 0;
			func_239("warehouse_gangster@door1", (bool)1);
		}
		goto Label_114;
	}
Label_114:
	return 8;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	func_115();
	return 0;
}


main(var_0_object, var_1_int)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	SetVariable("d4q03", (int)1);
	var_8_string = ""; var_9_bool = 0;
	func_239("warehouse_gangster@door1", (bool)0);
	var_18_string = ""; var_19_bool = 0;
	func_239("iwarehouse_gangster@door1", (bool)1);
	var_20_object = Obj();
	func_209(var_20_object);
	var_0_object = var_20_object;
	var_23_object = Obj(); var_24_string = "";
	func_215(var_23_object, "warehouse_gangster");
	var_23_object = var_4_object;
	var_5_int = 0;
	
Label_25:
	var_28_bool = var_5_int < (int)7;
	if(var_28_bool != 0) {
		var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
		var_4_object = var_30_object;
		var_36_int = var_5_int + (int)1;
		var_31_string = "pt_gangster" + var_36_int;
		func_221(var_29_object, var_30_object, var_31_string, "pers_grabitel", "d4q03_grabitel.xml");
		@@@var_0_object:add(var_29_object);
		var_5_int = var_5_int + (int)1;
		goto Label_25;
	}
	var_51_int = 0;
	func_179((int)4);
	return 4;
}
EMIT "Stack[-2] = 0";


func_256(var_57_object, var_58_string)
{
	var_59_int = 0; var_60_int = 0; var_61_object = Obj(); var_62_int = 0; var_63_int = 0; var_64_object = Obj();
	var_65_object = var_57_object;
	if(var_65_object != 0) {
		@@var_57_object:size(var_62_int);
		var_63_int = 0;

	Label_262:
		var_66_bool = var_63_int < var_62_int;
		if(var_66_bool != 0) {
			@@var_57_object:get(var_64_object, var_63_int);
			var_67_object = var_64_object;
			if(var_67_object != 0) {
				Trigger(var_64_object, var_58_string);
			}
			var_64_object = 0;
			var_63_int = var_63_int + (int)1;
			goto Label_262;
		}
	}
	return 6;
}


func_134()
{
	var_53_int = 0; var_54_int = 0;
	GetVariable("d4q03", var_54_int);
	var_56_bool = 0;
	var_56_bool = 0;
	var_58_bool = var_54_int != (int)1000;
	if(var_58_bool != 0) {
		var_60_bool = var_54_int != (int)-1;
		if(var_60_bool != 0) {
			var_56_bool = 1;
		}
	}
	if(var_56_bool != 0) {
		SetVariable("d4q03", (int)1000);
		func_156(var_54_int);
	}
	return 2;
}


func_203(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj();
	self(var_75_object);
	var_75_object = var_73_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_239(var_8_string, var_9_bool)
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, var_8_string);
	var_12_bool = var_11_object == 0; //@nz
	if(var_12_bool != 0) {
		var_14_int = "Door " + var_8_string;
		var_16_int = var_14_int + " not found";
		Trace(var_16_int);
	} else {
		@@var_11_object:SetProperty("locked", var_9_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_209(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	CreateObjectVector(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_179(var_51_int)
{
	var_52_float = 0; var_53_float = 0;
	GetGameTime(var_53_float);
	var_55_float = var_51_int * (int)24;
	var_56_bool = var_53_float >= var_55_float;
	if(var_56_bool != 0) {
		func_156(var_53_float);
	} else {
		var_78_float = var_51_int * (int)24;
		SetTimeEvent((int)0, var_78_float);
		Hold();
	}
	return 2;
	
}


func_115()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d4q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_126();
	}
	return 2;
}


func_215(var_23_object, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	GetSceneByName(var_26_object, var_24_string);
	var_26_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_156(var_0_object)
{
	EventDisable(26);
	var_57_object = Obj(); var_58_string = "";
	var_57_object = var_0_object;
	func_256(var_57_object, "cleanup");
	var_0_object = 0;
	var_69_string = ""; var_70_bool = 0;
	func_239("iwarehouse_gangster@door1", (bool)0);
	var_71_string = ""; var_72_bool = 0;
	func_239("warehouse_gangster@door1", (bool)1);
	var_73_object = Obj();
	func_203(var_73_object);
	RemoveActor(var_73_object);
	return 0;
}


func_221(var_29_object, var_30_object, var_31_string, var_32_string, var_33_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj();
	@@var_30_object:GetLocator(var_31_string, var_41_bool, var_42_cvector, var_43_cvector);
	var_45_bool = var_41_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_47_int = "Locator " + var_31_string;
		var_49_int = var_47_int + " doesn't exist";
		Trace(var_49_int);
	} else {
		AddActor(Obj(), var_32_string, var_30_object, var_42_cvector, var_43_cvector, var_33_string);
	}
	var_44_object = var_29_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_126()
{
	SetVariable("d4q03", (int)-1);
	func_156(var_5_int);
	return 0;
}


