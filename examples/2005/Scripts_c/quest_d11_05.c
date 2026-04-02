// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool)
	{
		object var_9_object;
		@CreateObjectVector(var_1_object);
		object var_7_object;
		@GetMainOutdoorScene(var_7_object);
		object var_10_object; object var_11_object;
		var_7_object = var_11_object;
		func_290(var_10_object, var_11_object, "pt_d9q01_doberman1", "pers_doberman", "d11q05_doberman.xml");
		var_1_object->add(var_10_object); //@t
		object var_28_object; object var_29_object;
		var_7_object = var_29_object;
		func_290(var_28_object, var_29_object, "pt_d9q01_doberman2", "pers_doberman", "d11q05_doberman.xml");
		var_1_object->add(var_28_object); //@t
		object var_33_object; object var_34_object;
		var_7_object = var_34_object;
		func_290(var_33_object, var_34_object, "pt_d9q01_doberman3", "pers_doberman", "d11q05_doberman.xml");
		var_1_object->add(var_33_object); //@t
		object var_38_object;
		func_266(var_38_object);
		var_0_object = var_38_object;
		int var_8_int;
		@GetVariable("d8q01BigVladIsVictim", var_8_int);
		if(!var_8_int) { //@nz
			var_3_bool = true;
			@GetSceneByName(var_9_object, "termitnik_mat");
			object var_44_object; object var_45_object;
			var_9_object = var_45_object;
			func_272(var_44_object, var_45_object, "pt_d11q05_mladvlad", "NPC_MladVlad", "d11q05_mladvlad.xml");
			var_2_object = var_44_object;
			var_9_object = null;
		}
		func_236(11);
	}
	EMIT "Stack[-3] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, string var_4_string)
	{
		object var_12_object; object var_13_object; cvector var_14_cvector; cvector var_15_cvector; bool var_16_bool; object var_17_object; object var_18_object;
		@Trace(var_4_string);
		if(var_4_string == "teleport") {
			@FindActor(var_12_object, "player");
			if(var_12_object != 0) {
				@GetSceneByName(var_13_object, "mnogogrannik_han");
				var_13_object->GetLocator("pt_d9q01_teleport", var_16_bool, var_14_cvector, var_15_cvector);
				@Teleport(var_12_object, var_13_object, var_14_cvector, var_15_cvector);
				var_13_object = null;
			}
			var_12_object = null;
		} else if(var_4_string == "place_enemy_before") {
				@GetMainOutdoorScene(var_17_object);
				object var_27_object; object var_28_object;
				var_17_object = var_28_object;
				func_290(var_27_object, var_28_object, "pt_d11q05_grabitel_before1", "pers_grabitel", "d11q05_grabitel.xml");
				var_0_object->add(var_27_object); //@t
				object var_45_object; object var_46_object;
				var_17_object = var_46_object;
				func_290(var_45_object, var_46_object, "pt_d11q05_grabitel_before2", "pers_grabitel", "d11q05_grabitel.xml");
				var_0_object->add(var_45_object); //@t
				object var_50_object; object var_51_object;
				var_17_object = var_51_object;
				func_290(var_50_object, var_51_object, "pt_d11q05_worker_before1", "pers_worker", "d11q05_worker.xml");
				var_0_object->add(var_50_object); //@t
				object var_55_object; object var_56_object;
				var_17_object = var_56_object;
				func_290(var_55_object, var_56_object, "pt_d11q05_worker_before2", "pers_worker", "d11q05_worker.xml");
				var_0_object->add(var_55_object); //@t
				var_17_object = null;
		}

	
		if(var_4_string == "place_enemy_after") {
			@GetMainOutdoorScene(var_18_object);
			object var_62_object; object var_63_object;
			var_18_object = var_63_object;
			func_290(var_62_object, var_63_object, "pt_d11q05_grabitel_after1", "pers_grabitel", "d11q05_grabitel_serum.xml");
			var_0_object->add(var_62_object); //@t
			object var_67_object; object var_68_object;
			var_18_object = var_68_object;
			func_290(var_67_object, var_68_object, "pt_d11q05_grabitel_after2", "pers_grabitel", "d11q05_grabitel.xml");
			var_0_object->add(var_67_object); //@t
			object var_72_object; object var_73_object;
			var_18_object = var_73_object;
			func_290(var_72_object, var_73_object, "pt_d11q05_unosha_after1", "pers_unosha", "d11q05_worker.xml");
			var_0_object->add(var_72_object); //@t
			object var_77_object; object var_78_object;
			var_18_object = var_78_object;
			func_290(var_77_object, var_78_object, "pt_d11q05_unosha_after2", "pers_unosha", "d11q05_worker.xml");
			var_0_object->add(var_77_object); //@t
			var_18_object = null;
		} else if(var_4_string == "fail") {
			func_196();
		} else if(var_4_string == "completed") {
			func_204();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, bool var_3_bool, int var_4_int, float var_5_float)
	{
		func_182();
	}

}


