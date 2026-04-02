maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
	{
		@CreateIntVector(var_5_object);
		@CreateIntVector(var_9_object);
		var_2_bool = true;
		func_175(var_9_object, var_10_object);
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
		if(var_3_object != 0) {
			var_5_object->clear(); //@t
			object var_12_object;
			func_240(var_12_object, var_3_object, 0, var_5_object);
			var_4_object = var_12_object;
			object var_31_object;
			func_265(var_31_object, var_3_object, 0);
			var_6_object = var_31_object;
		}
		if(var_7_object != 0) {
			var_9_object->clear(); //@t
			object var_46_object;
			func_240(var_46_object, var_7_object, 0, var_9_object);
			var_8_object = var_46_object;
			object var_50_object;
			func_265(var_50_object, var_7_object, 0);
			var_10_object = var_50_object;
		}
		func_233();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object)
	{
		func_183(var_10_object);
		func_207(var_10_object);
	}

}


void func_355(object var_53_object)
{
	int var_57_int; int var_58_int; object var_59_object;
	if(var_53_object != 0) {
		var_53_object->size(var_57_int);
		var_58_int = 0;

		while(var_58_int < var_57_int) {
			var_53_object->get(var_59_object, var_58_int);
			if(var_59_object != 0)
				@RemoveActor(var_59_object);
			var_59_object = null;
			var_58_int += 1;
		}

		var_53_object->clear();
	}
}


void func_323(object var_26_object)
{
	object var_28_object;
	@CreateObjectVector(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_317(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_329(object var_32_object, object var_33_object, string var_34_string, string var_35_string, string var_36_string)
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


// @pe
void func_233(void)
{
	func_212(var_10_object);
	func_219(var_10_object);
}


void func_265(object var_31_object, object var_32_object, int var_33_int)
{
	object var_38_object; bool var_41_bool;
	@CreateIntVector(var_38_object);
	int var_39_int;
	var_32_object->GetItemCount(var_39_int, var_33_int);
	int var_40_int = 0;
	
	while(var_40_int < var_39_int) {
		var_32_object->IsItemSelected(var_41_bool, var_40_int, var_33_int);
		if(var_41_bool != 0)
			var_38_object->add(var_40_int);
		var_40_int += 1;
	}
	
	var_38_object = var_31_object;
}
EMIT "Stack[-4] = 0";


// @pe
void func_9(object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_30_object)
{
	if(var_2_bool != 0) {
		object var_32_object; object var_33_object;
		object var_37_object;
		func_317(var_37_object);
		var_37_object = var_33_object;
		func_329(var_32_object, var_33_object, "pt_andrei", "NPC_Andrei", "NPC_Klara_Andrei.xml");
		var_7_object = var_32_object;
		if(var_8_object != 0)
			func_285(var_7_object, 0, var_8_object, var_9_object, var_10_object);
		var_30_object->add(var_7_object);
	}
	object var_76_object; object var_77_object;
	object var_81_object;
	func_317(var_81_object);
	var_81_object = var_77_object;
	func_329(var_76_object, var_77_object, "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml");
	var_30_object->add(var_76_object);
	object var_82_object; object var_83_object;
	object var_87_object;
	func_317(var_87_object);
	var_87_object = var_83_object;
	func_329(var_82_object, var_83_object, "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
	var_3_object = var_82_object;
	if(var_4_object != 0)
		func_285(var_3_object, 0, var_4_object, var_5_object, var_6_object);
	var_30_object->add(var_3_object);
	object var_94_object; object var_95_object;
	object var_98_object;
	func_317(var_98_object);
	var_98_object = var_95_object;
	func_347(var_94_object, var_95_object, "ps_kabak_alkash1", "cs_play_cycle.bin");
	var_30_object->add(var_94_object);
	object var_103_object; object var_104_object;
	object var_107_object;
	func_317(var_107_object);
	var_107_object = var_104_object;
	func_347(var_103_object, var_104_object, "ps_kabak_alkash2", "cs_play_cycle.bin");
	var_30_object->add(var_103_object);
	object var_108_object; object var_109_object;
	object var_112_object;
	func_317(var_112_object);
	var_112_object = var_109_object;
	func_347(var_108_object, var_109_object, "ps_kabak_unosha1", "cs_play_cycle.bin");
	var_30_object->add(var_108_object);
	object var_113_object; object var_114_object;
	object var_117_object;
	func_317(var_117_object);
	var_117_object = var_114_object;
	func_347(var_113_object, var_114_object, "ps_kabak_woman1", "cs_play_cycle.bin");
	var_30_object->add(var_113_object);
	object var_118_object; object var_119_object;
	object var_122_object;
	func_317(var_122_object);
	var_122_object = var_119_object;
	func_347(var_118_object, var_119_object, "ps_kabak_worker1", "cs_play_cycle.bin");
	var_30_object->add(var_118_object);
}


void func_219(object var_1_object)
{
	func_355(var_1_object);
	var_1_object->clear(); //@t
}


void func_175(object var_0_object, object var_1_object)
{
	@CreateObjectVector(var_0_object);
	@CreateObjectVector(var_1_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_240(object var_12_object, object var_13_object, int var_14_int, object var_15_object)
{
	object var_24_object; int var_25_int;
	object var_26_object;
	func_323(var_26_object);
	object var_21_object;
	var_26_object = var_21_object;
	int var_22_int;
	var_13_object->GetItemCount(var_22_int, var_14_int);
	int var_23_int = 0;
	
	while(var_23_int < var_22_int) {
		var_13_object->GetItem(var_24_object, var_23_int, var_14_int);
		var_21_object->add(var_24_object);
		var_13_object->GetItemAmount(var_25_int, var_23_int, var_14_int);
		var_15_object->add(var_25_int);
		var_24_object = null;
		var_23_int += 1;
	}
	
	var_21_object = var_12_object;
}
EMIT "Stack[-5] = 0";


void func_207(object var_1_object)
{
	func_9(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_1_object);
}


void func_212(object var_0_object)
{
	func_355(var_0_object);
	var_0_object->clear(); //@t
}


void func_183(object var_0_object)
{
	int var_16_int; bool var_18_bool; cvector var_19_cvector; object var_20_object;
	var_16_int = 1;
	
	for(;;) {
		@GetLocator(("pt_fireplace" + var_16_int), var_18_bool, var_19_cvector);
		if(!var_18_bool) //@nz
			break;
		object var_24_object;
		func_317(var_24_object);
		@AddActorByType(var_20_object, "scripted", var_24_object, var_19_cvector, [0.0, 0.0, 1.0], "fireplace.xml");
		var_0_object->add(var_20_object); //@t
		var_20_object = null;
		var_16_int += 1;
	}
}


void func_347(object var_94_object, object var_95_object, string var_96_string, string var_97_string)
{
	object var_100_object;
	@AddScriptedActor(var_100_object, var_96_string, var_97_string, var_95_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_100_object = var_94_object;
}
EMIT "Stack[-1] = 0";


void func_285(object var_52_object, int var_53_int, object var_54_object, object var_55_object, object var_56_object)
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


