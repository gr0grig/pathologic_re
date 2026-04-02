// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object)
	{
		int var_14_int;
		object var_15_object;
		func_300(var_15_object);
		var_0_object = var_15_object;
		object var_11_object;
		@GetMainOutdoorScene(var_11_object);
		object var_18_object; object var_19_object;
		var_11_object = var_19_object;
		func_306(var_18_object, var_19_object, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
		var_1_object = var_18_object;
		object var_13_object;
		@GetScene(var_13_object);
		object var_12_object;
		@GetSceneByName(var_12_object, "termitnik_mat");
		if(var_13_object != var_12_object) {
			@GetVariable("b8q03MladVladIsVictim", var_14_int);
			if(var_14_int != 0) {
				object var_40_object; object var_41_object;
				var_12_object = var_41_object;
				func_306(var_40_object, var_41_object, "pt_b10q04_prisoner", "NPC_MladVlad", "b10q04_mladvlad.xml");
				var_6_object = var_40_object;
			} else {
				object var_95_object; object var_96_object;
				var_12_object = var_96_object;
				func_306(var_95_object, var_96_object, "pt_b10q04_prisoner", "NPC_BigVlad", "b10q04_bigvlad.xml");
				var_6_object = var_95_object;
			}
		}
		func_270(10);
	
	}
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";
	EMIT "Stack[-4] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, string var_7_string)
	{
		object var_11_object; object var_12_object; object var_13_object;
		@Trace(var_7_string);
		if(var_7_string == "place_morloks") {
			@GetMainOutdoorScene(var_11_object);
			object var_16_object; object var_17_object;
			var_11_object = var_17_object;
			func_306(var_16_object, var_17_object, "pt_b10q04_morlok", "pers_morlok", "b10q04_morlok.xml");
			var_0_object->add(var_16_object); //@t
			object var_34_object; object var_35_object;
			var_11_object = var_35_object;
			func_306(var_34_object, var_35_object, "pt_b10q04_morlok_mishka", "pers_morlok", "b10q04_morlok_mishka.xml");
			var_0_object->add(var_34_object); //@t
			object var_39_object; object var_40_object;
			var_11_object = var_40_object;
			func_306(var_39_object, var_40_object, "pt_b10q04_morlok_laska", "pers_morlok", "b10q04_morlok_laska.xml");
			var_0_object->add(var_39_object); //@t
			object var_44_object; object var_45_object;
			var_11_object = var_45_object;
			func_306(var_44_object, var_45_object, "pt_b10q04_morlok_spi4ka", "pers_morlok", "b10q04_morlok_spi4ka.xml");
			var_0_object->add(var_44_object); //@t
			var_11_object = null;
		}
		if(var_7_string == "init_storojka") {
			@GetSceneByName(var_12_object, "storojka");
			@Trigger(var_12_object, "nolaska");
			object var_53_object; object var_54_object;
			func_306(var_53_object, var_54_object, "pt_b10q04_girl", "pers_girl", "b10q04_girl_laska.xml");
			var_2_object = var_53_object;
			@GetSceneByName(var_54_object, "uprava_admin");
			object var_59_object; object var_60_object;
			func_306(var_59_object, var_60_object, "pt_b10q04_klara", "NPC_Klara", "b10q04_klara.xml");
			var_4_object = var_59_object;
			func_324("vagon_army@door1", false);
			@GetSceneByName(var_60_object, "vagon_army");
			object var_75_object; object var_76_object;
			var_12_object = var_76_object;
			func_306(var_75_object, var_76_object, "pt_b10q04_laska", "NPC_Laska", "b10q04_laska.xml");
			var_3_object = var_75_object;
			object var_80_object; object var_81_object;
			var_12_object = var_81_object;
			func_306(var_80_object, var_81_object, "pt_b10q04_officer", "pers_soldat", "b10q04_officer.xml");
			var_5_object = var_80_object;
			var_12_object = null;
		} else if(var_7_string == "restore_laska") {
				if(var_3_object != 0)
					@Trigger(var_3_object, "cleanup");
				@GetSceneByName(var_13_object, "storojka");
				@Trigger(var_13_object, "laska");
				var_13_object = null;
		}

	
		if(var_7_string == "fail") {
			func_195();
		} else if(var_7_string == "completed") {
			func_203();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, float var_8_float)
	{
		func_181();
	}

}


void func_195(void)
{
	@SetVariable("b10q04", -1);
	func_211(var_6_object, var_7_int, var_8_float, var_9_int, var_10_int);
}


void func_324(string var_77_string, bool var_78_bool)
{
	object var_80_object;
	@FindActor(var_80_object, var_77_string);
	if(!var_80_object) //@nz
		@Trace(("Door " + var_77_string) + " not found");
	else
		var_80_object->SetProperty("locked", var_78_bool);
	
}
EMIT "Stack[-1] = 0";


void func_294(object var_89_object)
{
	object var_91_object;
	@self(var_91_object);
	var_91_object = var_89_object;
}
EMIT "Stack[-1] = 0";


void func_203(void)
{
	@SetVariable("b10q04", 1000);
	func_211(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object);
}


void func_300(object var_15_object)
{
	object var_17_object;
	@CreateObjectVector(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_270(int var_45_int)
{
	float var_46_float; float var_47_float;
	@GetGameTime(var_47_float);
	if(var_47_float >= (var_45_int * 24)) {
		func_245(var_46_float, var_47_float);
	} else {
		@SetTimeEvent(0, (var_45_int * 24));
		@Hold();
	}
	
}


void func_306(object var_18_object, object var_19_object, string var_20_string, string var_21_string, string var_22_string)
{
	bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	var_19_object->GetLocator(var_20_string, var_27_bool, var_28_cvector, var_29_cvector);
	if(!var_27_bool) //@nz
		@Trace(("Locator " + var_20_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_21_string, var_19_object, var_28_cvector, var_29_cvector, var_22_string);
	object var_30_object = var_18_object;
	
}
EMIT "Stack[-1] = 0";


void func_211(object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object)
{
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_6_object != 0)
		@Trigger(var_6_object, "cleanup");
	object var_52_object;
	@GetSceneByName(var_52_object, "storojka");
	@Trigger(var_52_object, "laska");
}
EMIT "Stack[-1] = 0";


void func_245(object var_0_object, object var_1_object)
{
	func_211(var_13_object, var_14_int, var_45_int, var_46_float, var_47_float);
	func_341(var_0_object, "cleanup");
	func_324("vagon_army@door1", true);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_89_object;
	func_294(var_89_object);
	@RemoveActor(var_89_object);
}


void func_341(object var_65_object, string var_66_string)
{
	int var_70_int; int var_71_int; object var_72_object;
	if(var_65_object != 0) {
		var_65_object->size(var_70_int);
		var_71_int = 0;

		for(;;) {
			if(!(var_71_int < var_70_int)) goto Label_359;
			var_65_object->get(var_72_object, var_71_int);
			if(var_72_object != 0)
				@Trigger(var_72_object, var_66_string);
			var_72_object = null;
			var_71_int += 1;
		}
	}
Label_359:
}


void func_181(void)
{
	int var_10_int;
	@GetVariable("b10q04", var_10_int);
	if(var_10_int != 1000)
		func_195();
	int var_9_int;
	func_245(var_9_int, var_10_int);
}


