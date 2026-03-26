// @IMPORTS: SetVariable/2,Trace/1,PlaySound/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,GetSceneByName/2,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:d4q03|W:warehouse_gangster@door1|W:iwarehouse_gangster@door1|W:warehouse_gangster|W:pt_gangster|W:pers_grabitel|W:d4q03_grabitel.xml|A:add|W:scene_load|W:attack|W:door|W:gang_attack|W:death|A:size|A:get|A:IsDead|W:d4q03_alldead|W:completed|W:cleanup|A:clear|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x31 vars=string
// @EVENT_9: op=0xc7 vars=int,float
// @PE: 0xc7

task_0_event_26(var_0_object, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0;
	Trace(var_1_string);
	var_11_bool = var_1_string == "scene_load";
	if(var_11_bool != 0) {
		var_12_object = Obj(); var_13_string = "";
		var_12_object = var_0_object;
		func_256(var_12_object, "attack");
		PlaySound("door");
	}
	var_25_bool = var_1_string == "gang_attack";
	if(var_25_bool != 0) {
		var_26_object = Obj(); var_27_string = "";
		var_26_object = var_0_object;
		func_256(var_26_object, "attack");
	} else {
		var_29_bool = var_1_string == "death";
		if(var_29_bool != 0) {
			@@@var_0_object:size(var_6_int);
			var_7_int = 0;

		Label_78:
			var_30_bool = var_7_int < var_6_int;
			if(var_30_bool != 0) {
				@@@var_0_object:get(var_8_object, var_7_int);
				@@var_8_object:IsDead(var_9_bool);
				var_31_bool = var_9_bool == 0; //@nz
				if(var_31_bool != 0) {
				} else {
					var_8_object = 0;
					var_7_int = var_7_int + (int)1;
					goto Label_78;
		}
				var_49_bool = var_1_string == "completed";
				if(var_49_bool == 0) goto Label_114;
				func_134();
			}
		}
		var_32_bool = var_7_int == var_6_int;
		if(var_32_bool != 0) {
			SetVariable("d4q03_alldead", (int)1);
			var_35_string = ""; var_36_bool = 0;
			func_240("iwarehouse_gangster@door1", (bool)0);
			var_45_string = ""; var_46_bool = 0;
			func_240("warehouse_gangster@door1", (bool)1);
		}
		goto Label_114;
	}
Label_114:
	return 8;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_115();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0;
	SetVariable("d4q03", (int)1);
	var_7_string = ""; var_8_bool = 0;
	func_240("warehouse_gangster@door1", (bool)0);
	var_17_string = ""; var_18_bool = 0;
	func_240("iwarehouse_gangster@door1", (bool)1);
	var_19_object = Obj();
	func_210(var_19_object);
	var_0_object = var_19_object;
	var_22_object = Obj(); var_23_string = "";
	func_216(var_22_object, "warehouse_gangster");
	var_22_object = var_3_object;
	var_4_int = 0;
	
Label_25:
	var_27_bool = var_4_int < (int)7;
	if(var_27_bool != 0) {
		var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
		var_3_object = var_29_object;
		var_35_int = var_4_int + (int)1;
		var_30_string = "pt_gangster" + var_35_int;
		func_222(var_28_object, var_29_object, var_30_string, "pers_grabitel", "d4q03_grabitel.xml");
		@@@var_0_object:add(var_28_object);
		var_4_int = var_4_int + (int)1;
		goto Label_25;
	}
	var_50_int = 0;
	func_180((int)4);
	return 4;
}
EMIT "Stack[-2] = 0";


func_256(var_56_object, var_57_string)
{
	var_58_int = 0; var_59_int = 0; var_60_object = Obj(); var_61_int = 0; var_62_int = 0; var_63_object = Obj();
	@@var_56_object:size(var_61_int);
	var_62_int = 0;
	
Label_260:
	var_64_bool = var_62_int < var_61_int;
	if(var_64_bool != 0) {
		@@var_56_object:get(var_63_object, var_62_int);
		var_65_object = var_63_object;
		if(var_65_object != 0) {
			Trigger(var_63_object, var_57_string);
		}
		var_63_object = 0;
		var_62_int = var_62_int + (int)1;
		goto Label_260;
	}
	return 6;
}


func_134()
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("d4q03", var_51_int);
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_51_int != (int)1000;
	if(var_55_bool != 0) {
		var_57_bool = var_51_int != (int)-1;
		if(var_57_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		SetVariable("d4q03", (int)1000);
		func_156(var_51_int);
	}
	return 2;
}


func_204(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	self(var_73_object);
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_240(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@nz
	if(var_11_bool != 0) {
		var_13_int = "Door " + var_7_string;
		var_15_int = var_13_int + " not found";
		Trace(var_15_int);
	}
	@@var_10_object:SetProperty("locked", var_8_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_210(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateObjectVector(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_115()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d4q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_126();
	}
	return 2;
}


func_180(var_50_int)
{
	var_51_float = 0; var_52_float = 0;
	GetGameTime(var_52_float);
	var_54_float = var_50_int * (int)24;
	var_55_bool = var_52_float >= var_54_float;
	if(var_55_bool != 0) {
		func_156(var_52_float);
	} else {
		var_76_float = var_50_int * (int)24;
		SetTimeEvent((int)0, var_76_float);
		Hold();
	}
	return 2;
	
}


func_216(var_22_object, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj();
	GetSceneByName(var_25_object, var_23_string);
	var_25_object = var_22_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_126()
{
	SetVariable("d4q03", (int)-1);
	func_156(var_4_int);
	return 0;
}


func_156(var_0_object)
{
	EventDisable(26);
	var_56_object = Obj(); var_57_string = "";
	var_56_object = var_0_object;
	func_256(var_56_object, "cleanup");
	var_67_string = ""; var_68_bool = 0;
	func_240("iwarehouse_gangster@door1", (bool)0);
	var_69_string = ""; var_70_bool = 0;
	func_240("warehouse_gangster@door1", (bool)1);
	@@@var_0_object:clear();
	var_71_object = Obj();
	func_204(var_71_object);
	RemoveActor(var_71_object);
	return 0;
}


func_222(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj();
	@@var_29_object:GetLocator(var_30_string, var_40_bool, var_41_cvector, var_42_cvector);
	var_44_bool = var_40_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_46_int = "Locator " + var_30_string;
		var_48_int = var_46_int + " doesn't exist";
		Trace(var_48_int);
	} else {
		AddActor(Obj(), var_31_string, var_29_object, var_41_cvector, var_42_cvector, var_32_string);
	}
	var_43_object = var_28_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


