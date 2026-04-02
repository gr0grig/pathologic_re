// @GLOBALS: 0:object:Bull

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
	{
		object var_6_object;
		func_337(var_6_object);
		var_2_object = var_6_object;
		object var_9_object;
		func_337(var_9_object);
		var_3_object = var_9_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, float var_7_float)
	{
		int var_9_int;
		@GetVariable("b6q01KlaraVisit", var_9_int);
		if(!var_9_int) { //@nz
			int var_12_int; float var_13_float;
			var_7_float = var_13_float;
			func_428(var_12_int, var_13_float);
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string)
	{
		object var_22_object; float var_23_float; object var_24_object; int var_25_int; bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector; string var_29_string; string var_30_string; int var_31_int; object var_32_object; object var_33_object; object var_34_object; object var_35_object; int var_36_int;
		@Trace(var_6_string);
		if(var_6_string == "place_klara") {
			@GetSceneByName(var_22_object, "storojka");
			object var_40_object; object var_41_object;
			var_22_object = var_41_object;
			func_354(var_40_object, var_41_object, "pt_b6q01_klara", "NPC_Klara", "b6q01_klara.xml");
			@GetGameTime(var_23_float);
			@SetTimeEvent(0, (var_23_float + 0.4));
			var_22_object = null;
		} else if(var_6_string == "remove_klara") {
				@Trigger(var_40_object, "cleanup");
		}
	Label_273:
		for(;;) {

		}
	
		if(var_6_string == "cutscene") {
			object var_65_object;
			func_343(var_65_object, "cs_burah_danko_microscope");
		} else if(var_6_string == "cutscene_end") {
			@SetVariable("b6q01MicroscopeCS", 1);
		} else if(var_6_string == "init_termitnik") {
			@GetSceneByName(var_24_object, "termitnik2");
			object var_80_object; object var_81_object;
			var_24_object = var_81_object;
			func_354(var_80_object, var_81_object, "pt_b6q01_mat", "NPC_Mat", "b6q01_mat.xml");
			var_25_int = 1;

			for(;;) {
				var_24_object->GetLocator(("pt_b6q01_agony" + var_25_int), var_26_bool, var_27_cvector, var_28_cvector);
				if(!var_26_bool) { //@nz
				} else {
					@irand(var_31_int, 3);
					if(var_31_int == 0) {
						var_29_string = "pers_worker";
						var_30_string = "agony1_man.xml";
					} else {
					if(var_31_int == 1) {
						var_29_string = "pers_morlok";
						var_30_string = "agony1_morlok.xml";
						goto Label_111;
					}
					var_29_string = "pers_woman";
					var_30_string = "agony1_woman.xml";
		}
				if(var_6_string == "clean_termitnik") {
					@Trigger(var_80_object, "cleanup");
					func_409(var_2_object, "cleanup");
					func_409(var_3_object, "cleanup");
				}
				if(var_6_string == "init_altar") {
					@GetMainOutdoorScene(var_33_object);
					object var_128_object; object var_129_object;
					var_33_object = var_129_object;
					func_372(var_128_object, var_129_object, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
					var_4_object = var_128_object;
					object var_146_object; object var_147_object;
					var_33_object = var_147_object;
					func_372(var_146_object, var_147_object, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
					var_5_object = var_146_object;
					var_151_object = GlobalVars[0];
					object var_152_object; object var_153_object;
					var_33_object = var_153_object;
					func_354(var_152_object, var_153_object, "pt_b6q01_bull", "pers_bull", "b6q01_bull.xml");
					var_152_object = var_151_object;
					GlobalVars[0] = var_151_object;
				}
				if(var_6_string == "sacrifice") {
					var_159_object = GlobalVars[0];
					@RemoveActor(var_159_object);
					var_4_object->GetActor(var_34_object); //@t
					@RemoveActor(var_34_object);
					var_4_object->Remove(); //@t
					var_5_object->GetActor(var_34_object); //@t
					@RemoveActor(var_34_object);
					var_5_object->Remove(); //@t
					object var_160_object;
					func_343(var_160_object, "quest_b6_01_cutscene");
				}
				if(var_6_string == "sacrifice_end") {
					@GetMainOutdoorScene(var_35_object);
					object var_164_object; object var_165_object;
					var_35_object = var_165_object;
					func_390(var_164_object, var_165_object, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
					var_4_object = var_164_object;
					object var_183_object; object var_184_object;
					var_35_object = var_184_object;
					func_390(var_183_object, var_184_object, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
					var_5_object = var_183_object;
				}
				if(var_6_string == "cleanup") {
					@GetVariable("b6q01", var_36_int);
					if(var_36_int != 1000)
						func_274();
					else
						func_290(var_31_int, var_32_object, Obj(), Obj(), Obj(), var_36_int);
					if(var_6_string == "fail")
						func_274();
					if(!(var_6_string == "completed")) goto Label_273;
					func_282();
				}
				}
			Label_111:
				@AddActor(var_32_object, var_29_string, var_24_object, var_27_cvector, var_28_cvector, var_30_string);
				var_32_object = null;
				var_25_int += 1;
			}
			object var_88_object; object var_89_object;
			var_24_object = var_89_object;
			func_354(var_88_object, var_89_object, "pt_b6q01_butcher1", "pers_butcher", "b6q01_butcher.xml");
			var_3_object->add(var_88_object); //@t
			object var_93_object; object var_94_object;
			var_24_object = var_94_object;
			func_354(var_93_object, var_94_object, "pt_b6q01_butcher2", "pers_butcher", "b6q01_butcher.xml");
			var_3_object->add(var_93_object); //@t
			object var_98_object; object var_99_object;
			var_24_object = var_99_object;
			func_354(var_98_object, var_99_object, "pt_b6q01_butcher3", "pers_butcher", "b6q01_butcher.xml");
			var_3_object->add(var_98_object); //@t
			var_24_object = null;

		}
	
	}

}


void func_354(object var_40_object, object var_41_object, string var_42_string, string var_43_string, string var_44_string)
{
	bool var_49_bool; cvector var_50_cvector; cvector var_51_cvector;
	var_41_object->GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	if(!var_49_bool) //@nz
		@Trace(("Locator " + var_42_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string);
	object var_52_object = var_40_object;
	
}
EMIT "Stack[-1] = 0";


void func_290(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
{
	func_409(var_2_object, "cleanup");
	func_409(var_3_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_4_object != 0)
		var_4_object->Remove(); //@t
	if(var_5_object != 0)
		var_5_object->Remove(); //@t
	var_203_object = GlobalVars[0];
	if(var_203_object != 0) {
		var_204_object = GlobalVars[0];
		@Trigger(var_204_object, "cleanup");
	}
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_208_object;
	func_331(var_208_object);
	@RemoveActor(var_208_object);
}


void func_390(object var_164_object, object var_165_object, string var_166_string, string var_167_string, string var_168_string)
{
	bool var_173_bool; cvector var_174_cvector; cvector var_175_cvector;
	var_165_object->GetLocator(var_166_string, var_173_bool, var_174_cvector, var_175_cvector);
	if(!var_173_bool) //@nz
		@Trace(("Locator " + var_166_string) + " doesn't exist");
	else
		var_165_object->AddStationaryActor(Obj(), var_174_cvector, var_175_cvector, var_167_string, var_168_string, true);
	object var_176_object = var_164_object;
	
}
EMIT "Stack[-1] = 0";


void func_331(object var_208_object)
{
	object var_210_object;
	@self(var_210_object);
	var_210_object = var_208_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_428(int var_12_int, float var_13_float)
{
	float var_17_float;
	var_13_float = var_17_float;
	int var_14_int;
	func_437(var_14_int, 525670, 525669, var_17_float);
	var_14_int = var_12_int;
}


void func_337(object var_6_object)
{
	object var_8_object;
	@CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_274(void)
{
	@SetVariable("b6q01", -1);
	func_290(var_31_int, var_32_object, var_33_object, var_34_object, var_35_object, var_36_int);
}


void func_372(object var_128_object, object var_129_object, string var_130_string, string var_131_string, string var_132_string)
{
	bool var_137_bool; cvector var_138_cvector; cvector var_139_cvector;
	var_129_object->GetLocator(var_130_string, var_137_bool, var_138_cvector, var_139_cvector);
	if(!var_137_bool) //@nz
		@Trace(("Locator " + var_130_string) + " doesn't exist");
	else
		var_129_object->AddStationaryActor(Obj(), var_138_cvector, var_139_cvector, var_131_string, var_132_string);
	object var_140_object = var_128_object;
	
}
EMIT "Stack[-1] = 0";


void func_437(int var_14_int, int var_15_int, int var_16_int, float var_17_float)
{
	int var_19_int;
	@AddMessage(var_15_int, var_16_int, var_17_float, var_19_int);
	@SendWorldWndMessage(6);
	var_19_int = var_14_int;
}


void func_343(object var_65_object, string var_66_string)
{
	object var_69_object;
	@GetMainOutdoorScene(var_69_object);
	object var_70_object;
	@AddBlankActor(var_70_object, var_69_object, var_66_string, (var_66_string + ".bin"));
	var_70_object = var_65_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_409(object var_112_object, string var_113_string)
{
	int var_117_int; int var_118_int; object var_119_object;
	if(var_112_object != 0) {
		var_112_object->size(var_117_int);
		var_118_int = 0;

		for(;;) {
			if(!(var_118_int < var_117_int)) goto Label_427;
			var_112_object->get(var_119_object, var_118_int);
			if(var_119_object != 0)
				@Trigger(var_119_object, var_113_string);
			var_119_object = null;
			var_118_int += 1;
		}
	}
Label_427:
}


void func_282(void)
{
	@SetVariable("b6q01", 1000);
	func_290(var_31_int, var_32_object, var_33_object, var_34_object, var_35_object, var_36_int);
}


