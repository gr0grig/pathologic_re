maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
	{
		@CreateIntVector(var_5_object);
		@CreateIntVector(var_9_object);
		var_2_bool = true;
		func_178(var_9_object, var_10_object);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string)
	{
		if(var_11_string == "noandrei") {
			var_2_bool = false;
		} else if(var_11_string == "andrei") {
			var_2_bool = true;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
	{
		bool var_11_bool;
		func_358(var_11_bool, "quest_b2_03", "kabak_unload");
		if(var_3_object != 0) {
			object var_18_object;
			func_243(var_18_object, var_3_object, 0, var_5_object);
			var_4_object = var_18_object;
			object var_37_object;
			func_268(var_37_object, var_3_object, 0);
			var_6_object = var_37_object;
		}
		if(var_7_object != 0) {
			object var_52_object;
			func_243(var_52_object, var_7_object, 0, var_9_object);
			var_8_object = var_52_object;
			object var_56_object;
			func_268(var_56_object, var_7_object, 0);
			var_10_object = var_56_object;
		}
		func_236();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
	{
		func_186(var_10_object);
		func_210(var_10_object);
	}

}


void func_320(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_288(object var_52_object, int var_53_int, object var_54_object, object var_55_object, object var_56_object)
{
	object var_66_object; int var_67_int; bool var_68_bool; int var_70_int;
	var_52_object->RemoveAllItems(var_53_int);
	int var_64_int;
	var_54_object->size(var_64_int);
	int var_65_int = 0;
	
	while(var_65_int < var_64_int) {
		var_54_object->get(var_66_object, var_65_int);
		var_55_object->get(var_67_int, var_65_int);
		var_52_object->AddItem(var_68_bool, var_66_object, var_53_int, var_67_int);
		var_66_object = null;
		var_65_int += 1;
	}
	
	var_56_object->size(var_64_int);
	int var_69_int = 0;
	
	while(var_69_int < var_64_int) {
		var_56_object->get(var_70_int, var_69_int);
		var_52_object->SelectItem(var_70_int, true, var_53_int);
		var_69_int += 1;
	}
	
}


void func_326(object var_32_object)
{
	object var_34_object;
	@CreateObjectVector(var_34_object);
	var_34_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_358(bool var_11_bool, string var_12_string, string var_13_string)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(var_15_object == null)
		var_11_bool = false;
	@Trigger(var_15_object, var_13_string);
	var_11_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_9(object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_30_object)
{
	if(var_2_bool != 0) {
		object var_32_object; object var_33_object;
		object var_37_object;
		func_320(var_37_object);
		var_37_object = var_33_object;
		func_332(var_32_object, var_33_object, "pt_andrei", "NPC_Andrei", "NPC_Burah_Andrei.xml");
		var_7_object = var_32_object;
		if(var_8_object != 0)
			func_288(var_7_object, 0, var_8_object, var_9_object, var_10_object);
		var_30_object->add(var_7_object);
	} else {
		var_7_object = null;
	}
	object var_76_object; object var_77_object;
	object var_81_object;
	func_320(var_81_object);
	var_81_object = var_77_object;
	func_332(var_76_object, var_77_object, "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml");
	var_30_object->add(var_76_object);
	object var_82_object; object var_83_object;
	object var_87_object;
	func_320(var_87_object);
	var_87_object = var_83_object;
	func_332(var_82_object, var_83_object, "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
	var_3_object = var_82_object;
	if(var_4_object != 0)
		func_288(var_3_object, 0, var_4_object, var_5_object, var_6_object);
	var_30_object->add(var_3_object);
	object var_94_object; object var_95_object;
	object var_98_object;
	func_320(var_98_object);
	var_98_object = var_95_object;
	func_350(var_94_object, var_95_object, "ps_kabak_alkash1", "cs_play_cycle.bin");
	var_30_object->add(var_94_object);
	object var_103_object; object var_104_object;
	object var_107_object;
	func_320(var_107_object);
	var_107_object = var_104_object;
	func_350(var_103_object, var_104_object, "ps_kabak_alkash2", "cs_play_cycle.bin");
	var_30_object->add(var_103_object);
	object var_108_object; object var_109_object;
	object var_112_object;
	func_320(var_112_object);
	var_112_object = var_109_object;
	func_350(var_108_object, var_109_object, "ps_kabak_unosha1", "cs_play_cycle.bin");
	var_30_object->add(var_108_object);
	object var_113_object; object var_114_object;
	object var_117_object;
	func_320(var_117_object);
	var_117_object = var_114_object;
	func_350(var_113_object, var_114_object, "ps_kabak_woman1", "cs_play_cycle.bin");
	var_30_object->add(var_113_object);
	object var_118_object; object var_119_object;
	object var_122_object;
	func_320(var_122_object);
	var_122_object = var_119_object;
	func_350(var_118_object, var_119_object, "ps_kabak_worker1", "cs_play_cycle.bin");
	var_30_object->add(var_118_object);
	
}


void func_332(object var_32_object, object var_33_object, string var_34_string, string var_35_string, string var_36_string)
{
	bool var_42_bool; cvector var_43_cvector; cvector var_44_cvector;
	var_33_object->GetLocator(var_34_string, var_42_bool, var_43_cvector, var_44_cvector);
	if(!var_42_bool) //@nz
		@Trace(("Locator " + var_34_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_35_string, var_33_object, var_43_cvector, var_44_cvector, var_36_string);
	object var_45_object = var_32_object;
	
}
EMIT "Stack[-1] = 0";


void func_268(object var_37_object, object var_38_object, int var_39_int)
{
	object var_44_object; bool var_47_bool;
	@CreateIntVector(var_44_object);
	int var_45_int;
	var_38_object->GetItemCount(var_45_int, var_39_int);
	int var_46_int = 0;
	
	while(var_46_int < var_45_int) {
		var_38_object->IsItemSelected(var_47_bool, var_46_int, var_39_int);
		if(var_47_bool != 0)
			var_44_object->add(var_46_int);
		var_46_int += 1;
	}
	
	var_44_object = var_37_object;
}
EMIT "Stack[-4] = 0";


// @pe
void func_236(void)
{
	func_215(var_10_object);
	func_222(var_10_object);
}


void func_178(object var_0_object, object var_1_object)
{
	@CreateObjectVector(var_0_object);
	@CreateObjectVector(var_1_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_243(object var_18_object, object var_19_object, int var_20_int, object var_21_object)
{
	object var_30_object; int var_31_int;
	object var_32_object;
	func_326(var_32_object);
	object var_27_object;
	var_32_object = var_27_object;
	int var_28_int;
	var_19_object->GetItemCount(var_28_int, var_20_int);
	int var_29_int = 0;
	
	while(var_29_int < var_28_int) {
		var_19_object->GetItem(var_30_object, var_29_int, var_20_int);
		var_27_object->add(var_30_object);
		var_19_object->GetItemAmount(var_31_int, var_29_int, var_20_int);
		var_21_object->add(var_31_int);
		var_30_object = null;
		var_29_int += 1;
	}
	
	var_27_object = var_18_object;
}
EMIT "Stack[-5] = 0";


void func_370(object var_59_object)
{
	int var_63_int; int var_64_int; object var_65_object;
	if(var_59_object != 0) {
		var_59_object->size(var_63_int);
		var_64_int = 0;

		while(var_64_int < var_63_int) {
			var_59_object->get(var_65_object, var_64_int);
			if(var_65_object != 0)
				@RemoveActor(var_65_object);
			var_65_object = null;
			var_64_int += 1;
		}

		var_59_object->clear();
	}
}


void func_210(object var_1_object)
{
	func_9(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_1_object);
}


void func_215(object var_0_object)
{
	func_370(var_0_object);
	var_0_object->clear(); //@t
}


void func_186(object var_0_object)
{
	int var_16_int; bool var_18_bool; cvector var_19_cvector; object var_20_object;
	var_16_int = 1;
	
	for(;;) {
		@GetLocator(("pt_fireplace" + var_16_int), var_18_bool, var_19_cvector);
		if(!var_18_bool) //@nz
			break;
		object var_24_object;
		func_320(var_24_object);
		@AddActorByType(var_20_object, "scripted", var_24_object, var_19_cvector, [0.0, 0.0, 1.0], "fireplace.xml");
		var_0_object->add(var_20_object); //@t
		var_20_object = null;
		var_16_int += 1;
	}
}


void func_222(object var_1_object)
{
	func_370(var_1_object);
	var_1_object->clear(); //@t
}


void func_350(object var_94_object, object var_95_object, string var_96_string, string var_97_string)
{
	object var_100_object;
	@AddScriptedActor(var_100_object, var_96_string, var_97_string, var_95_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_100_object = var_94_object;
}
EMIT "Stack[-1] = 0";


