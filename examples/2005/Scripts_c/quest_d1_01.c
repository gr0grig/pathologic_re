maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool)
	{
		object var_10_object;
		@GetMainOutdoorScene(var_10_object);
		object var_11_object; object var_12_object;
		var_10_object = var_12_object;
		func_273(var_11_object, var_12_object, "d1q01_trigger", "d1q01_trigger.xml");
		var_2_object = var_11_object;
		@GetSceneByName(var_10_object, "warehouse_rubin");
		@Trigger(var_10_object, "norubin");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, string var_9_string)
	{
		object var_16_object; object var_17_object; object var_18_object; object var_19_object; object var_20_object; int var_21_int;
		@Trace(var_9_string);
		if(var_9_string == "place_masks") {
			@GetMainOutdoorScene(var_16_object);
			object var_24_object; object var_25_object;
			var_16_object = var_25_object;
			func_299(var_24_object, var_25_object, "pt_d1q01_birdmask", "pers_birdmask", "d1q01_birdmask.xml");
			object var_42_object; object var_43_object;
			var_16_object = var_43_object;
			func_299(var_42_object, var_43_object, "pt_d1q01_whitemask", "pers_whitemask", "d1q01_whitemask.xml");
			var_16_object = null;
		} else if(var_9_string == "remove_masks") {
				var_24_object->Remove(); //@t
				var_42_object->Remove(); //@t
		}
	Label_187:
		for(;;) {

		}
	
		if(var_9_string == "cutscene_end") {
			@GetMainOutdoorScene(var_17_object);
			object var_51_object; object var_52_object;
			var_17_object = var_52_object;
			func_281(var_51_object, var_52_object, "pt_d1q01_morlok", "pers_morlok", "d1q01_morlok.xml");
			var_3_object = var_51_object;
			object var_69_object; object var_70_object;
			var_17_object = var_70_object;
			func_281(var_69_object, var_70_object, "pt_d1q01_worker", "pers_worker", "d1q01_worker.xml");
			var_4_object = var_69_object;
			if(var_8_bool != 0)
				func_204(var_18_object, var_19_object, var_20_object, var_21_int);
		} else if(var_9_string == "remove_cutscene") {
			func_204(var_18_object, var_19_object, var_20_object, var_21_int);
		} else if(var_9_string == "attack") {
			if(var_3_object != 0)
				@Trigger(var_3_object, "attack");
			if(var_4_object != 0)
				@Trigger(var_4_object, "attack");
		} else if(var_9_string == "place_patrol") {
			@GetMainOutdoorScene(var_18_object);
			object var_91_object; object var_92_object;
			var_18_object = var_92_object;
			func_281(var_91_object, var_92_object, "pt_d1q01_patrol1", "pers_patrool", "d1q01_patrol.xml");
			var_5_object = var_91_object;
			object var_96_object; object var_97_object;
			var_18_object = var_97_object;
			func_281(var_96_object, var_97_object, "pt_d1q01_patrol2", "pers_patrool", "d1q01_patrol.xml");
			var_6_object = var_96_object;
		} else if(var_9_string == "place_morlok_run") {
			@GetMainOutdoorScene(var_19_object);
			object var_103_object; object var_104_object;
			var_19_object = var_104_object;
			func_281(var_103_object, var_104_object, "pt_d1q01_morlok_run_path", "pers_morlok", "d1q01_morlok_run.xml");
		} else if(var_9_string == "place_rubin") {
			@GetSceneByName(var_20_object, "cot_viktor");
			object var_111_object; object var_112_object;
			var_20_object = var_112_object;
			func_281(var_111_object, var_112_object, "pt_d1q01_rubin", "NPC_Rubin", "d1q01_rubin.xml");
			var_7_object = var_111_object;
		}
		if(var_9_string == "cleanup") {
			@GetVariable("d1q01", var_21_int);
			if(var_21_int != 1000)
				func_188();
			else
				func_221(Obj(), Obj(), Obj(), Obj(), var_21_int);
			if(var_9_string == "fail") {
				func_188();
			} else if(var_9_string == "completed") {
				func_196();
			}
		}
		goto Label_187;
	
	}

}


void func_196(void)
{
	@SetVariable("d1q01", 1000);
	func_221(var_17_object, var_18_object, var_19_object, var_20_object, var_21_int);
}


void func_299(object var_24_object, object var_25_object, string var_26_string, string var_27_string, string var_28_string)
{
	bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	var_25_object->GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	if(!var_33_bool) //@nz
		@Trace(("Locator " + var_26_string) + " doesn't exist");
	else
		var_25_object->AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string);
	object var_36_object = var_24_object;
	
}
EMIT "Stack[-1] = 0";


void func_204(object var_2_object, object var_3_object, object var_4_object, bool var_8_bool)
{
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	var_8_bool = true;
}


void func_267(object var_145_object)
{
	object var_147_object;
	@self(var_147_object);
	var_147_object = var_145_object;
}
EMIT "Stack[-1] = 0";


void func_273(object var_11_object, object var_12_object, string var_13_string, string var_14_string)
{
	object var_16_object;
	@AddActor(var_16_object, var_13_string, var_12_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_14_string);
	var_16_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_281(object var_51_object, object var_52_object, string var_53_string, string var_54_string, string var_55_string)
{
	bool var_60_bool; cvector var_61_cvector; cvector var_62_cvector;
	var_52_object->GetLocator(var_53_string, var_60_bool, var_61_cvector, var_62_cvector);
	if(!var_60_bool) //@nz
		@Trace(("Locator " + var_53_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_54_string, var_52_object, var_61_cvector, var_62_cvector, var_55_string);
	object var_63_object = var_51_object;
	
}
EMIT "Stack[-1] = 0";


void func_317(string var_135_string, bool var_136_bool)
{
	object var_138_object;
	@FindActor(var_138_object, var_135_string);
	if(!var_138_object) //@nz
		@Trace(("Door " + var_135_string) + " not found");
	else
		var_138_object->SetProperty("locked", var_136_bool);
	
}
EMIT "Stack[-1] = 0";


void func_188(void)
{
	@SetVariable("d1q01", -1);
	func_221(var_17_object, var_18_object, var_19_object, var_20_object, var_21_int);
}


void func_221(object var_0_object, object var_1_object, object var_5_object, object var_6_object, object var_7_object)
{
	object var_123_object; object var_124_object;
	func_204(var_20_object, var_21_int, var_123_object, var_124_object);
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_5_object != 0)
		@Trigger(var_6_object, "cleanup");
	if(var_7_object != 0)
		@Trigger(var_7_object, "cleanup");
	@GetSceneByName(var_124_object, "warehouse_rubin");
	@Trigger(var_124_object, "rubin");
	func_317("icot_eva@door1", false);
	object var_145_object;
	func_267(var_145_object);
	@RemoveActor(var_145_object);
}
EMIT "Stack[-1] = 0";


