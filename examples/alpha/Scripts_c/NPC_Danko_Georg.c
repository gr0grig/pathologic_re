// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		func_5618();
		bool var_31_bool;
		func_4513(var_31_bool);
		if(!var_31_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4578("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_31_object;
		var_30_bool = var_31_object;
		func_5622(var_31_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_4501(var_31_bool, var_32_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4596();
			if(var_31_bool == 13228) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5061();
			}
			if(var_31_bool == 13232) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5049();
			}
			if(var_31_bool == 13236) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_5055();
			}
			if(var_30_string == 13227) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(12009); //@t
				var_0_object->ClearReplies(); //@t
				bool var_70_bool = false;
				bool var_71_bool;
				func_5377(var_1_object);
				if(var_71_bool != 0) {
					bool var_79_bool;
					func_5389(var_1_object);
					if(var_79_bool != 0)
						var_70_bool = true;
				}
				if(var_70_bool != 0)
					var_0_object->AddReply(12010, 13230, 13228); //@t
				bool var_88_bool = false;
				bool var_89_bool = false;
				bool var_90_bool = false;
				bool var_91_bool;
				func_5317(var_1_object);
				if(!var_91_bool) { //@nz
					bool var_98_bool;
					func_5329(var_1_object);
					if(!var_98_bool) //@nz
						var_90_bool = true;
				}
				if(var_90_bool != 0) {
					bool var_105_bool;
					func_5341(var_1_object);
					if(!var_105_bool) //@nz
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					bool var_112_bool;
					func_5353(var_1_object);
					if(var_112_bool != 0)
						var_88_bool = true;
				}
				if(var_88_bool != 0)
					var_0_object->AddReply(12014, 13233, 13232); //@t
				bool var_121_bool;
				func_5365(var_1_object);
				if(var_121_bool != 0)
					var_0_object->AddReply(12018, 3560, 13236); //@t
				var_0_object->AddReply(12011, -1, 13229); //@t
				return 0;
			}
			if(var_30_string == 3560) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(3289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3290, 3562, 3561); //@t
				var_0_object->AddReply(3298, 3572, 3571); //@t
				return 0;
			}
			if(var_30_string == 3572) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(3299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3300, 3562, 3573); //@t
				var_0_object->AddReply(3301, 3564, 3575); //@t
				return 0;
			}
			if(var_30_string == 3562) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(3291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3292, 3564, 3563); //@t
				var_0_object->AddReply(3295, 3564, 3566); //@t
				return 0;
			}
			if(var_30_string == 3564) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(3293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3294, 3568, 3565); //@t
				var_0_object->AddReply(3297, 3568, 3569); //@t
				return 0;
			}
			if(var_30_string == 3568) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(3296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3302, 3578, 3577); //@t
				var_0_object->AddReply(3305, 3578, 3580); //@t
				return 0;
			}
			if(var_30_string == 3578) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(3303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3304, -1, 3579); //@t
				return 0;
			}
			if(var_30_string == 13233) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(12015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12016, 13235, 13234); //@t
				return 0;
			}
			if(var_30_string == 13235) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(12017); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_30_string == 13230) {
				func_234(var_31_bool, "Neutral");
				var_0_object->SetMessage(12012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12013, -1, 13231); //@t
				return 0;
			}
			var_3_string = true;
			bool var_208_bool;
			func_4674(var_208_bool);
			if(var_208_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfb";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4596();
			if(var_31_bool == 5312) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4911();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4676();
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_4854();
			}
			if(var_31_bool == 5313) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_4911();
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_4676();
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_4854();
			}
			if(var_31_bool == 5266) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_4911();
			}
			if(var_31_bool == 5314) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_4676();
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_4854();
			}
			if(var_31_bool == 5315) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_4676();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_4854();
			}
			if(var_30_string == 5233) {
				bool var_120_bool;
				func_5161(var_1_object);
				if(var_120_bool != 0) {
					object var_128_object; object var_129_object;
					var_128_object = var_1_object;
					var_129_object = var_0_object;
					func_4787();
					object var_132_object; object var_133_object;
					var_132_object = var_1_object;
					var_133_object = var_0_object;
					func_5043();
					func_743(var_31_bool, "Neutral");
					var_0_object->SetMessage(4780); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4781, 5240, 5234); //@t
					var_0_object->AddReply(4782, 5240, 5235); //@t
					var_0_object->AddReply(4786, 5240, 5239); //@t
					return 0;
				}
				bool var_161_bool;
				func_5103(var_161_bool, var_1_object);
				if(var_161_bool != 0) {
					object var_165_object; object var_166_object;
					var_165_object = var_1_object;
					var_166_object = var_0_object;
					func_5043();
					func_743(var_31_bool, "Neutral");
					var_0_object->SetMessage(4783); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4784, 5294, 5237); //@t
					var_0_object->AddReply(4830, 5301, 5297); //@t
					var_0_object->AddReply(4836, 5296, 5304); //@t
					var_0_object->AddReply(4845, -1, 5317); //@t
					return 0;
				}
			}
			if(var_30_string == 5301) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4835, 5299, 5302); //@t
				return 0;
			}
			if(var_30_string == 5294) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4828, 5296, 5295); //@t
				var_0_object->AddReply(4831, 5299, 5298); //@t
				return 0;
			}
			if(var_30_string == 5299) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4833, 5307, 5300); //@t
				return 0;
			}
			if(var_30_string == 5296) {
				object var_207_object; object var_208_object;
				var_207_object = var_1_object;
				var_208_object = var_0_object;
				func_4917();
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4837, 5307, 5306); //@t
				return 0;
			}
			if(var_30_string == 5307) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4843, -1, 5314); //@t
				var_0_object->AddReply(4844, -1, 5315); //@t
				return 0;
			}
			if(var_30_string == 5240) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4788, 5245, 5243); //@t
				var_0_object->AddReply(4789, 5245, 5244); //@t
				return 0;
			}
			if(var_30_string == 5245) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4790); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4791, 5250, 5247); //@t
				var_0_object->AddReply(4792, 5269, 5248); //@t
				var_0_object->AddReply(4793, 5271, 5249); //@t
				return 0;
			}
			if(var_30_string == 5271) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4812, 5269, 5272); //@t
				var_0_object->AddReply(4813, 5274, 5273); //@t
				return 0;
			}
			if(var_30_string == 5274) {
				object var_261_object; object var_262_object;
				var_261_object = var_1_object;
				var_262_object = var_0_object;
				func_4823();
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4815, 5269, 5276); //@t
				return 0;
			}
			if(var_30_string == 5269) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4810, 5278, 5270); //@t
				var_0_object->AddReply(4824, 5278, 5287); //@t
				return 0;
			}
			if(var_30_string == 5278) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4817, 5280, 5279); //@t
				var_0_object->AddReply(4825, 5257, 5289); //@t
				return 0;
			}
			if(var_30_string == 5280) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4819, 5282, 5281); //@t
				var_0_object->AddReply(4826, 5282, 5291); //@t
				return 0;
			}
			if(var_30_string == 5282) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4821, 5253, 5283); //@t
				var_0_object->AddReply(4823, 5253, 5285); //@t
				return 0;
			}
			if(var_30_string == 5250) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4794); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4795, 5253, 5251); //@t
				var_0_object->AddReply(4796, 5253, 5252); //@t
				return 0;
			}
			if(var_30_string == 5253) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4798, 5257, 5254); //@t
				var_0_object->AddReply(4799, 5257, 5256); //@t
				return 0;
			}
			if(var_30_string == 5257) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4801, 5259, 5258); //@t
				var_0_object->AddReply(4803, 5264, 5260); //@t
				return 0;
			}
			if(var_30_string == 5259) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4804, 5264, 5262); //@t
				var_0_object->AddReply(4805, 5264, 5263); //@t
				return 0;
			}
			if(var_30_string == 5264) {
				object var_352_object; object var_353_object;
				var_352_object = var_1_object;
				var_353_object = var_0_object;
				func_4917();
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4807, 5310, 5265); //@t
				var_0_object->AddReply(4808, -1, 5266); //@t
				return 0;
			}
			if(var_30_string == 5310) {
				func_743(var_31_bool, "Neutral");
				var_0_object->SetMessage(4840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4841, -1, 5312); //@t
				var_0_object->AddReply(4842, -1, 5313); //@t
				return 0;
			}
			var_3_string = true;
			bool var_372_bool;
			func_4674(var_372_bool);
			if(var_372_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2f8";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4596();
			if(var_31_bool == 5424) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5001();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4708();
			}
			if(var_31_bool == 5360) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_5001();
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_4781();
			}
			if(var_31_bool == 5359) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_5001();
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_4781();
			}
			if(var_31_bool == 5394) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_5007();
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_4829();
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4854();
			}
			if(var_31_bool == 5407) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_5007();
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_4829();
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_4854();
			}
			if(var_31_bool == 5341) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_5013();
			}
			if(var_31_bool == 5342) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_5013();
			}
			if(var_31_bool == 5347) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_5013();
			}
			if(var_31_bool == 8440) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_5013();
			}
			if(var_31_bool == 8449) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_4817();
			}
			if(var_31_bool == 8450) {
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				func_4817();
			}
			if(var_31_bool == 8446) {
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_4817();
			}
			if(var_30_string == 5322) {
				bool var_189_bool = false;
				bool var_190_bool;
				func_5173(var_1_object);
				if(var_190_bool != 0) {
					bool var_198_bool;
					func_5305(var_1_object);
					if(var_198_bool != 0)
						var_189_bool = true;
				}
				if(var_189_bool != 0) {
					func_1557(var_31_bool, "Neutral");
					var_0_object->SetMessage(4850); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4879, 5370, 5353); //@t
					var_0_object->AddReply(4890, 5354, 5367); //@t
					return 0;
				}
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7627); //@t
				var_0_object->ClearReplies(); //@t
				bool var_228_bool;
				func_5197(var_1_object);
				if(var_228_bool != 0)
					var_0_object->AddReply(7629, 5329, 8418); //@t
				bool var_237_bool;
				func_5209(var_1_object);
				if(var_237_bool != 0)
					var_0_object->AddReply(7632, 5334, 8421); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_5245(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_5149(var_1_object);
					if(var_253_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(7630, 8420, 8419); //@t
				var_0_object->AddReply(7658, -1, 8451); //@t
				return 0;
			}
			if(var_30_string == 8420) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7631); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7633, 8445, 8422); //@t
				return 0;
			}
			if(var_30_string == 8445) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7654, 8448, 8447); //@t
				var_0_object->AddReply(7653, -1, 8446); //@t
				return 0;
			}
			if(var_30_string == 8448) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7655); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7656, -1, 8449); //@t
				var_0_object->AddReply(7657, -1, 8450); //@t
				return 0;
			}
			if(var_30_string == 5334) {
				object var_294_object; object var_295_object;
				var_294_object = var_1_object;
				var_295_object = var_0_object;
				func_5019();
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4863, 5336, 5335); //@t
				var_0_object->AddReply(4875, 5414, 5348); //@t
				bool var_306_bool;
				func_5137(var_1_object);
				if(!var_306_bool) //@nz
					var_0_object->AddReply(7643, 8435, 8434); //@t
				return 0;
			}
			if(var_30_string == 8435) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7645, 8437, 8436); //@t
				return 0;
			}
			if(var_30_string == 8437) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7647, 5336, 8438); //@t
				return 0;
			}
			if(var_30_string == 5414) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4927, 8441, 5415); //@t
				var_0_object->AddReply(7648, -1, 8440); //@t
				return 0;
			}
			if(var_30_string == 8441) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(7649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7650, 5338, 8442); //@t
				return 0;
			}
			if(var_30_string == 5336) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4865, 5338, 5337); //@t
				var_0_object->AddReply(4871, 5344, 5343); //@t
				return 0;
			}
			if(var_30_string == 5344) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4873, 5338, 5345); //@t
				var_0_object->AddReply(4874, -1, 5347); //@t
				return 0;
			}
			if(var_30_string == 5338) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4867, 5340, 5339); //@t
				return 0;
			}
			if(var_30_string == 5340) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4868); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4869, -1, 5341); //@t
				var_0_object->AddReply(4870, -1, 5342); //@t
				return 0;
			}
			if(var_30_string == 5329) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4858, 5374, 5330); //@t
				return 0;
			}
			if(var_30_string == 5374) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4896, 5377, 5375); //@t
				var_0_object->AddReply(4897, 5377, 5376); //@t
				return 0;
			}
			if(var_30_string == 5377) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4899, 5380, 5378); //@t
				var_0_object->AddReply(4913, 5396, 5395); //@t
				return 0;
			}
			if(var_30_string == 5396) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4915, 5380, 5397); //@t
				return 0;
			}
			if(var_30_string == 5380) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4901, 5382, 5381); //@t
				var_0_object->AddReply(4916, 5382, 5399); //@t
				var_0_object->AddReply(4917, 5402, 5401); //@t
				return 0;
			}
			if(var_30_string == 5402) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4919, 5382, 5403); //@t
				return 0;
			}
			if(var_30_string == 5382) {
				object var_440_object; object var_441_object;
				var_440_object = var_1_object;
				var_441_object = var_0_object;
				func_5037();
				object var_444_object; object var_445_object;
				var_444_object = var_1_object;
				var_445_object = var_0_object;
				func_5031();
				object var_448_object; object var_449_object;
				var_448_object = var_1_object;
				var_449_object = var_0_object;
				func_5025();
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4903, 5385, 5383); //@t
				var_0_object->AddReply(4920, 5385, 5405); //@t
				var_0_object->AddReply(4925, 5409, 5412); //@t
				return 0;
			}
			if(var_30_string == 5385) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4906, 5388, 5386); //@t
				var_0_object->AddReply(4907, 5388, 5387); //@t
				var_0_object->AddReply(4922, 5409, 5408); //@t
				return 0;
			}
			if(var_30_string == 5409) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4924, 5388, 5410); //@t
				return 0;
			}
			if(var_30_string == 5388) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4909, 5392, 5390); //@t
				var_0_object->AddReply(4910, 5392, 5391); //@t
				return 0;
			}
			if(var_30_string == 5392) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4912, -1, 5394); //@t
				var_0_object->AddReply(4921, -1, 5407); //@t
				return 0;
			}
			if(var_30_string == 5354) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4881, 5356, 5355); //@t
				var_0_object->AddReply(4889, 5356, 5365); //@t
				return 0;
			}
			if(var_30_string == 5356) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4883, 5358, 5357); //@t
				var_0_object->AddReply(4887, 5358, 5361); //@t
				return 0;
			}
			if(var_30_string == 5358) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4886, -1, 5360); //@t
				var_0_object->AddReply(4885, -1, 5359); //@t
				return 0;
			}
			if(var_30_string == 5370) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4928, 5421, 5416); //@t
				var_0_object->AddReply(4929, 5418, 5417); //@t
				return 0;
			}
			if(var_30_string == 5418) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4931, 5358, 5419); //@t
				return 0;
			}
			if(var_30_string == 5421) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4893, 5354, 5371); //@t
				var_0_object->AddReply(4933, 5423, 5422); //@t
				return 0;
			}
			if(var_30_string == 5423) {
				func_1557(var_31_bool, "Neutral");
				var_0_object->SetMessage(4934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4935, -1, 5424); //@t
				return 0;
			}
			var_3_string = true;
			bool var_567_bool;
			func_4674(var_567_bool);
			if(var_567_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x626";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4596();
			if(var_31_bool == 7538) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4799();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4811();
			}
			if(var_31_bool == 7539) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_4799();
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_4811();
			}
			if(var_31_bool == 7542) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4799();
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_4811();
			}
			if(var_31_bool == 7543) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_4799();
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_4811();
			}
			if(var_31_bool == 7841) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_4805();
			}
			if(var_31_bool == 7842) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_4805();
			}
			if(var_31_bool == 7839) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4805();
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_4811();
			}
			if(var_31_bool == 7843) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_4805();
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_4811();
			}
			if(var_30_string == 7529) {
				bool var_86_bool = false;
				bool var_87_bool;
				func_5079(var_1_object);
				if(var_87_bool != 0) {
					bool var_95_bool;
					func_5125(var_1_object);
					if(var_95_bool != 0)
						var_86_bool = true;
				}
				if(var_86_bool != 0) {
					func_2674(var_31_bool, "Neutral");
					var_0_object->SetMessage(6829); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6830, 7531, 7530); //@t
					var_0_object->AddReply(6844, 7547, 7546); //@t
					var_0_object->AddReply(6848, 7547, 7552); //@t
					var_0_object->AddReply(6849, 7535, 7554); //@t
					return 0;
				}
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(6850); //@t
				var_0_object->ClearReplies(); //@t
				bool var_131_bool = false;
				bool var_132_bool;
				func_5091(var_1_object);
				if(var_132_bool != 0) {
					bool var_138_bool;
					func_5113(var_1_object);
					if(var_138_bool != 0)
						var_131_bool = true;
				}
				if(var_131_bool != 0)
					var_0_object->AddReply(6851, 7835, 7557); //@t
				var_0_object->AddReply(7536, -1, 8318); //@t
				return 0;
			}
			if(var_30_string == 7835) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(7116); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7117, 7840, 7836); //@t
				var_0_object->AddReply(7118, 7838, 7837); //@t
				return 0;
			}
			if(var_30_string == 7838) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(7119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7120, -1, 7839); //@t
				var_0_object->AddReply(7124, -1, 7843); //@t
				return 0;
			}
			if(var_30_string == 7840) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(7121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7125, 7845, 7844); //@t
				var_0_object->AddReply(7127, 7847, 7846); //@t
				return 0;
			}
			if(var_30_string == 7847) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(7128); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7129, 7845, 7848); //@t
				return 0;
			}
			if(var_30_string == 7845) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(7126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7122, -1, 7841); //@t
				var_0_object->AddReply(7123, -1, 7842); //@t
				return 0;
			}
			if(var_30_string == 7547) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(6845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6846, 7533, 7548); //@t
				var_0_object->AddReply(6847, 7533, 7550); //@t
				return 0;
			}
			if(var_30_string == 7531) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(6831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6832, 7533, 7532); //@t
				return 0;
			}
			if(var_30_string == 7533) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(6833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6834, 7535, 7534); //@t
				var_0_object->AddReply(6843, 7535, 7544); //@t
				var_0_object->AddReply(6842, -1, 7543); //@t
				return 0;
			}
			if(var_30_string == 7535) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(6835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6836, 7537, 7536); //@t
				var_0_object->AddReply(6840, 7537, 7540); //@t
				var_0_object->AddReply(6841, -1, 7542); //@t
				return 0;
			}
			if(var_30_string == 7537) {
				func_2674(var_31_bool, "Neutral");
				var_0_object->SetMessage(6837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6838, -1, 7538); //@t
				var_0_object->AddReply(6839, -1, 7539); //@t
				return 0;
			}
			var_3_string = true;
			bool var_250_bool;
			func_4674(var_250_bool);
			if(var_250_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa83";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4596();
			if(var_31_bool == 11255) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4923();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4929();
				object var_112_object = var_1_object;
				func_4860(var_0_object);
			}
			if(var_31_bool == 11278) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_4923();
			}
			if(var_31_bool == 9939) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_4923();
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_4929();
				object var_148_object = var_1_object;
				func_4860(var_0_object);
			}
			if(var_31_bool == 11274) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_4988();
			}
			if(var_31_bool == 11275) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_4923();
			}
			if(var_31_bool == 11276) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_4923();
			}
			if(var_31_bool == 12577) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_4929();
			}
			if(var_31_bool == 9954) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_4876();
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_4905();
			}
			if(var_31_bool == 9955) {
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_4876();
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_object;
				func_4905();
			}
			if(var_31_bool == 12338) {
				object var_203_object; object var_204_object;
				var_203_object = var_1_object;
				var_204_object = var_0_object;
				func_4876();
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_4905();
			}
			if(var_31_bool == 11515) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_4995();
				object var_213_object = var_1_object;
				func_4977(var_0_object);
				object var_222_object; object var_223_object;
				var_222_object = var_1_object;
				var_223_object = var_0_object;
				func_4793();
				object var_226_object; object var_227_object;
				var_226_object = var_1_object;
				var_227_object = var_0_object;
				func_4988();
			}
			if(var_31_bool == 9915) {
				object var_230_object = var_1_object;
				func_4977(var_0_object);
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_4793();
			}
			if(var_30_string == 9919) {
				bool var_236_bool = false;
				bool var_237_bool;
				func_5221(var_1_object);
				if(!var_237_bool) { //@nz
					bool var_246_bool;
					func_5257(var_1_object);
					if(var_246_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0) {
					object var_252_object; object var_253_object;
					var_252_object = var_1_object;
					var_253_object = var_0_object;
					func_5073();
					func_3333(var_31_bool, "Neutral");
					var_0_object->SetMessage(9043); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9044, 9921, 9920); //@t
					return 0;
				}
				object var_275_object; object var_276_object;
				var_275_object = var_1_object;
				var_276_object = var_0_object;
				func_5073();
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9024); //@t
				var_0_object->ClearReplies(); //@t
				bool var_279_bool = false;
				bool var_280_bool;
				func_5185(var_1_object);
				if(var_280_bool != 0) {
					bool var_286_bool;
					func_5221(var_1_object);
					if(!var_286_bool) //@nz
						var_279_bool = true;
				}
				if(var_279_bool != 0)
					var_0_object->AddReply(11376, 12576, 12575); //@t
				bool var_292_bool = false;
				bool var_293_bool;
				func_5221(var_1_object);
				if(var_293_bool != 0) {
					bool var_295_bool;
					func_5233(var_1_object);
					if(var_295_bool != 0)
						var_292_bool = true;
				}
				if(var_292_bool != 0)
					var_0_object->AddReply(9042, 9941, 9918); //@t
				bool var_304_bool = false;
				bool var_305_bool;
				func_5281(var_1_object);
				if(var_305_bool != 0) {
					bool var_311_bool;
					func_5293(var_1_object);
					if(var_311_bool != 0)
						var_304_bool = true;
				}
				if(var_304_bool != 0)
					var_0_object->AddReply(10442, 11512, 11511); //@t
				var_0_object->AddReply(9041, 9899, 9917); //@t
				var_0_object->AddReply(11147, -1, 12337); //@t
				return 0;
			}
			if(var_30_string == 9899) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9026, 9901, 9900); //@t
				var_0_object->AddReply(9033, -1, 9908); //@t
				bool var_336_bool;
				func_5269(var_1_object);
				if(var_336_bool != 0)
					var_0_object->AddReply(9034, 9910, 9909); //@t
				return 0;
			}
			if(var_30_string == 9910) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9035); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9036, 9901, 9911); //@t
				var_0_object->AddReply(9037, 9914, 9913); //@t
				return 0;
			}
			if(var_30_string == 9914) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9039, -1, 9915); //@t
				var_0_object->AddReply(9040, -1, 9916); //@t
				return 0;
			}
			if(var_30_string == 9901) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9028, 9903, 9902); //@t
				var_0_object->AddReply(9032, 9903, 9906); //@t
				return 0;
			}
			if(var_30_string == 9903) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9030, -1, 9904); //@t
				var_0_object->AddReply(9031, -1, 9905); //@t
				return 0;
			}
			if(var_30_string == 11512) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(10443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10444, 11514, 11513); //@t
				return 0;
			}
			if(var_30_string == 11514) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(10445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10446, -1, 11515); //@t
				return 0;
			}
			if(var_30_string == 9941) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9065, 9943, 9942); //@t
				return 0;
			}
			if(var_30_string == 9943) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9067, 9946, 9944); //@t
				var_0_object->AddReply(9068, 9949, 9945); //@t
				return 0;
			}
			if(var_30_string == 9949) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9073, 9948, 9950); //@t
				return 0;
			}
			if(var_30_string == 9946) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9069); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9074, 9953, 9952); //@t
				var_0_object->AddReply(9070, 9948, 9947); //@t
				return 0;
			}
			if(var_30_string == 9948) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11149, -1, 12338); //@t
				return 0;
			}
			if(var_30_string == 9953) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9076, -1, 9954); //@t
				var_0_object->AddReply(9077, -1, 9955); //@t
				return 0;
			}
			if(var_30_string == 12576) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(11377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11378, -1, 12577); //@t
				return 0;
			}
			if(var_30_string == 9921) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10222, 11270, 11269); //@t
				return 0;
			}
			if(var_30_string == 11270) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(10223); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9046, 11280, 9922); //@t
				var_0_object->AddReply(10224, 9929, 11271); //@t
				bool var_474_bool;
				func_5269(var_1_object);
				if(var_474_bool != 0)
					var_0_object->AddReply(9047, 9924, 9923); //@t
				return 0;
			}
			if(var_30_string == 9924) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9048); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9049, 9929, 9925); //@t
				var_0_object->AddReply(10225, 11273, 11272); //@t
				return 0;
			}
			if(var_30_string == 11273) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(10226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10227, -1, 11274); //@t
				var_0_object->AddReply(10228, -1, 11275); //@t
				var_0_object->AddReply(10229, -1, 11276); //@t
				return 0;
			}
			if(var_30_string == 9929) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9060, 9938, 9937); //@t
				return 0;
			}
			if(var_30_string == 9938) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(9061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9063, 11254, 9940); //@t
				var_0_object->AddReply(9062, -1, 9939); //@t
				return 0;
			}
			if(var_30_string == 11254) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(10208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10209, -1, 11255); //@t
				var_0_object->AddReply(10231, -1, 11278); //@t
				return 0;
			}
			if(var_30_string == 11280) {
				func_3333(var_31_bool, "Neutral");
				var_0_object->SetMessage(10232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10233, 9938, 11281); //@t
				var_0_object->AddReply(10234, 9938, 11282); //@t
				return 0;
			}
			var_3_string = true;
			bool var_539_bool;
			func_4674(var_539_bool);
			if(var_539_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd16";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int)
	{
		if(1 != 0) {
			func_4596();
			if(var_30_int == 13415) {
				bool var_36_bool = false;
				bool var_37_bool;
				func_5401(var_1_object);
				if(var_37_bool != 0) {
					bool var_45_bool;
					func_5413(var_1_object);
					if(var_45_bool != 0)
						var_36_bool = true;
				}
				if(var_36_bool != 0) {
					object var_51_object; object var_52_object;
					var_51_object = var_1_object;
					var_52_object = var_0_object;
					func_5067();
					func_4281(var_31_int, "Neutral");
					var_0_object->SetMessage(12258); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12259, 13417, 13416); //@t
					return 0;
				}
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(13775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13776, -1, 15012); //@t
				return 0;
			}
			if(var_30_int == 13417) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12261, 13419, 13418); //@t
				return 0;
			}
			if(var_30_int == 13419) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12263, 13421, 13420); //@t
				return 0;
			}
			if(var_30_int == 13421) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12265, 13423, 13422); //@t
				return 0;
			}
			if(var_30_int == 13423) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12267, 13425, 13424); //@t
				return 0;
			}
			if(var_30_int == 13425) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12269, 13427, 13426); //@t
				return 0;
			}
			if(var_30_int == 13427) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12271, 13429, 13428); //@t
				return 0;
			}
			if(var_30_int == 13429) {
				func_4281(var_31_int, "Neutral");
				var_0_object->SetMessage(12272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12273, -1, 13430); //@t
				return 0;
			}
			var_3_string = true;
			bool var_128_bool;
			func_4674(var_128_bool);
			if(var_128_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10ca";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_5377(bool var_71_bool)
{
	int var_73_int;
	func_4613(var_73_int, "d6RubinGoesToGeorg");
	if(var_73_int != 0) {
		var_71_bool = true;
		return 0;
	}
	var_71_bool = false;
}


void func_4613(int var_39_int, string var_40_string)
{
	int var_42_int;
	@GetVariable(var_40_string, var_42_int);
	var_42_int = var_39_int;
}


// @pe
void func_5125(bool var_95_bool)
{
	int var_97_int;
	func_4613(var_97_int, "d2q01");
	if(var_97_int == 6)
		var_95_bool = true;
	var_95_bool = false;
}


// @pe
void func_3333(object var_2_object, string var_256_string)
{
	bool var_257_bool;
	func_4674(var_257_bool);
	if(!var_257_bool) //@nz
		return 0;
	if(var_256_string == var_2_object)
		return 0;
	string var_260_string;
	func_4578(var_260_string);
	var_2_object = var_260_string;
}


void func_4618(object var_104_object, string var_105_string)
{
	object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	object var_109_object;
	@AddBlankActor(var_109_object, var_108_object, var_105_string, (var_105_string + ".bin"));
	var_109_object = var_104_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4876(void)
{
	@SetVariable("d3q01", 5);
	object var_180_object;
	func_5487(var_180_object);
	object var_177_object;
	var_180_object = var_177_object;
	float var_185_float;
	func_4641(var_185_float);
	var_177_object->AddMark("d3q01GeorgAgreedSelf", "pt_map_georg", 1, 11154, var_185_float);
	float var_190_float;
	func_4641(var_190_float);
	var_177_object->AddMark("d3q01GeorgAgreed", "pt_map_bigvlad", 1, 15299, var_190_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5389(bool var_79_bool)
{
	int var_81_int;
	func_4613(var_81_int, "ood6Georg3");
	if(var_81_int == 0) {
		var_79_bool = true;
		return 0;
	}
	var_79_bool = false;
}


// @pe
void func_5137(bool var_306_bool)
{
	int var_308_int;
	func_4613(var_308_int, "KnowBurahDead");
	if(var_308_int == 1)
		var_306_bool = true;
	var_306_bool = false;
}


// @pe
void func_1557(object var_2_object, string var_204_string)
{
	bool var_205_bool;
	func_4674(var_205_bool);
	if(!var_205_bool) //@nz
		return 0;
	if(var_204_string == var_2_object)
		return 0;
	string var_208_string;
	func_4578(var_208_string);
	var_2_object = var_208_string;
}


void func_4629(bool var_154_bool, string var_155_string, string var_156_string)
{
	object var_158_object;
	@FindActor(var_158_object, var_155_string);
	if(var_158_object == null)
		var_154_bool = false;
	@Trigger(var_158_object, var_156_string);
	var_154_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5401(bool var_37_bool)
{
	int var_39_int;
	func_4613(var_39_int, "d8KainIsReason");
	if(var_39_int == 1)
		var_37_bool = true;
	var_37_bool = false;
}


// @pe
void func_5149(bool var_253_bool)
{
	int var_255_int;
	func_4613(var_255_int, "ood1Georg4");
	if(var_255_int == 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


void func_4641(float var_57_float)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_59_float = var_57_float;
}


void func_4131(object var_0_object, int var_594_int, object var_595_object)
{
	var_0_object = var_595_object;
	bool var_605_bool; object var_606_object;
	var_595_object = var_606_object;
	func_4518(var_605_bool, var_606_object);
	if(!var_605_bool) { //@nz
		var_594_int = -2;
		return 8;
	}
	object var_601_object;
	@CreateDialog(var_601_object);
	int var_608_int;
	func_4670(var_608_int);
	var_601_object->SetNPCName(var_608_int);
	string var_609_string;
	func_4672(var_609_string);
	var_601_object->SetPhoto(var_609_string);
	int var_610_int;
	func_5537(var_610_int);
	var_601_object->SetPlayerName(var_610_int);
	bool var_602_bool;
	@IsOverrideActive(var_602_bool);
	if(var_602_bool != 0) {
		var_594_int = -2;
		return 8;
	}
	@DoDialog(var_601_object);
	object var_612_object; object var_613_object;
	var_595_object = var_612_object;
	var_601_object = var_613_object;
	TaskCall(13);
	func_4194(var_614_object, var_615_object, var_616_string, var_617_bool, var_612_object, var_613_object);
	TaskReturn();
	bool var_604_bool;
	var_601_object->IsDialogEnd(var_604_bool);
	
	for(;;) {
		var_658_bool = !var_604_bool; //@nz
		if(var_658_bool == 0) goto Label_4183;
		@sync();
		var_601_object->IsDialogEnd(var_604_bool);
	}
	
Label_4183:
	object var_659_object;
	var_595_object = var_659_object;
	func_4574();
	@StopDialog(var_601_object);
	var_601_object->GetReturnValue(-1);
	int var_603_int = var_594_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5413(bool var_45_bool)
{
	int var_47_int;
	func_4613(var_47_int, "ood8Georg1");
	if(var_47_int == 0) {
		var_45_bool = true;
		return 0;
	}
	var_45_bool = false;
}


void func_4646(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


// @pe
void func_5161(bool var_120_bool)
{
	int var_122_int;
	func_4613(var_122_int, "ood1GeorgMQ1");
	if(var_122_int == 0) {
		var_120_bool = true;
		return 0;
	}
	var_120_bool = false;
}


void func_3114(object var_0_object, int var_375_int, object var_376_object)
{
	var_0_object = var_376_object;
	bool var_386_bool; object var_387_object;
	var_376_object = var_387_object;
	func_4518(var_386_bool, var_387_object);
	if(!var_386_bool) { //@nz
		var_375_int = -2;
		return 8;
	}
	object var_382_object;
	@CreateDialog(var_382_object);
	int var_389_int;
	func_4670(var_389_int);
	var_382_object->SetNPCName(var_389_int);
	string var_390_string;
	func_4672(var_390_string);
	var_382_object->SetPhoto(var_390_string);
	int var_391_int;
	func_5537(var_391_int);
	var_382_object->SetPlayerName(var_391_int);
	bool var_383_bool;
	@IsOverrideActive(var_383_bool);
	if(var_383_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	@DoDialog(var_382_object);
	object var_393_object; object var_394_object;
	var_376_object = var_393_object;
	var_382_object = var_394_object;
	TaskCall(11);
	func_3177(var_395_object, var_396_object, var_397_string, var_398_bool, var_393_object, var_394_object);
	TaskReturn();
	bool var_385_bool;
	var_382_object->IsDialogEnd(var_385_bool);
	
	for(;;) {
		var_486_bool = !var_385_bool; //@nz
		if(var_486_bool == 0) goto Label_3166;
		@sync();
		var_382_object->IsDialogEnd(var_385_bool);
	}
	
Label_3166:
	object var_487_object;
	var_376_object = var_487_object;
	func_4574();
	@StopDialog(var_382_object);
	var_382_object->GetReturnValue(-1);
	int var_384_int = var_375_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4905(void)
{
	@SetVariable("ood3Georg1", 1);
}


// @pe
void func_4655(bool var_32_bool, int var_33_int)
{
	int var_34_int;
	func_4646(var_34_int);
	var_32_bool = var_34_int == var_33_int;
}


// @pe
void func_4911(void)
{
	@SetVariable("ood1GeorgMQ1", 1);
}


void func_49(object var_0_object, int var_490_int, object var_491_object)
{
	var_0_object = var_491_object;
	bool var_501_bool; object var_502_object;
	var_491_object = var_502_object;
	func_4518(var_501_bool, var_502_object);
	if(!var_501_bool) { //@nz
		var_490_int = -2;
		return 8;
	}
	object var_497_object;
	@CreateDialog(var_497_object);
	int var_504_int;
	func_4670(var_504_int);
	var_497_object->SetNPCName(var_504_int);
	string var_505_string;
	func_4672(var_505_string);
	var_497_object->SetPhoto(var_505_string);
	int var_506_int;
	func_5537(var_506_int);
	var_497_object->SetPlayerName(var_506_int);
	bool var_498_bool;
	@IsOverrideActive(var_498_bool);
	if(var_498_bool != 0) {
		var_490_int = -2;
		return 8;
	}
	@DoDialog(var_497_object);
	object var_508_object; object var_509_object;
	var_491_object = var_508_object;
	var_497_object = var_509_object;
	TaskCall(3);
	func_112(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object);
	TaskReturn();
	bool var_500_bool;
	var_497_object->IsDialogEnd(var_500_bool);
	
	for(;;) {
		var_590_bool = !var_500_bool; //@nz
		if(var_590_bool == 0) goto Label_101;
		@sync();
		var_497_object->IsDialogEnd(var_500_bool);
	}
	
Label_101:
	object var_591_object;
	var_491_object = var_591_object;
	func_4574();
	@StopDialog(var_497_object);
	var_497_object->GetReturnValue(-1);
	int var_499_int = var_490_int;
}
EMIT "Stack[-4] = 0";


void func_562(object var_0_object, int var_46_int, object var_47_object)
{
	var_0_object = var_47_object;
	bool var_57_bool; object var_58_object;
	var_47_object = var_58_object;
	func_4518(var_57_bool, var_58_object);
	if(!var_57_bool) { //@nz
		var_46_int = -2;
		return 8;
	}
	object var_53_object;
	@CreateDialog(var_53_object);
	int var_98_int;
	func_4670(var_98_int);
	var_53_object->SetNPCName(var_98_int);
	string var_99_string;
	func_4672(var_99_string);
	var_53_object->SetPhoto(var_99_string);
	int var_100_int;
	func_5537(var_100_int);
	var_53_object->SetPlayerName(var_100_int);
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	@DoDialog(var_53_object);
	object var_109_object; object var_110_object;
	var_47_object = var_109_object;
	var_53_object = var_110_object;
	TaskCall(5);
	func_625(var_111_object, var_112_object, var_113_string, var_114_bool, var_109_object, var_110_object);
	TaskReturn();
	bool var_56_bool;
	var_53_object->IsDialogEnd(var_56_bool);
	
	for(;;) {
		var_183_bool = !var_56_bool; //@nz
		if(var_183_bool == 0) goto Label_614;
		@sync();
		var_53_object->IsDialogEnd(var_56_bool);
	}
	
Label_614:
	object var_184_object;
	var_47_object = var_184_object;
	func_4574();
	@StopDialog(var_53_object);
	var_53_object->GetReturnValue(-1);
	int var_55_int = var_46_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5425(bool var_163_bool)
{
	var_163_bool = false;
}


void func_5428(object var_85_object)
{
	object var_87_object;
	@GetDiaryRoot(var_87_object);
	if(!var_87_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_85_object = false;
	}
	var_87_object = var_85_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5173(bool var_190_bool)
{
	int var_192_int;
	func_4613(var_192_int, "ood1Georg1");
	if(var_192_int == 0) {
		var_190_bool = true;
		return 0;
	}
	var_190_bool = false;
}


void func_4661(bool var_660_bool)
{
	func_4578("No");
	bool var_662_bool;
	@lshWaitForAnimEnd(var_662_bool);
	var_662_bool = var_660_bool;
}


// @pe
void func_4917(void)
{
	@SetVariable("KnowViktor", 1);
}


// @pe
void func_4923(void)
{
	@SetVariable("ood3Georg2", 1);
}


void func_4670(int var_98_int)
{
	var_98_int = 2859;
}


void func_4672(string var_99_string)
{
	var_99_string = "ui/NPC_Georg.png";
}


// @pe
void func_5185(bool var_280_bool)
{
	int var_282_int;
	func_4613(var_282_int, "d3q01");
	if(var_282_int == 0) {
		var_280_bool = true;
		return 0;
	}
	var_280_bool = false;
}


void func_4674(bool var_33_bool)
{
	var_33_bool = true;
}


void func_4929(void)
{
	@SetVariable("d3q02", 1);
	object var_46_object;
	func_5487(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	float var_57_float;
	func_4641(var_57_float);
	var_43_object->AddMark("d3q02GeorgGotoMishka", "pt_map_mishka", 0, 11375, var_57_float);
	float var_64_float;
	func_4641(var_64_float);
	var_43_object->AddMark("d3q02GeorgSelf", "pt_map_georg", 0, 15304, var_64_float);
	float var_69_float;
	func_4641(var_69_float);
	var_43_object->AddMark("d3q02GeorgGotoViktor", "pt_map_viktor", 0, 11379, var_69_float);
	func_5586();
	func_5602();
	object var_104_object;
	func_4618(var_104_object, "quest_d3_02");
}
EMIT "Stack[-1] = 0";


void func_4676(void)
{
	@SetVariable("d1q01", 1);
	object var_46_object;
	func_5487(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	float var_57_float;
	func_4641(var_57_float);
	var_43_object->AddMark("d1GeorgInfo", "pt_map_georg", 3, 8631, var_57_float);
	float var_64_float;
	func_4641(var_64_float);
	var_43_object->AddMark("d1GeorgGotoViktor", "pt_map_viktor", 3, 8629, var_64_float);
	func_5554();
}
EMIT "Stack[-1] = 0";


void func_5441(bool var_76_bool, object var_77_object, int var_78_int)
{
	object var_85_object;
	func_5428(var_85_object);
	object var_82_object;
	var_85_object = var_82_object;
	object var_83_object;
	var_82_object->Find(var_78_int, var_83_object);
	if(!var_83_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_78_int);
		var_76_bool = false;
	}
	var_83_object->AddChild(var_77_object);
	@SetVariable("player_diary", 1);
	int var_84_int;
	var_77_object->GetCategory(var_84_int);
	@SetDiarySection(var_84_int);
	var_76_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5197(bool var_228_bool)
{
	int var_230_int;
	func_4613(var_230_int, "ood1Georg2");
	if(var_230_int == 0) {
		var_228_bool = true;
		return 0;
	}
	var_228_bool = false;
}


void func_1368(object var_0_object, int var_185_int, object var_186_object)
{
	var_0_object = var_186_object;
	bool var_196_bool; object var_197_object;
	var_186_object = var_197_object;
	func_4518(var_196_bool, var_197_object);
	if(!var_196_bool) { //@nz
		var_185_int = -2;
		return 8;
	}
	object var_192_object;
	@CreateDialog(var_192_object);
	int var_199_int;
	func_4670(var_199_int);
	var_192_object->SetNPCName(var_199_int);
	string var_200_string;
	func_4672(var_200_string);
	var_192_object->SetPhoto(var_200_string);
	int var_201_int;
	func_5537(var_201_int);
	var_192_object->SetPlayerName(var_201_int);
	bool var_193_bool;
	@IsOverrideActive(var_193_bool);
	if(var_193_bool != 0) {
		var_185_int = -2;
		return 8;
	}
	@DoDialog(var_192_object);
	object var_203_object; object var_204_object;
	var_186_object = var_203_object;
	var_192_object = var_204_object;
	TaskCall(7);
	func_1431(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	bool var_195_bool;
	var_192_object->IsDialogEnd(var_195_bool);
	
	for(;;) {
		var_282_bool = !var_195_bool; //@nz
		if(var_282_bool == 0) goto Label_1420;
		@sync();
		var_192_object->IsDialogEnd(var_195_bool);
	}
	
Label_1420:
	object var_283_object;
	var_186_object = var_283_object;
	func_4574();
	@StopDialog(var_192_object);
	var_192_object->GetReturnValue(-1);
	int var_194_int = var_185_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5209(bool var_237_bool)
{
	int var_239_int;
	func_4613(var_239_int, "ood1Georg3");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_5470(bool var_92_bool, int var_93_int)
{
	object var_98_object;
	func_5428(var_98_object);
	object var_96_object;
	var_98_object = var_96_object;
	object var_97_object;
	var_96_object->Find(var_93_int, var_97_object);
	if(!var_97_object) //@nz
		var_92_bool = false;
	var_97_object->Remove();
	var_92_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4194(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_612_object, object var_613_object)
{
	var_0_object = var_613_object;
	var_1_object = var_612_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_619_bool = false;
		bool var_620_bool;
		func_5401(var_1_object);
		if(var_620_bool != 0) {
			bool var_626_bool;
			func_5413(var_1_object);
			if(var_626_bool != 0)
				var_619_bool = true;
		}
		if(var_619_bool != 0) {
			object var_632_object; object var_633_object;
			var_632_object = var_1_object;
			var_633_object = var_0_object;
			func_5067();
			func_4281(var_613_object, "Neutral");
			var_0_object->SetMessage(12258); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12259, 13417, 13416); //@t
		} else {
					func_4281(var_613_object, "Neutral");
					var_0_object->SetMessage(13775); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13776, -1, 15012); //@t
		}
	}
	for(;;) {
		bool var_645_bool;
		func_4674(var_645_bool);
		if(var_645_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4578(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4280;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4280:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1066";


void func_4708(void)
{
	@SetVariable("d1q01", 1000);
	object var_48_object;
	func_5487(var_48_object);
	object var_44_object;
	var_48_object = var_44_object;
	object var_45_object;
	var_44_object->FindMark(var_45_object, "d1q01EvaAboutMark");
	if(var_45_object != 0)
		var_45_object->Remove();
	var_44_object->FindMark(var_45_object, "d1q01EvaGotoSimon");
	if(var_45_object != 0)
		var_45_object->Remove();
	var_44_object->FindMark(var_45_object, "d1q01GrifAboutRubin");
	if(var_45_object != 0)
		var_45_object->Remove();
	var_44_object->FindMark(var_45_object, "d1q01MarkAboutJulia");
	if(var_45_object != 0)
		var_45_object->Remove();
	var_44_object->FindMark(var_45_object, "d1q01MarkAboutLara");
	if(var_45_object != 0)
		var_45_object->Remove();
	var_44_object->FindMark(var_45_object, "d1q01NotkinAboutRubin");
	if(var_45_object != 0)
		var_45_object->Remove();
	func_5570();
	bool var_92_bool;
	func_5470(var_92_bool, 31);
	bool var_100_bool;
	func_5470(var_100_bool, 32);
	bool var_102_bool;
	func_5470(var_102_bool, 33);
	bool var_104_bool;
	func_5470(var_104_bool, 34);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5221(bool var_237_bool)
{
	int var_239_int;
	func_4613(var_239_int, "d3q01");
	if(var_239_int == 4)
		var_237_bool = true;
	var_237_bool = false;
}


// @pe
void func_3177(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_393_object, object var_394_object)
{
	var_0_object = var_394_object;
	var_1_object = var_393_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_400_bool = false;
		bool var_401_bool;
		func_5221(var_1_object);
		if(!var_401_bool) { //@nz
			bool var_408_bool;
			func_5257(var_1_object);
			if(var_408_bool != 0)
				var_400_bool = true;
		}
		if(var_400_bool != 0) {
			object var_414_object; object var_415_object;
			var_414_object = var_1_object;
			var_415_object = var_0_object;
			func_5073();
			func_3333(var_394_object, "Neutral");
			var_0_object->SetMessage(9043); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9044, 9921, 9920); //@t
		} else {
					object var_435_object; object var_436_object;
					var_435_object = var_1_object;
					var_436_object = var_0_object;
					func_5073();
					func_3333(var_394_object, "Neutral");
					var_0_object->SetMessage(9024); //@t
					var_0_object->ClearReplies(); //@t
					bool var_439_bool = false;
					bool var_440_bool;
					func_5185(var_1_object);
					if(var_440_bool != 0) {
						bool var_446_bool;
						func_5221(var_1_object);
						if(!var_446_bool) //@nz
							var_439_bool = true;
					}
					if(var_439_bool != 0)
						var_0_object->AddReply(11376, 12576, 12575); //@t
					bool var_452_bool = false;
					bool var_453_bool;
					func_5221(var_1_object);
					if(var_453_bool != 0) {
						bool var_455_bool;
						func_5233(var_1_object);
						if(var_455_bool != 0)
							var_452_bool = true;
					}
					if(var_452_bool != 0)
						var_0_object->AddReply(9042, 9941, 9918); //@t
					bool var_464_bool = false;
					bool var_465_bool;
					func_5281(var_1_object);
					if(var_465_bool != 0) {
						bool var_471_bool;
						func_5293(var_1_object);
						if(var_471_bool != 0)
							var_464_bool = true;
					}
					if(var_464_bool != 0)
						var_0_object->AddReply(10442, 11512, 11511); //@t
					var_0_object->AddReply(9041, 9899, 9917); //@t
					var_0_object->AddReply(11147, -1, 12337); //@t
		}
	}
	for(;;) {
		bool var_427_bool;
		func_4674(var_427_bool);
		if(var_427_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4578(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3332;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3332:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc6d";


void func_5487(object var_46_object)
{
	object var_49_object; object var_50_object;
	@GetMainOutdoorScene(var_49_object);
	if(var_49_object == null) {
		@Trace("Can't find main outdoor scene");
		var_50_object = null;
		var_50_object = var_46_object;
	}
	var_49_object->GetMap(var_50_object);
	var_50_object = var_46_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_508_object, object var_509_object)
{
	var_0_object = var_509_object;
	var_1_object = var_508_object;
	var_3_object = false;
	if(1 != 0) {
		func_234(var_509_object, "Neutral");
		var_0_object->SetMessage(12009); //@t
		var_0_object->ClearReplies(); //@t
		bool var_521_bool = false;
		bool var_522_bool;
		func_5377(var_1_object);
		if(var_522_bool != 0) {
			bool var_528_bool;
			func_5389(var_1_object);
			if(var_528_bool != 0)
				var_521_bool = true;
		}
		if(var_521_bool != 0)
			var_0_object->AddReply(12010, 13230, 13228); //@t
		bool var_537_bool = false;
		bool var_538_bool = false;
		bool var_539_bool = false;
		bool var_540_bool;
		func_5317(var_1_object);
		if(!var_540_bool) { //@nz
			bool var_547_bool;
			func_5329(var_1_object);
			if(!var_547_bool) //@nz
				var_539_bool = true;
		}
		if(var_539_bool != 0) {
			bool var_554_bool;
			func_5341(var_1_object);
			if(!var_554_bool) //@nz
				var_538_bool = true;
		}
		if(var_538_bool != 0) {
			bool var_561_bool;
			func_5353(var_1_object);
			if(var_561_bool != 0)
				var_537_bool = true;
		}
		if(var_537_bool != 0)
			var_0_object->AddReply(12014, 13233, 13232); //@t
		bool var_570_bool;
		func_5365(var_1_object);
		if(var_570_bool != 0)
			var_0_object->AddReply(12018, 3560, 13236); //@t
		var_0_object->AddReply(12011, -1, 13229); //@t
		goto Label_204;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_204:
	bool var_582_bool;
	func_4674(var_582_bool);
	if(var_582_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4578(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_233;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_233:
		return 0;

	}
	
}


// @pe
void func_625(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_109_object, object var_110_object)
{
	var_0_object = var_110_object;
	var_1_object = var_109_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_116_bool;
		func_5161(var_1_object);
		if(var_116_bool != 0) {
			object var_122_object; object var_123_object;
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_4787();
			object var_126_object; object var_127_object;
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5043();
			func_743(var_110_object, "Neutral");
			var_0_object->SetMessage(4780); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(4781, 5240, 5234); //@t
			var_0_object->AddReply(4782, 5240, 5235); //@t
			var_0_object->AddReply(4786, 5240, 5239); //@t
		} else {
					bool var_163_bool;
					func_5103(var_163_bool, var_1_object);
					if(var_163_bool == 0) goto Label_711;
					object var_167_object; object var_168_object;
					var_167_object = var_1_object;
					var_168_object = var_0_object;
					func_5043();
					func_743(var_110_object, "Neutral");
					var_0_object->SetMessage(4783); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4784, 5294, 5237); //@t
					var_0_object->AddReply(4830, 5301, 5297); //@t
					var_0_object->AddReply(4836, 5296, 5304); //@t
					var_0_object->AddReply(4845, -1, 5317); //@t
		}
	}
	for(;;) {
		bool var_155_bool;
		func_4674(var_155_bool);
		if(var_155_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4578(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_742;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_742:
			return 0;

		}

	}
	
Label_711:
}
EMIT "GOTO 0x275";


// @pe
void func_2674(object var_2_object, string var_101_string)
{
	bool var_102_bool;
	func_4674(var_102_bool);
	if(!var_102_bool) //@nz
		return 0;
	if(var_101_string == var_2_object)
		return 0;
	string var_105_string;
	func_4578(var_105_string);
	var_2_object = var_105_string;
}


// @pe
void func_5233(bool var_295_bool)
{
	int var_297_int;
	func_4613(var_297_int, "ood3Georg1");
	if(var_297_int == 0) {
		var_295_bool = true;
		return 0;
	}
	var_295_bool = false;
}


// @pe
void func_4977(object var_213_object)
{
	@Trace("money3000 is given");
	object var_216_object;
	var_213_object = var_216_object;
	func_4494(var_216_object, "money", 3000);
}


// @pe
void func_4988(void)
{
	bool var_154_bool;
	func_4629(var_154_bool, "quest_d3_02", "completed");
}


// @pe
void func_5245(bool var_247_bool)
{
	int var_249_int;
	func_4613(var_249_int, "KnowRubin");
	if(var_249_int == 1)
		var_247_bool = true;
	var_247_bool = false;
}


void func_5504(object var_114_object, string var_115_string, float var_116_float)
{
	object var_124_object;
	@GetMainOutdoorScene(var_124_object);
	if(var_124_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_122_cvector;
	cvector var_123_cvector;
	bool var_125_bool;
	var_124_object->GetLocator(var_115_string, var_125_bool, var_122_cvector, var_123_cvector);
	if(!var_125_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_115_string) + " doesnt exist");
	var_124_object->GetMap(var_114_object);
	if(var_114_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_135_float = GetByIndex(var_122_cvector, 0);
	var_136_float = GetByIndex(var_122_cvector, 2);
	var_114_object->SetMapParams(var_135_float, var_136_float, var_116_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4995(void)
{
	@SetVariable("ood3Georg3", 1);
}


// @pe
void func_5257(bool var_246_bool)
{
	int var_248_int;
	func_4613(var_248_int, "ood3Georg2");
	if(var_248_int == 0) {
		var_246_bool = true;
		return 0;
	}
	var_246_bool = false;
}


// @pe
void func_5001(void)
{
	@SetVariable("ood1Georg1", 1);
}


void func_4494(object var_216_object, string var_217_string, int var_218_int)
{
	int var_220_int;
	var_216_object->GetProperty(var_217_string, var_220_int);
	var_216_object->SetProperty(var_217_string, (var_220_int + var_218_int));
}


// @pe
void func_5007(void)
{
	@SetVariable("ood1Georg2", 1);
}


// @pe
void func_5269(bool var_336_bool)
{
	int var_338_int;
	func_4613(var_338_int, "d3RubinToldWhereIsSimon");
	if(var_338_int == 1)
		var_336_bool = true;
	var_336_bool = false;
}


void func_4501(bool var_31_bool, object var_32_object)
{
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	bool var_40_bool;
	@Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
}


// @pe
void func_5013(void)
{
	@SetVariable("ood1Georg3", 1);
}


// @pe
void func_1431(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_203_object, object var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_210_bool = false;
		bool var_211_bool;
		func_5173(var_1_object);
		if(var_211_bool != 0) {
			bool var_217_bool;
			func_5305(var_1_object);
			if(var_217_bool != 0)
				var_210_bool = true;
		}
		if(var_210_bool != 0) {
			func_1557(var_204_object, "Neutral");
			var_0_object->SetMessage(4850); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(4879, 5370, 5353); //@t
			var_0_object->AddReply(4890, 5354, 5367); //@t
		} else {
					func_1557(var_204_object, "Neutral");
					var_0_object->SetMessage(7627); //@t
					var_0_object->ClearReplies(); //@t
					bool var_245_bool;
					func_5197(var_1_object);
					if(var_245_bool != 0)
						var_0_object->AddReply(7629, 5329, 8418); //@t
					bool var_254_bool;
					func_5209(var_1_object);
					if(var_254_bool != 0)
						var_0_object->AddReply(7632, 5334, 8421); //@t
					bool var_263_bool = false;
					bool var_264_bool;
					func_5245(var_1_object);
					if(var_264_bool != 0) {
						bool var_270_bool;
						func_5149(var_1_object);
						if(var_270_bool != 0)
							var_263_bool = true;
					}
					if(var_263_bool != 0)
						var_0_object->AddReply(7630, 8420, 8419); //@t
					var_0_object->AddReply(7658, -1, 8451); //@t
		}
	}
	for(;;) {
		bool var_235_bool;
		func_4674(var_235_bool);
		if(var_235_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4578(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1556;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1556:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x59b";


// @pe
void func_5019(void)
{
	@SetVariable("KnowRubin", 1);
}


// @pe
void func_5281(bool var_305_bool)
{
	int var_307_int;
	func_4613(var_307_int, "ood3Georg3");
	if(var_307_int == 0) {
		var_305_bool = true;
		return 0;
	}
	var_305_bool = false;
}


void func_4513(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


void func_5537(int var_100_int)
{
	int var_102_int;
	@GetVariable("player", var_102_int);
	if(var_102_int == 0) {
		var_100_int = 200001;
		return 2;
	EMIT "GOTO 0x15b0";
	}
	if(var_102_int == 1) {
		var_100_int = 200002;
		return 2;
	}
	var_100_int = 200003;
}


// @pe
void func_5025(void)
{
	@SetVariable("KnowSaburivClan", 1);
}


void func_4518(bool var_57_bool, object var_58_object)
{
	cvector var_68_cvector;
	var_58_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_58_object->GetEyesHeight(var_67_float);
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_75_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_76_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_77_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_79_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_79_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_4603(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * 70) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_57_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector);
	var_95_float = GetByIndex(var_72_cvector, 0);
	var_96_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_57_bool = true;
}


// @pe
void func_5031(void)
{
	@SetVariable("KnowOlgimskiClan", 1);
}


// @pe
void func_4781(void)
{
	@SetVariable("d1q01TeloNedostupno", 1);
}


// @pe
void func_5293(bool var_311_bool)
{
	int var_313_int;
	func_4613(var_313_int, "d3q02SeeCorpse");
	if(var_313_int == 1)
		var_311_bool = true;
	var_311_bool = false;
}


// @pe
void func_5037(void)
{
	@SetVariable("KnowKainClan", 1);
}


void func_5554(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 2, 1, 3073);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_5441(var_71_bool, var_72_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4787(void)
{
	@SetVariable("d1q01FirstGeorgVisit", 1);
}


// @pe
void func_5043(void)
{
	@SetVariable("KnowGeorg", 1);
}


// @pe
void func_5305(bool var_198_bool)
{
	int var_200_int;
	func_4613(var_200_int, "d1q01");
	if(var_200_int == 2)
		var_198_bool = true;
	var_198_bool = false;
}


// @pe
void func_4793(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_4281(object var_2_object, string var_55_string)
{
	bool var_56_bool;
	func_4674(var_56_bool);
	if(!var_56_bool) //@nz
		return 0;
	if(var_55_string == var_2_object)
		return 0;
	string var_59_string;
	func_4578(var_59_string);
	var_2_object = var_59_string;
}


// @pe
void func_5049(void)
{
	@SetVariable("ood6Georg1", 1);
}


// @pe
void func_4799(void)
{
	@SetVariable("ood2Georg1", 1);
}


// @pe
void func_5055(void)
{
	@SetVariable("ood6Georg2", 1);
}


void func_2495(object var_0_object, int var_286_int, object var_287_object)
{
	var_0_object = var_287_object;
	bool var_297_bool; object var_298_object;
	var_287_object = var_298_object;
	func_4518(var_297_bool, var_298_object);
	if(!var_297_bool) { //@nz
		var_286_int = -2;
		return 8;
	}
	object var_293_object;
	@CreateDialog(var_293_object);
	int var_300_int;
	func_4670(var_300_int);
	var_293_object->SetNPCName(var_300_int);
	string var_301_string;
	func_4672(var_301_string);
	var_293_object->SetPhoto(var_301_string);
	int var_302_int;
	func_5537(var_302_int);
	var_293_object->SetPlayerName(var_302_int);
	bool var_294_bool;
	@IsOverrideActive(var_294_bool);
	if(var_294_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	@DoDialog(var_293_object);
	object var_304_object; object var_305_object;
	var_287_object = var_304_object;
	var_293_object = var_305_object;
	TaskCall(9);
	func_2558(var_306_object, var_307_object, var_308_string, var_309_bool, var_304_object, var_305_object);
	TaskReturn();
	bool var_296_bool;
	var_293_object->IsDialogEnd(var_296_bool);
	
	for(;;) {
		var_371_bool = !var_296_bool; //@nz
		if(var_371_bool == 0) goto Label_2547;
		@sync();
		var_293_object->IsDialogEnd(var_296_bool);
	}
	
Label_2547:
	object var_372_object;
	var_287_object = var_372_object;
	func_4574();
	@StopDialog(var_293_object);
	var_293_object->GetReturnValue(-1);
	int var_295_int = var_286_int;
}
EMIT "Stack[-4] = 0";


void func_5570(void)
{
	@Trace("Adding diary entry");
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 49, 1, 12131);
	bool var_73_bool; object var_74_object;
	var_68_object = var_74_object;
	func_5441(var_73_bool, var_74_object, 2);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5317(bool var_91_bool)
{
	int var_93_int;
	func_4613(var_93_int, "d6q01");
	if(var_93_int == 0) {
		var_91_bool = true;
		return 0;
	}
	var_91_bool = false;
}


// @pe
void func_4805(void)
{
	@SetVariable("ood2Georg2", 1);
}


// @pe
void func_5061(void)
{
	@SetVariable("ood6Georg3", 1);
}


// @pe
void func_4811(void)
{
	@SetVariable("d2q01GeorgVisit", 1);
}


// @pe
void func_5067(void)
{
	@SetVariable("ood8Georg1", 1);
}


// @pe
void func_5329(bool var_98_bool)
{
	int var_100_int;
	func_4613(var_100_int, "d6q01");
	if(var_100_int == 1000)
		var_98_bool = true;
	var_98_bool = false;
}


// @pe
void func_4817(void)
{
	@SetVariable("ood1Georg4", 1);
}


// @pe
void func_5073(void)
{
	@SetVariable("d3GeorgVisit", 1);
}


void func_5586(void)
{
	@Trace("Adding diary entry");
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 26, 2, 3366);
	bool var_76_bool; object var_77_object;
	var_71_object = var_77_object;
	func_5441(var_76_bool, var_77_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4823(void)
{
	@SetVariable("KnowGorny", 1);
}


// @pe
void func_5079(bool var_87_bool)
{
	int var_89_int;
	func_4613(var_89_int, "ood2Georg1");
	if(var_89_int == 0) {
		var_87_bool = true;
		return 0;
	}
	var_87_bool = false;
}


// @pe
void func_5341(bool var_105_bool)
{
	int var_107_int;
	func_4613(var_107_int, "d6q01");
	if(var_107_int == -1)
		var_105_bool = true;
	var_105_bool = false;
}


void func_4829(void)
{
	object var_130_object;
	func_5487(var_130_object);
	object var_129_object;
	var_130_object = var_129_object;
	float var_135_float;
	func_4641(var_135_float);
	var_129_object->AddMark("d1GeorgAboutAlexandr", "pt_map_alexandr", 3, 8632, var_135_float);
	float var_142_float;
	func_4641(var_142_float);
	var_129_object->AddMark("d1GeorgAboutBigVlad", "pt_map_bigvlad", 3, 8633, var_142_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4574(void)
{
	@CameraSwitchToNormal();
}


void func_4578(string var_35_string)
{
	@Trace("playing " + var_35_string);
	float var_38_float;
	float var_39_float;
	@lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	@lshPlayAnimation(var_38_float, var_39_float);
	@Trace("start: " + var_38_float);
	@Trace("end: " + var_39_float);
}


// @pe
void func_5091(bool var_132_bool)
{
	int var_134_int;
	func_4613(var_134_int, "ood2Georg2");
	if(var_134_int == 0) {
		var_132_bool = true;
		return 0;
	}
	var_132_bool = false;
}


void func_5602(void)
{
	@Trace("Adding diary entry");
	object var_96_object;
	@CreateDiaryEntry(var_96_object, 76, 2, 12158);
	bool var_101_bool; object var_102_object;
	var_96_object = var_102_object;
	func_5441(var_101_bool, var_102_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_743(object var_2_object, string var_136_string)
{
	bool var_137_bool;
	func_4674(var_137_bool);
	if(!var_137_bool) //@nz
		return 0;
	if(var_136_string == var_2_object)
		return 0;
	string var_140_string;
	func_4578(var_140_string);
	var_2_object = var_140_string;
}


// @pe
void func_5353(bool var_112_bool)
{
	int var_114_int;
	func_4613(var_114_int, "ood6Georg1");
	if(var_114_int == 0) {
		var_112_bool = true;
		return 0;
	}
	var_112_bool = false;
}


// @pe
void func_234(object var_2_object, string var_54_string)
{
	bool var_55_bool;
	func_4674(var_55_bool);
	if(!var_55_bool) //@nz
		return 0;
	if(var_54_string == var_2_object)
		return 0;
	string var_58_string;
	func_4578(var_58_string);
	var_2_object = var_58_string;
}


// @pe
void func_5103(bool var_161_bool, object var_162_object)
{
	object var_164_object;
	var_162_object = var_164_object;
	func_5425(var_164_object);
	bool var_163_bool;
	if(var_163_bool != 0) {
		var_161_bool = true;
		return 0;
	}
	var_161_bool = false;
}


void func_5618(void)
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_4596(void)
{
	bool var_33_bool;
	func_4674(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5365(bool var_121_bool)
{
	int var_123_int;
	func_4613(var_123_int, "ood6Georg2");
	if(var_123_int == 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


// @pe
void func_4854(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_5622(object var_31_object)
{
	bool var_32_bool;
	func_4655(var_32_bool, 1);
	if(var_32_bool != 0) {
		int var_40_int;
		func_4613(var_40_int, "d1q01");
		if(var_40_int == 0) {
			int var_46_int; object var_47_object;
			var_31_object = var_47_object;
			TaskCall(4);
			func_562(var_48_object, var_46_int, var_47_object);
			TaskReturn();
			return 0;
		}
		int var_185_int; object var_186_object;
		var_31_object = var_186_object;
		TaskCall(6);
		func_1368(var_187_object, var_185_int, var_186_object);
		TaskReturn();
		return 0;
	}
	bool var_284_bool;
	func_4655(var_284_bool, 2);
	if(var_284_bool != 0) {
		int var_286_int; object var_287_object;
		var_31_object = var_287_object;
		TaskCall(8);
		func_2495(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	bool var_373_bool;
	func_4655(var_373_bool, 3);
	if(var_373_bool != 0) {
		int var_375_int; object var_376_object;
		var_31_object = var_376_object;
		TaskCall(10);
		func_3114(var_377_object, var_375_int, var_376_object);
		TaskReturn();
		return 0;
	}
	bool var_488_bool;
	func_4655(var_488_bool, 6);
	if(var_488_bool != 0) {
		int var_490_int; object var_491_object;
		var_31_object = var_491_object;
		TaskCall(2);
		func_49(var_492_object, var_490_int, var_491_object);
		TaskReturn();
		return 0;
	}
	bool var_592_bool;
	func_4655(var_592_bool, 8);
	if(var_592_bool != 0) {
		int var_594_int; object var_595_object;
		var_31_object = var_595_object;
		TaskCall(12);
		func_4131(var_596_object, var_594_int, var_595_object);
		TaskReturn();
		return 0;
	}
	bool var_660_bool;
	func_4661(var_660_bool);
}


// @pe
void func_5113(bool var_138_bool)
{
	int var_140_int;
	func_4613(var_140_int, "d2q01");
	if(var_140_int == 0) {
		var_138_bool = true;
		return 0;
	}
	var_138_bool = false;
}


void func_4603(cvector var_82_cvector, cvector var_83_cvector)
{
	float var_86_float = sqrt(var_83_cvector | var_83_cvector);
	if(var_86_float < 0.000001)
		var_82_cvector = [0.0, 0.0, 0.0];
	var_82_cvector = var_83_cvector / var_86_float;
}


// @pe
void func_4860(object var_113_object)
{
	object var_117_object;
	func_5487(var_117_object);
	object var_114_object;
	var_117_object = var_114_object;
	func_5504(var_114_object, "pt_map_mishka", (float)2);
	object var_137_object;
	func_5487(var_137_object);
	var_113_object->ShowMap(var_137_object);
}


// @pe
void func_2558(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_304_object, object var_305_object)
{
	var_0_object = var_305_object;
	var_1_object = var_304_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_311_bool = false;
		bool var_312_bool;
		func_5079(var_1_object);
		if(var_312_bool != 0) {
			bool var_318_bool;
			func_5125(var_1_object);
			if(var_318_bool != 0)
				var_311_bool = true;
		}
		if(var_311_bool != 0) {
			func_2674(var_305_object, "Neutral");
			var_0_object->SetMessage(6829); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6830, 7531, 7530); //@t
			var_0_object->AddReply(6844, 7547, 7546); //@t
			var_0_object->AddReply(6848, 7547, 7552); //@t
			var_0_object->AddReply(6849, 7535, 7554); //@t
		} else {
					func_2674(var_305_object, "Neutral");
					var_0_object->SetMessage(6850); //@t
					var_0_object->ClearReplies(); //@t
					bool var_352_bool = false;
					bool var_353_bool;
					func_5091(var_1_object);
					if(var_353_bool != 0) {
						bool var_359_bool;
						func_5113(var_1_object);
						if(var_359_bool != 0)
							var_352_bool = true;
					}
					if(var_352_bool != 0)
						var_0_object->AddReply(6851, 7835, 7557); //@t
					var_0_object->AddReply(7536, -1, 8318); //@t
		}
	}
	for(;;) {
		bool var_342_bool;
		func_4674(var_342_bool);
		if(var_342_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4578(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2673;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2673:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa02";


