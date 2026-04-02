maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		func_345("sobor@door1", false);
		object var_15_object;
		func_313(var_15_object);
		var_0_object = var_15_object;
		object var_18_object;
		func_313(var_18_object);
		var_1_object = var_18_object;
		object var_19_object;
		func_313(var_19_object);
		var_2_object = var_19_object;
		object var_4_object;
		@GetSceneByName(var_4_object, "sobor");
		@Trigger(var_4_object, "noaglaja");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_9_object; object var_10_object; object var_11_object; object var_12_object; int var_13_int;
		@Trace(var_3_string);
		if(var_3_string == "init_sobor") {
			@GetSceneByName(var_9_object, "sobor");
			object var_17_object; object var_18_object;
			var_9_object = var_18_object;
			func_319(var_17_object, var_18_object, "pt_b7q01_birdmask", "pers_birdmask", "b7q01_sobor_mbirdmask.xml");
			var_0_object->add(var_17_object); //@t
			object var_35_object; object var_36_object;
			var_9_object = var_36_object;
			func_319(var_35_object, var_36_object, "pt_b7q01_birdmask1", "pers_birdmask", "b7q01_sobor_birdmask.xml");
			var_0_object->add(var_35_object); //@t
			object var_40_object; object var_41_object;
			var_9_object = var_41_object;
			func_319(var_40_object, var_41_object, "pt_b7q01_birdmask2", "pers_birdmask", "b7q01_sobor_birdmask.xml");
			var_0_object->add(var_40_object); //@t
			object var_45_object; object var_46_object;
			var_9_object = var_46_object;
			func_319(var_45_object, var_46_object, "pt_b7q01_patrol1", "pers_patrool", "b7q01_sobor_patrol.xml");
			var_0_object->add(var_45_object); //@t
			object var_50_object; object var_51_object;
			var_9_object = var_51_object;
			func_319(var_50_object, var_51_object, "pt_b7q01_patrol2", "pers_patrool", "b7q01_sobor_patrol.xml");
			var_0_object->add(var_50_object); //@t
			var_9_object = null;
		} else if(var_3_string == "init_prison") {
				@GetSceneByName(var_10_object, "uprava_prison");
				object var_58_object; object var_59_object;
				var_10_object = var_59_object;
				func_319(var_58_object, var_59_object, "pt_b7q01_patrol1", "pers_patrool", "b7q01_prison_patrol1.xml");
				var_1_object->add(var_58_object); //@t
				object var_63_object; object var_64_object;
				var_10_object = var_64_object;
				func_319(var_63_object, var_64_object, "pt_b7q01_patrol2", "pers_patrool", "b7q01_prison_patrol2.xml");
				var_1_object->add(var_63_object); //@t
				object var_68_object; object var_69_object;
				var_10_object = var_69_object;
				func_319(var_68_object, var_69_object, "pt_b7q01_prisoner1", "pers_worker", "b7q01_prisoner.xml");
				var_1_object->add(var_68_object); //@t
				object var_73_object; object var_74_object;
				var_10_object = var_74_object;
				func_319(var_73_object, var_74_object, "pt_b7q01_prisoner2", "pers_unosha", "b7q01_prisoner.xml");
				var_1_object->add(var_73_object); //@t
				object var_78_object; object var_79_object;
				var_10_object = var_79_object;
				func_319(var_78_object, var_79_object, "pt_b7q01_prisoner3", "pers_grabitel", "b7q01_prisoner.xml");
				var_1_object->add(var_78_object); //@t
				var_10_object = null;
		}
	Label_261:
		for(;;) {

		}
	
		if(var_3_string == "clear_prison") {
			func_362(var_1_object, "cleanup");
		} else if(var_3_string == "init_gorbun_house") {
			@GetSceneByName(var_11_object, "lc_house6_05");
			object var_100_object; object var_101_object;
			var_11_object = var_101_object;
			func_319(var_100_object, var_101_object, "pt_b7q01_wastedmale", "pers_wasted_male", "b7q01_gorbun_mwastedmale.xml");
			var_2_object->add(var_100_object); //@t
			object var_105_object; object var_106_object;
			var_11_object = var_106_object;
			func_319(var_105_object, var_106_object, "pt_b7q01_wastedmale1", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml");
			var_2_object->add(var_105_object); //@t
			object var_110_object; object var_111_object;
			var_11_object = var_111_object;
			func_319(var_110_object, var_111_object, "pt_b7q01_wastedmale2", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml");
			var_2_object->add(var_110_object); //@t
			object var_115_object; object var_116_object;
			var_11_object = var_116_object;
			func_337(var_115_object, var_116_object, "b7q01_corpse1", "actor_disp.bin");
			var_2_object->add(var_115_object); //@t
			object var_123_object; object var_124_object;
			var_11_object = var_124_object;
			func_337(var_123_object, var_124_object, "b7q01_corpse2", "actor_disp.bin");
			var_2_object->add(var_123_object); //@t
			object var_127_object; object var_128_object;
			var_11_object = var_128_object;
			func_337(var_127_object, var_128_object, "b7q01_corpse3", "actor_disp.bin");
			var_2_object->add(var_127_object); //@t
		} else if(var_3_string == "clear_gorbun_house") {
			func_362(var_2_object, "cleanup");
		} else if(var_3_string == "place_aglaja") {
			@GetSceneByName(var_12_object, "sobor");
			@Trigger(var_12_object, "aglaja");
			func_362(var_0_object, "cleanup");
		}
		if(var_3_string == "cleanup") {
			@GetVariable("b7q01", var_13_int);
			if(var_13_int != 1000)
				func_262();
			else
				func_278(Obj(), Obj(), var_13_int);
			if(var_3_string == "fail") {
				func_262();
			} else if(var_3_string == "completed") {
				func_270();
			}
		}
		goto Label_261;
	
	}

}