void func_290(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
{
	bool var_19_bool; cvector var_20_cvector; cvector var_21_cvector;
	var_11_object->GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) //@nz
		@Trace(("Locator " + var_12_string) + " doesn't exist");
	else
		var_11_object->AddStationaryActor(Obj(), var_20_cvector, var_21_cvector, var_13_string, var_14_string);
	object var_22_object = var_10_object;
	
}
EMIT "Stack[-1] = 0";


void func_196(void)
{
	@SetVariable("d11q05", -1);
	func_212(var_7_int);
}


void func_260(object var_82_object)
{
	object var_84_object;
	@self(var_84_object);
	var_84_object = var_82_object;
}
EMIT "Stack[-1] = 0";


void func_266(object var_38_object)
{
	object var_40_object;
	@CreateObjectVector(var_40_object);
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_236(int var_62_int)
{
	float var_63_float; float var_64_float;
	@GetGameTime(var_64_float);
	if(var_64_float >= (var_62_int * 24)) {
		func_218(var_63_float, var_64_float);
	} else {
		@SetTimeEvent(0, (var_62_int * 24));
		@Hold();
	}
	
}


void func_204(void)
{
	@SetVariable("d11q05", 1000);
	func_212(var_18_object);
}


void func_272(object var_44_object, object var_45_object, string var_46_string, string var_47_string, string var_48_string)
{
	bool var_53_bool; cvector var_54_cvector; cvector var_55_cvector;
	var_45_object->GetLocator(var_46_string, var_53_bool, var_54_cvector, var_55_cvector);
	if(!var_53_bool) //@nz
		@Trace(("Locator " + var_46_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_47_string, var_45_object, var_54_cvector, var_55_cvector, var_48_string);
	object var_56_object = var_44_object;
	
}
EMIT "Stack[-1] = 0";


void func_212(object var_2_object)
{
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
}


void func_308(object var_70_object)
{
	int var_74_int; int var_75_int; object var_76_object;
	if(var_70_object != 0) {
		var_70_object->size(var_74_int);
		var_75_int = 0;

		while(var_75_int < var_74_int) {
			var_70_object->get(var_76_object, var_75_int);
			if(var_76_object != 0)
				var_76_object->Remove();
			var_76_object = null;
			var_75_int += 1;
		}

		var_70_object->clear();
	}
}


void func_182(void)
{
	int var_7_int;
	@GetVariable("d11q05", var_7_int);
	if(var_7_int != 1000)
		func_196();
	int var_6_int;
	func_218(var_6_int, var_7_int);
}


void func_218(object var_0_object, object var_1_object)
{
	func_212(var_64_float);
	func_308(var_0_object);
	func_308(var_1_object);
	object var_82_object;
	func_260(var_82_object);
	@RemoveActor(var_82_object);
}


