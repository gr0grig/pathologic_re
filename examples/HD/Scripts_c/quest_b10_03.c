// @IMPORTS: Trace/1,GetMainOutdoorScene/1,RandOneOf/11,AddActor/5,AddActor/6,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,FindActor/2
// @STRINGS: W:vagon_mishka@door1|W:place_doll|W:pt_b10q03_plant|A:GetLocator|W:grass_black_tvir|W:grass_blood_tvir|W:grass_brown_tvir|W:grass_savyur|W:grass_white_plet|W:scripted|W:item_|W:_stat.xml|A:AddStationaryActorByType|W:New b10q03 plant: "|W:" at location #|W:Total b10q03 plants: |W:pt_b10q03_toy|W:b10q03_toy_burah.xml|W:pt_b10q03_toy locator not found|W:place_blood|W:b10q03_blood|W:b10q03_blood_sel|W:b10q03_blood.xml|W:fail|W:completed|W:b10q03|A:Remove|W:Door |W:locked|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0xa vars=string
// @EVENT_9: op=0xa9 vars=int,float
// @PE: 0xa9

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_int = 0; var_8_string = ""; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_int = 0; var_17_string = ""; var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	Trace(var_2_string);
	var_22_bool = var_2_string == "place_doll";
	if(var_22_bool != 0) {
		GetMainOutdoorScene(var_12_object);
		var_16_int = 0;

	Label_19:
		var_25_int = var_16_int + (int)1;
		var_26_int = "pt_b10q03_plant" + var_25_int;
		@@var_12_object:GetLocator(var_26_int, var_13_bool, var_14_cvector, var_15_cvector);
		var_27_bool = var_13_bool == 0; //@nz
		if(var_27_bool != 0) {
		} else {
				RandOneOf(var_17_string, (int)1, (int)1, (int)1, (int)2, (int)2, "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
				var_47_int = "item_" + var_17_string;
				var_49_int = var_47_int + "_stat.xml";
				@@var_12_object:AddStationaryActorByType(var_18_object, var_14_cvector, var_15_cvector, "scripted", var_49_int);
				var_51_int = "New b10q03 plant: \"" + var_17_string;
				var_53_int = var_51_int + "\" at location #";
				var_55_int = var_16_int + (int)1;
				var_56_int = var_53_int + var_55_int;
				Trace(var_56_int);
				var_18_object = 0;
				var_16_int = var_16_int + (int)1;
				goto Label_19;
	}
			var_59_bool = var_2_string == "place_blood";
			if(var_59_bool != 0) {
				GetMainOutdoorScene(var_19_object);
				AddActor(var_20_object, "b10q03_blood", var_19_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
				AddActor(var_1_object, "b10q03_blood_sel", var_19_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "b10q03_blood.xml");
				var_20_object = 0;
				var_19_object = 0;
				goto Label_111;
			}
			var_68_bool = var_2_string == "fail";
			if(var_68_bool != 0) {
				func_123();
				goto Label_111;
			}
			var_76_bool = var_2_string == "completed";
			if(var_76_bool == 0) goto Label_111;
			func_131();
	}
	var_29_int = "Total b10q03 plants: " + var_16_int;
	Trace(var_29_int);
	@@var_12_object:GetLocator("pt_b10q03_toy", var_13_bool, var_14_cvector, var_15_cvector);
	var_31_bool = var_13_bool;
	if(var_31_bool != 0) {
		@@var_12_object:AddStationaryActorByType(var_0_object, var_14_cvector, var_15_cvector, "scripted", "b10q03_toy_burah.xml");
	} else {
		Trace("pt_b10q03_toy locator not found");

	}
	var_12_object = 0;
	goto Label_111;
	
Label_111:
	return 18;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_112();
	return 0;
}


main(var_0_object, var_1_object)
{
	var_2_string = ""; var_3_bool = 0;
	func_180("vagon_mishka@door1", (bool)0);
	var_12_int = 0;
	func_150((int)10);
	return 0;
}


func_131()
{
	SetVariable("b10q03", (int)1000);
	func_139(var_20_object);
	return 0;
}


func_139(var_0_object)
{
	EventDisable(26);
	var_18_object = var_0_object;
	if(var_18_object != 0) {
		@@@var_0_object:Remove();
	}
	var_19_object = Obj();
	func_174(var_19_object);
	RemoveActor(var_19_object);
	return 0;
}


func_174(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_112()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("b10q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_123();
	}
	return 2;
}


func_180(var_2_string, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj();
	FindActor(var_5_object, var_2_string);
	var_6_bool = var_5_object == 0; //@nz
	if(var_6_bool != 0) {
		var_8_int = "Door " + var_2_string;
		var_10_int = var_8_int + " not found";
		Trace(var_10_int);
	} else {
		@@var_5_object:SetProperty("locked", var_3_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_150(var_12_int)
{
	var_13_float = 0; var_14_float = 0;
	GetGameTime(var_14_float);
	var_16_float = var_12_int * (int)24;
	var_17_bool = var_14_float >= var_16_float;
	if(var_17_bool != 0) {
		func_139(var_14_float);
	} else {
		var_24_float = var_12_int * (int)24;
		SetTimeEvent((int)0, var_24_float);
		Hold();
	}
	return 2;
	
}


func_123()
{
	SetVariable("b10q03", (int)-1);
	func_139(var_5_int);
	return 0;
}


