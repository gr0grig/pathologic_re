// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		func_342("sobor@door1", true);
		@CreateObjectVector(var_0_object);
		@CreateObjectVector(var_1_object);
		object var_5_object;
		@GetMainOutdoorScene(var_5_object);
		object var_16_object; object var_17_object;
		var_5_object = var_17_object;
		func_324(var_16_object, var_17_object, "pt_k5q04_sobor_patrol1", "pers_patrool", "k5q04_sobor_guard_patrol.xml");
		var_0_object->add(var_16_object); //@t
		object var_34_object; object var_35_object;
		var_5_object = var_35_object;
		func_324(var_34_object, var_35_object, "pt_k5q04_sobor_wasted", "pers_wasted_male", "k5q04_sobor_guard_wasted.xml");
		var_0_object->add(var_34_object); //@t
		object var_39_object; object var_40_object;
		var_5_object = var_40_object;
		func_324(var_39_object, var_40_object, "pt_k5q04_sobor_patrol2", "pers_patrool", "k5q04_sobor_guard_patrol.xml");
		var_0_object->add(var_39_object); //@t
		@GetSceneByName(var_5_object, "cot_eva");
		@Trigger(var_5_object, "danko");
		func_276(5);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_6_object;
		@Trace(var_4_string);
		if(var_4_string == "sobor_load") {
			func_401();
			@SetVariable("k5q04SoborVisit", 1);
			@GetSceneByName(var_6_object, "sobor");
			@AddActor(var_2_object, "k5q04_crowd1", var_6_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "static_keep.xml");
			@Trace(var_2_object);
			@AddActor(var_3_object, "k5q04_crowd2", var_6_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "static_keep.xml");
			@Trace(var_3_object);
			object var_43_object; object var_44_object;
			var_6_object = var_44_object;
			func_306(var_43_object, var_44_object, "pt_k5q04_people1", "pers_woman", "k5q04_sobor_woman.xml");
			var_1_object->add(var_43_object); //@t
			object var_61_object; object var_62_object;
			var_6_object = var_62_object;
			func_306(var_61_object, var_62_object, "pt_k5q04_people2", "pers_nudegirl", "k5q04_sobor_nudegirl.xml");
			var_1_object->add(var_61_object); //@t
			object var_66_object; object var_67_object;
			var_6_object = var_67_object;
			func_306(var_66_object, var_67_object, "pt_k5q04_people3", "pers_worker", "k5q04_sobor_worker.xml");
			var_1_object->add(var_66_object); //@t
			object var_71_object; object var_72_object;
			var_6_object = var_72_object;
			func_306(var_71_object, var_72_object, "pt_k5q04_people4", "pers_boy", "k5q04_sobor_boy.xml");
			var_1_object->add(var_71_object); //@t
			object var_76_object; object var_77_object;
			var_6_object = var_77_object;
			func_306(var_76_object, var_77_object, "pt_k5q04_people5", "pers_salesman", "k5q04_sobor_salesman.xml");
			var_1_object->add(var_76_object); //@t
			object var_81_object; object var_82_object;
			var_6_object = var_82_object;
			func_306(var_81_object, var_82_object, "pt_k5q04_people6", "pers_woman", "k5q04_sobor_woman.xml");
			var_1_object->add(var_81_object); //@t
			object var_86_object; object var_87_object;
			var_6_object = var_87_object;
			func_306(var_86_object, var_87_object, "pt_k5q04_people7", "pers_worker", "k5q04_sobor_worker.xml");
			var_1_object->add(var_86_object); //@t
			object var_91_object; object var_92_object;
			var_6_object = var_92_object;
			func_306(var_91_object, var_92_object, "pt_k5q04_people8", "pers_unosha", "k5q04_sobor_unosha.xml");
			var_1_object->add(var_91_object); //@t
			object var_96_object; object var_97_object;
			var_6_object = var_97_object;
			func_306(var_96_object, var_97_object, "pt_k5q04_people9", "pers_girl", "k5q04_sobor_girl.xml");
			var_1_object->add(var_96_object); //@t
			object var_101_object; object var_102_object;
			var_6_object = var_102_object;
			func_306(var_101_object, var_102_object, "pt_k5q04_people10", "pers_worker", "k5q04_sobor_worker.xml");
			var_1_object->add(var_101_object); //@t
			object var_106_object; object var_107_object;
			var_6_object = var_107_object;
			func_306(var_106_object, var_107_object, "pt_k5q04_people11", "pers_woman", "k5q04_sobor_woman.xml");
			var_1_object->add(var_106_object); //@t
			object var_111_object; object var_112_object;
			var_6_object = var_112_object;
			func_306(var_111_object, var_112_object, "pt_k5q04_people12", "pers_unosha", "k5q04_sobor_unosha.xml");
			var_1_object->add(var_111_object); //@t
			var_6_object = null;
		} else if(var_4_string == "sobor_unload") {
				func_359(var_1_object);
				func_342("sobor@door1", true);
				@Trace(var_2_object);
				@RemoveActor(var_2_object);
				@Trace(var_3_object);
				@RemoveActor(var_3_object);
		}
	Label_220:
		for(;;) {

		}
	
		if(!(var_4_string == "completed")) goto Label_220;
		func_243();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		func_221();
	}

}