void func_262(void)
{
	@SetVariable("b7q01", -1);
	func_278(var_11_object, var_12_object, var_13_int);
}


void func_313(object var_15_object)
{
	object var_17_object;
	@CreateObjectVector(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_362(object var_85_object, string var_86_string)
{
	int var_90_int; int var_91_int; object var_92_object;
	if(var_85_object != 0) {
		var_85_object->size(var_90_int);
		var_91_int = 0;

		for(;;) {
			if(!(var_91_int < var_90_int)) goto Label_380;
			var_85_object->get(var_92_object, var_91_int);
			if(var_92_object != 0)
				@Trigger(var_92_object, var_86_string);
			var_92_object = null;
			var_91_int += 1;
		}
	}
Label_380:
}


void func_270(void)
{
	@SetVariable("b7q01", 1000);
	func_278(var_11_object, var_12_object, var_13_int);
}


void func_337(object var_115_object, object var_116_object, string var_117_string, string var_118_string)
{
	object var_120_object;
	@AddScriptedActor(var_120_object, var_117_string, var_118_string, var_116_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_120_object = var_115_object;
}
EMIT "Stack[-1] = 0";


void func_307(object var_158_object)
{
	object var_160_object;
	@self(var_160_object);
	var_160_object = var_158_object;
}
EMIT "Stack[-1] = 0";


void func_278(object var_0_object, object var_1_object, object var_2_object)
{
	func_362(var_0_object, "cleanup");
	func_362(var_1_object, "cleanup");
	func_362(var_2_object, "cleanup");
	object var_149_object;
	@GetSceneByName(var_149_object, "sobor");
	@Trigger(var_149_object, "aglaja");
	object var_158_object;
	func_307(var_158_object);
	@RemoveActor(var_158_object);
}
EMIT "Stack[-1] = 0";


void func_345(string var_5_string, bool var_6_bool)
{
	object var_8_object;
	@FindActor(var_8_object, var_5_string);
	if(!var_8_object) //@nz
		@Trace(("Door " + var_5_string) + " not found");
	else
		var_8_object->SetProperty("locked", var_6_bool);
	
}
EMIT "Stack[-1] = 0";


void func_319(object var_17_object, object var_18_object, string var_19_string, string var_20_string, string var_21_string)
{
	bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector;
	var_18_object->GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector);
	if(!var_26_bool) //@nz
		@Trace(("Locator " + var_19_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_20_string, var_18_object, var_27_cvector, var_28_cvector, var_21_string);
	object var_29_object = var_17_object;
	
}
EMIT "Stack[-1] = 0";