void func_324(object var_16_object, object var_17_object, string var_18_string, string var_19_string, string var_20_string)
{
	bool var_25_bool; cvector var_26_cvector; cvector var_27_cvector;
	var_17_object->GetLocator(var_18_string, var_25_bool, var_26_cvector, var_27_cvector);
	if(!var_25_bool) //@nz
		@Trace(("Locator " + var_18_string) + " doesn't exist");
	else
		var_17_object->AddStationaryActor(Obj(), var_26_cvector, var_27_cvector, var_19_string, var_20_string);
	object var_28_object = var_16_object;
	
}
EMIT "Stack[-1] = 0";


void func_359(object var_118_object)
{
	int var_122_int; int var_123_int; object var_124_object;
	if(var_118_object != 0) {
		var_118_object->size(var_122_int);
		var_123_int = 0;

		while(var_123_int < var_122_int) {
			var_118_object->get(var_124_object, var_123_int);
			if(var_124_object != 0)
				@RemoveActor(var_124_object);
			var_124_object = null;
			var_123_int += 1;
		}

		var_118_object->clear();
	}
}


void func_235(void)
{
	@SetVariable("k5q04", -1);
	func_251();
}


void func_427(bool var_14_bool, object var_15_object, int var_16_int)
{
	object var_23_object;
	func_414(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	object var_21_object;
	var_20_object->Find(var_16_int, var_21_object);
	if(!var_21_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_16_int);
		var_14_bool = false;
	}
	var_21_object->AddChild(var_15_object);
	@SendWorldWndMessage(7);
	int var_22_int;
	var_15_object->GetCategory(var_22_int);
	@SetDiarySection(var_22_int);
	var_14_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_300(object var_69_object)
{
	object var_71_object;
	@self(var_71_object);
	var_71_object = var_69_object;
}
EMIT "Stack[-1] = 0";


void func_401(void)
{
	object var_10_object;
	@CreateDiaryEntry(var_10_object, 746, 2, 539463);
	bool var_14_bool; object var_15_object;
	var_10_object = var_15_object;
	func_427(var_14_bool, var_15_object, 740);
}
EMIT "Stack[-1] = 0";


void func_306(object var_43_object, object var_44_object, string var_45_string, string var_46_string, string var_47_string)
{
	bool var_52_bool; cvector var_53_cvector; cvector var_54_cvector;
	var_44_object->GetLocator(var_45_string, var_52_bool, var_53_cvector, var_54_cvector);
	if(!var_52_bool) //@nz
		@Trace(("Locator " + var_45_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_46_string, var_44_object, var_53_cvector, var_54_cvector, var_47_string);
	object var_55_object = var_43_object;
	
}
EMIT "Stack[-1] = 0";


void func_243(void)
{
	@SetVariable("k5q04", 1000);
	func_251();
}


void func_276(int var_46_int)
{
	float var_48_float;
	@GetGameTime(var_48_float);
	if(var_48_float >= (var_46_int * 24)) {
		func_252(var_48_float);
	} else {
		@SetTimeEvent(0, (var_46_int * 24));
		@Hold();
	}
	
}


void func_342(string var_6_string, bool var_7_bool)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(!var_9_object) //@nz
		@Trace(("Door " + var_6_string) + " not found");
	else
		var_9_object->SetProperty("locked", var_7_bool);
	
}
EMIT "Stack[-1] = 0";


void func_380(object var_54_object)
{
	int var_58_int; int var_59_int; object var_60_object;
	if(var_54_object != 0) {
		var_54_object->size(var_58_int);
		var_59_int = 0;

		while(var_59_int < var_58_int) {
			var_54_object->get(var_60_object, var_59_int);
			if(var_60_object != 0)
				var_60_object->Remove();
			var_60_object = null;
			var_59_int += 1;
		}

		var_54_object->clear();
	}
}


void func_251(void)
{
}


void func_252(object var_0_object)
{
	func_380(var_0_object);
	func_342("sobor@door1", true);
	object var_53_object;
	@GetSceneByName(var_53_object, "cot_eva");
	@Trigger(var_53_object, "nodanko");
	object var_69_object;
	func_300(var_69_object);
	@RemoveActor(var_69_object);
}
EMIT "Stack[-1] = 0";


void func_221(void)
{
	int var_7_int;
	@GetVariable("k5q04", var_7_int);
	if(var_7_int != 1000)
		func_235();
	func_252(var_7_int);
}


void func_414(object var_23_object)
{
	object var_25_object;
	@GetDiaryRoot(var_25_object);
	if(!var_25_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_23_object = false;
	}
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


