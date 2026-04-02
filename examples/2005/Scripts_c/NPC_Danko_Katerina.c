// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_52_cvector == 33614) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_5265();
			}
			if(var_52_cvector == 34517) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_5331();
			}
			if(var_51_bool == 33613) {
				bool var_69_bool;
				func_5468(var_1_object);
				if(!var_69_bool) { //@nz
					func_241(var_52_cvector, "Neutral");
					var_0_object->SetMessage(532198); //@t
					var_0_object->ClearReplies(); //@t
					bool var_91_bool;
					func_5480(var_1_object);
					if(var_91_bool != 0)
						var_0_object->AddReply(532199, 33615, 33614); //@t
					var_0_object->AddReply(532203, -1, 33618); //@t
					return 0;
				}
				bool var_103_bool = false;
				bool var_104_bool;
				func_5492(var_1_object);
				if(var_104_bool != 0) {
					bool var_110_bool;
					func_5745(var_1_object);
					if(var_110_bool != 0)
						var_103_bool = true;
				}
				if(var_103_bool != 0) {
					object var_126_object; object var_127_object;
					var_126_object = var_1_object;
					var_127_object = var_0_object;
					func_5271();
					object var_130_object; object var_131_object;
					var_130_object = var_1_object;
					var_131_object = var_0_object;
					func_5366();
					func_241(var_52_cvector, "Neutral");
					var_0_object->SetMessage(532204); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532205, 33621, 33620); //@t
					var_0_object->AddReply(532221, 33621, 33638); //@t
					return 0;
				}
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532253); //@t
				var_0_object->ClearReplies(); //@t
				bool var_144_bool = false;
				bool var_145_bool;
				func_5745(var_1_object);
				if(var_145_bool != 0) {
					bool var_147_bool;
					func_5565(var_1_object);
					if(var_147_bool != 0)
						var_144_bool = true;
				}
				if(var_144_bool != 0)
					var_0_object->AddReply(533013, 34518, 34517); //@t
				var_0_object->AddReply(532338, -1, 33767); //@t
				return 0;
			}
			if(var_51_bool == 34518) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(533014); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533015, 34520, 34519); //@t
				var_0_object->AddReply(533024, 34529, 34528); //@t
				var_0_object->AddReply(533030, 34529, 34536); //@t
				return 0;
			}
			if(var_51_bool == 34529) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(533025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533026, 34520, 34530); //@t
				var_0_object->AddReply(533027, 34533, 34532); //@t
				return 0;
			}
			if(var_51_bool == 34533) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(533028); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533029, 34520, 34534); //@t
				return 0;
			}
			if(var_51_bool == 34520) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(533016); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533017, -1, 34521); //@t
				var_0_object->AddReply(533031, -1, 34540); //@t
				return 0;
			}
			if(var_51_bool == 33621) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532207, 33623, 33622); //@t
				var_0_object->AddReply(532218, 33636, 33635); //@t
				var_0_object->AddReply(532217, 33623, 33633); //@t
				return 0;
			}
			if(var_51_bool == 33636) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532220, -1, 33637); //@t
				var_0_object->AddReply(533154, 33625, 34671); //@t
				return 0;
			}
			if(var_51_bool == 33623) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532209, 33625, 33624); //@t
				var_0_object->AddReply(532216, 33627, 33631); //@t
				return 0;
			}
			if(var_51_bool == 33625) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532211, 33627, 33626); //@t
				var_0_object->AddReply(532215, -1, 33630); //@t
				return 0;
			}
			if(var_51_bool == 33627) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532213, -1, 33628); //@t
				var_0_object->AddReply(532214, -1, 33629); //@t
				return 0;
			}
			if(var_51_bool == 33615) {
				func_241(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532201, -1, 33616); //@t
				var_0_object->AddReply(532202, -1, 33617); //@t
				return 0;
			}
			var_3_string = true;
			bool var_262_bool;
			func_5251(var_262_bool);
			if(var_262_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x108";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_52_cvector == 35677) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_5277();
				object var_116_object = var_1_object;
				func_5337(var_0_object);
			}
			if(var_52_cvector == 35678) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_5277();
				object var_146_object = var_1_object;
				func_5337(var_0_object);
			}
			if(var_51_bool == 35672) {
				bool var_150_bool;
				func_5504(var_1_object);
				if(var_150_bool != 0) {
					object var_158_object; object var_159_object;
					var_158_object = var_1_object;
					var_159_object = var_0_object;
					func_5307();
					object var_162_object; object var_163_object;
					var_162_object = var_1_object;
					var_163_object = var_0_object;
					func_5313();
					func_819(var_52_cvector, "Neutral");
					var_0_object->SetMessage(534079); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(534080, 38114, 35673); //@t
					var_0_object->AddReply(536380, 38114, 38153); //@t
					return 0;
				}
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(534086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534090, -1, 35683); //@t
				var_0_object->AddReply(536397, -1, 38176); //@t
				return 0;
			}
			if(var_51_bool == 38114) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536333, 38116, 38115); //@t
				var_0_object->AddReply(536381, 38116, 38155); //@t
				return 0;
			}
			if(var_51_bool == 38116) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536335, 38118, 38117); //@t
				var_0_object->AddReply(536382, 38161, 38156); //@t
				return 0;
			}
			if(var_51_bool == 38161) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536386); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536389, 38162, 38164); //@t
				return 0;
			}
			if(var_51_bool == 38118) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536337, 38162, 38119); //@t
				var_0_object->AddReply(536385, 35674, 38159); //@t
				return 0;
			}
			if(var_51_bool == 38162) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536388, 38165, 38163); //@t
				var_0_object->AddReply(536394, 35674, 38171); //@t
				return 0;
			}
			if(var_51_bool == 38165) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536390); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536391, 38167, 38166); //@t
				var_0_object->AddReply(536396, 35674, 38174); //@t
				return 0;
			}
			if(var_51_bool == 38167) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536393, 35674, 38168); //@t
				var_0_object->AddReply(536395, -1, 38173); //@t
				return 0;
			}
			if(var_51_bool == 35674) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(534081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534082, 35676, 35675); //@t
				return 0;
			}
			if(var_51_bool == 35676) {
				func_819(var_52_cvector, "Neutral");
				var_0_object->SetMessage(534083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534084, -1, 35677); //@t
				var_0_object->AddReply(534085, -1, 35678); //@t
				return 0;
			}
			var_3_string = true;
			bool var_277_bool;
			func_5251(var_277_bool);
			if(var_277_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x34a";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_51_bool == 36971) {
				func_1285(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_51_bool == 36973) {
				func_1285(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_51_bool == 36975) {
				func_1285(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_5251(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x51c";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_51_bool == 346) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_5253();
				func_1549(var_52_cvector, "Neutral");
				var_0_object->SetMessage(500295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500296, 350, 347); //@t
				var_0_object->AddReply(500297, 350, 348); //@t
				var_0_object->AddReply(500298, 350, 349); //@t
				return 0;
			}
			if(var_51_bool == 350) {
				func_1549(var_52_cvector, "Neutral");
				var_0_object->SetMessage(500299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500300, 355, 351); //@t
				var_0_object->AddReply(500301, 358, 352); //@t
				return 0;
			}
			if(var_51_bool == 358) {
				func_1549(var_52_cvector, "Neutral");
				var_0_object->SetMessage(500305); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500306, -1, 359); //@t
				var_0_object->AddReply(500307, -1, 360); //@t
				return 0;
			}
			if(var_51_bool == 355) {
				func_1549(var_52_cvector, "Neutral");
				var_0_object->SetMessage(500302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500304, -1, 357); //@t
				var_0_object->AddReply(500303, -1, 356); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_5251(var_113_bool);
			if(var_113_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x624";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_52_cvector == 3742) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_5372();
			}
			if(var_52_cvector == 3745) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_5372();
			}
			if(var_52_cvector == 3746) {
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_5372();
			}
			if(var_52_cvector == 3740) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_5372();
			}
			if(var_52_cvector == 13984) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_5378();
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_5384();
			}
			if(var_52_cvector == 13988) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_5378();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_5384();
			}
			if(var_52_cvector == 13990) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_5421();
			}
			if(var_51_bool == 13969) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512770); //@t
				var_0_object->ClearReplies(); //@t
				bool var_160_bool = false;
				bool var_161_bool;
				func_5625(var_1_object);
				if(var_161_bool != 0) {
					bool var_169_bool;
					func_5601(var_1_object);
					if(var_169_bool != 0)
						var_160_bool = true;
				}
				if(var_160_bool != 0)
					var_0_object->AddReply(512771, 3726, 13970); //@t
				bool var_178_bool = false;
				bool var_179_bool;
				func_5637(var_1_object);
				if(var_179_bool != 0) {
					bool var_185_bool;
					func_5613(var_1_object);
					if(var_185_bool != 0)
						var_178_bool = true;
				}
				if(var_178_bool != 0)
					var_0_object->AddReply(512772, 13972, 13971); //@t
				bool var_194_bool = true;
				bool var_195_bool = false;
				bool var_196_bool;
				func_5649(var_1_object);
				if(var_196_bool != 0) {
					bool var_202_bool;
					func_5673(var_1_object);
					if(var_202_bool != 0)
						var_195_bool = true;
				}
				if(var_195_bool != 1) {
					bool var_208_bool = false;
					bool var_209_bool;
					func_5661(var_1_object);
					if(var_209_bool != 0) {
						bool var_215_bool;
						func_5673(var_1_object);
						if(var_215_bool != 0)
							var_208_bool = true;
					}
					if(var_208_bool != 1)
						var_194_bool = false;
				}
				if(var_194_bool != 0)
					var_0_object->AddReply(512791, 13991, 13990); //@t
				var_0_object->AddReply(512790, -1, 13989); //@t
				return 0;
			}
			if(var_51_bool == 13991) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512792); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512793, 13993, 13992); //@t
				return 0;
			}
			if(var_51_bool == 13993) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512794); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512795, -1, 13994); //@t
				var_0_object->AddReply(512798, -1, 13997); //@t
				return 0;
			}
			if(var_51_bool == 13972) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512774, 13974, 13973); //@t
				return 0;
			}
			if(var_51_bool == 13974) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512776, 13976, 13975); //@t
				return 0;
			}
			if(var_51_bool == 13976) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512779, 13980, 13978); //@t
				var_0_object->AddReply(512778, 13979, 13977); //@t
				return 0;
			}
			if(var_51_bool == 13979) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513020, 13983, 14226); //@t
				return 0;
			}
			if(var_51_bool == 13980) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512782, 13983, 13981); //@t
				return 0;
			}
			if(var_51_bool == 13983) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512785, -1, 13984); //@t
				var_0_object->AddReply(512783, 13985, 13982); //@t
				return 0;
			}
			if(var_51_bool == 13985) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512786); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512787, 13987, 13986); //@t
				return 0;
			}
			if(var_51_bool == 13987) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(512788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512789, -1, 13988); //@t
				return 0;
			}
			if(var_51_bool == 3726) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(503459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503460, 3729, 3727); //@t
				var_0_object->AddReply(503461, 3730, 3728); //@t
				return 0;
			}
			if(var_51_bool == 3730) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(503463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503464, 3729, 3731); //@t
				var_0_object->AddReply(503465, 3734, 3733); //@t
				return 0;
			}
			if(var_51_bool == 3734) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(503466); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503467, 3729, 3735); //@t
				var_0_object->AddReply(503468, 3729, 3736); //@t
				return 0;
			}
			if(var_51_bool == 3729) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(503462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503469, 3741, 3739); //@t
				var_0_object->AddReply(503470, -1, 3740); //@t
				return 0;
			}
			if(var_51_bool == 3741) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(503471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503472, -1, 3742); //@t
				var_0_object->AddReply(503473, 3744, 3743); //@t
				return 0;
			}
			if(var_51_bool == 3744) {
				func_1901(var_52_cvector, "Neutral");
				var_0_object->SetMessage(503474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503475, -1, 3745); //@t
				var_0_object->AddReply(503476, -1, 3746); //@t
				return 0;
			}
			var_3_string = true;
			bool var_362_bool;
			func_5251(var_362_bool);
			if(var_362_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x784";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_51_bool == 10246) {
				bool var_57_bool;
				func_5709(var_1_object);
				if(var_57_bool != 0) {
					object var_65_object; object var_66_object;
					var_65_object = var_1_object;
					var_66_object = var_0_object;
					func_5450();
					func_2643(var_52_cvector, "Neutral");
					var_0_object->SetMessage(509330); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509331, 10248, 10247); //@t
					var_0_object->AddReply(509340, 10248, 10258); //@t
					var_0_object->AddReply(509341, 10248, 10260); //@t
					return 0;
				}
				bool var_91_bool;
				func_5721(var_1_object);
				if(var_91_bool != 0) {
					object var_97_object; object var_98_object;
					var_97_object = var_1_object;
					var_98_object = var_0_object;
					func_5456();
					func_2643(var_52_cvector, "Neutral");
					var_0_object->SetMessage(509323); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509324, 10239, 10238); //@t
					var_0_object->AddReply(509328, 10239, 10242); //@t
					var_0_object->AddReply(509329, 10239, 10244); //@t
					return 0;
				}
				func_2643(var_52_cvector, "Neutral");
				var_0_object->SetMessage(515792); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533895, -1, 35453); //@t
				var_0_object->AddReply(533894, -1, 35452); //@t
				return 0;
			}
			if(var_51_bool == 10239) {
				func_2643(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509326, -1, 10240); //@t
				var_0_object->AddReply(509327, -1, 10241); //@t
				return 0;
			}
			if(var_51_bool == 10248) {
				func_2643(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509333, 10250, 10249); //@t
				var_0_object->AddReply(509338, 10250, 10254); //@t
				var_0_object->AddReply(509339, 10250, 10256); //@t
				return 0;
			}
			if(var_51_bool == 10250) {
				func_2643(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509335, -1, 10251); //@t
				var_0_object->AddReply(509336, -1, 10252); //@t
				var_0_object->AddReply(509337, -1, 10253); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_5251(var_156_bool);
			if(var_156_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa6a";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_52_cvector == 10945) {
				object var_57_object = var_1_object;
				func_5433(var_0_object);
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_5259();
			}
			if(var_52_cvector == 10946) {
				object var_87_object = var_1_object;
				func_5433(var_0_object);
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_5259();
			}
			if(var_52_cvector == 34384) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_5319();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_5325();
			}
			if(var_51_bool == 10936) {
				bool var_103_bool = false;
				bool var_104_bool;
				func_5685(var_1_object);
				if(var_104_bool != 0) {
					bool var_112_bool;
					func_5516(var_1_object);
					if(var_112_bool != 0)
						var_103_bool = true;
				}
				if(var_103_bool != 0) {
					object var_131_object; object var_132_object;
					var_131_object = var_1_object;
					var_132_object = var_0_object;
					func_5427();
					func_3044(var_52_cvector, "Neutral");
					var_0_object->SetMessage(509926); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509927, 10938, 10937); //@t
					var_0_object->AddReply(509940, 10954, 10953); //@t
					return 0;
				}
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(532898); //@t
				var_0_object->ClearReplies(); //@t
				bool var_156_bool;
				func_5553(var_1_object);
				if(var_156_bool != 0)
					var_0_object->AddReply(532897, 11224, 34384); //@t
				var_0_object->AddReply(534175, -1, 35757); //@t
				var_0_object->AddReply(534555, -1, 36187); //@t
				return 0;
			}
			if(var_51_bool == 11224) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510178); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510186, 11233, 11232); //@t
				var_0_object->AddReply(510464, 11233, 11537); //@t
				return 0;
			}
			if(var_51_bool == 11233) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510179, 11226, 11225); //@t
				var_0_object->AddReply(510463, 11226, 11536); //@t
				return 0;
			}
			if(var_51_bool == 11226) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510465, 11541, 11540); //@t
				var_0_object->AddReply(510470, 11228, 11547); //@t
				return 0;
			}
			if(var_51_bool == 11541) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510466); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510181, 11228, 11227); //@t
				var_0_object->AddReply(510467, 11228, 11542); //@t
				var_0_object->AddReply(510468, 11228, 11543); //@t
				return 0;
			}
			if(var_51_bool == 11228) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510183, 11230, 11229); //@t
				return 0;
			}
			if(var_51_bool == 11230) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510185, 11234, 11231); //@t
				var_0_object->AddReply(510469, 11234, 11546); //@t
				return 0;
			}
			if(var_51_bool == 11234) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(510188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510189, -1, 11235); //@t
				var_0_object->AddReply(510471, -1, 11549); //@t
				var_0_object->AddReply(510472, -1, 11550); //@t
				return 0;
			}
			if(var_51_bool == 10954) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509942, 10956, 10955); //@t
				var_0_object->AddReply(509949, 10938, 10965); //@t
				return 0;
			}
			if(var_51_bool == 10956) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509944, 10958, 10957); //@t
				var_0_object->AddReply(509948, 10938, 10963); //@t
				return 0;
			}
			if(var_51_bool == 10958) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509946, 10938, 10959); //@t
				var_0_object->AddReply(509947, 10938, 10961); //@t
				return 0;
			}
			if(var_51_bool == 10938) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509929, 10940, 10939); //@t
				var_0_object->AddReply(509939, 10942, 10951); //@t
				return 0;
			}
			if(var_51_bool == 10940) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509931, 10942, 10941); //@t
				var_0_object->AddReply(509938, 10942, 10949); //@t
				return 0;
			}
			if(var_51_bool == 10942) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509933, 10944, 10943); //@t
				var_0_object->AddReply(509937, 10944, 10947); //@t
				return 0;
			}
			if(var_51_bool == 10944) {
				func_3044(var_52_cvector, "Neutral");
				var_0_object->SetMessage(509934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509935, -1, 10945); //@t
				var_0_object->AddReply(509936, -1, 10946); //@t
				return 0;
			}
			var_3_string = true;
			bool var_314_bool;
			func_5251(var_314_bool);
			if(var_314_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbfb";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_52_cvector == 12392) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_5444();
			}
			if(var_51_bool == 12391) {
				func_3672(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool;
				func_5697(var_1_object);
				if(var_76_bool != 0)
					var_0_object->AddReply(511204, 12393, 12392); //@t
				var_0_object->AddReply(515336, -1, 16559); //@t
				var_0_object->AddReply(536116, -1, 37872); //@t
				return 0;
			}
			if(var_51_bool == 12393) {
				func_3672(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536117, 37874, 37873); //@t
				return 0;
			}
			if(var_51_bool == 37874) {
				func_3672(var_52_cvector, "Neutral");
				var_0_object->SetMessage(536118); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511206, 12395, 12394); //@t
				var_0_object->AddReply(536120, 12395, 37876); //@t
				return 0;
			}
			if(var_51_bool == 12395) {
				func_3672(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511208, -1, 12396); //@t
				var_0_object->AddReply(511209, -1, 12397); //@t
				return 0;
			}
			var_3_string = true;
			bool var_120_bool;
			func_5251(var_120_bool);
			if(var_120_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe6f";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_52_cvector == 12849) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_5353();
			}
			if(var_52_cvector == 12850) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_5462();
			}
			if(var_52_cvector == 12858) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_5353();
			}
			if(var_52_cvector == 37111) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_5353();
			}
			if(var_52_cvector == 37112) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_5353();
			}
			if(var_52_cvector == 37113) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_5353();
			}
			if(var_51_bool == 12840) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511641); //@t
				var_0_object->ClearReplies(); //@t
				bool var_104_bool;
				func_5577(var_1_object);
				if(var_104_bool != 0)
					var_0_object->AddReply(511642, 12842, 12841); //@t
				bool var_113_bool = true;
				bool var_114_bool = false;
				bool var_115_bool;
				func_5577(var_1_object);
				if(var_115_bool != 0) {
					bool var_117_bool;
					func_5733(var_1_object);
					if(var_117_bool != 0)
						var_114_bool = true;
				}
				if(var_114_bool != 1) {
					bool var_123_bool = false;
					bool var_124_bool;
					func_5589(var_1_object);
					if(var_124_bool != 0) {
						bool var_130_bool;
						func_5733(var_1_object);
						if(var_130_bool != 0)
							var_123_bool = true;
					}
					if(var_123_bool != 1)
						var_113_bool = false;
				}
				if(var_113_bool != 0)
					var_0_object->AddReply(511651, 12851, 12850); //@t
				var_0_object->AddReply(511660, -1, 12859); //@t
				return 0;
			}
			if(var_51_bool == 12851) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511653, 12853, 12852); //@t
				return 0;
			}
			if(var_51_bool == 12853) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511655, 12855, 12854); //@t
				return 0;
			}
			if(var_51_bool == 12855) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511657, 12857, 12856); //@t
				var_0_object->AddReply(535425, 37107, 37105); //@t
				return 0;
			}
			if(var_51_bool == 12857) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535426, 37107, 37106); //@t
				var_0_object->AddReply(535432, -1, 37113); //@t
				return 0;
			}
			if(var_51_bool == 37107) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511659, -1, 12858); //@t
				var_0_object->AddReply(535428, 37110, 37109); //@t
				return 0;
			}
			if(var_51_bool == 37110) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535430, -1, 37111); //@t
				var_0_object->AddReply(535431, -1, 37112); //@t
				return 0;
			}
			if(var_51_bool == 12842) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511644, 12844, 12843); //@t
				return 0;
			}
			if(var_51_bool == 12844) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511645); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511646, 12846, 12845); //@t
				return 0;
			}
			if(var_51_bool == 12846) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511647); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511648, 12848, 12847); //@t
				return 0;
			}
			if(var_51_bool == 12848) {
				func_3999(var_52_cvector, "Neutral");
				var_0_object->SetMessage(511649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511650, -1, 12849); //@t
				return 0;
			}
			var_3_string = true;
			bool var_220_bool;
			func_5251(var_220_bool);
			if(var_220_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfb6";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_5104();
			if(var_51_int == 42557) {
				func_4492(var_52_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_5251(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x11a3";
	
	}

}


maintask task_21
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		var_51_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_4563(var_50_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, int var_51_int)
	{
		if(var_51_int == 10) {
			func_4634();
			bool var_55_bool = false;
			bool var_56_bool;
			func_4848(var_56_bool);
			if(var_56_bool != 0) {
				bool var_59_bool;
				func_4603(var_59_bool);
				if(var_59_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool != 0) {
				bool var_76_bool;
				func_4583(var_76_bool);
				if(var_76_bool != 0) {
					bool var_95_bool; object var_96_object;
					object var_97_object;
					func_5111(var_97_object);
					var_97_object = var_96_object;
					func_4996(var_95_bool, var_96_object);
				}
			} else {
				func_4598(var_51_int);
				func_4625();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		func_4816();
		func_4634();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
		{
		@StopGroup0();
		func_4634();
		func_5076("Neutral");
		func_4625();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, bool var_51_bool)
	{
		if(var_51_bool != 0)
			func_4625();
		else
			func_5076("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, object var_51_object)
	{
		bool var_53_bool;
		@IsOverrideActive(var_53_bool);
		if(!var_53_bool) { //@nz
			disable OnUse;
			func_4816();
			bool var_55_bool; object var_56_object;
			var_51_object = var_56_object;
			func_4839(var_55_bool, var_56_object);
			enable OnUse;
			object var_69_object;
			var_51_object = var_69_object;
			func_5926(var_69_object);
			func_5076("Neutral");
			func_4634();
			func_4625();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_56_bool;
	func_4848(var_56_bool);
	if(!var_56_bool) goto Label_0; //@nz
}


void func_4353(object var_0_object, int var_1035_int, object var_1036_object)
{
	var_0_object = var_1036_object;
	bool var_1046_bool; object var_1047_object;
	object var_1048_object;
	func_5111(var_1048_object);
	var_1048_object = var_1047_object;
	func_4938(var_1046_bool, var_1047_object);
	bool var_1049_bool; object var_1050_object;
	var_1036_object = var_1050_object;
	func_4853(var_1049_bool, var_1050_object, 70.0);
	if(!var_1049_bool) { //@nz
		var_1035_int = -2;
		return 8;
	}
	object var_1042_object;
	@CreateDialog(var_1042_object);
	int var_1053_int;
	func_5245(var_1053_int);
	var_1042_object->SetNPCName(var_1053_int);
	int var_1054_int;
	func_5243(var_1054_int);
	var_1042_object->SetNPCDescription(var_1054_int);
	string var_1055_string;
	func_5247(var_1055_string);
	var_1042_object->SetPhoto(var_1055_string);
	string var_1056_string;
	func_5249(var_1056_string);
	var_1042_object->SetPhoto2(var_1056_string);
	int var_1057_int;
	func_5909(var_1057_int);
	var_1042_object->SetPlayerName(var_1057_int);
	bool var_1043_bool;
	@IsOverrideActive(var_1043_bool);
	if(var_1043_bool != 0) {
		var_1035_int = -2;
		return 8;
	}
	@DoDialog(var_1042_object);
	object var_1059_object; object var_1060_object;
	var_1036_object = var_1059_object;
	var_1042_object = var_1060_object;
	TaskCall(20);
	func_4434(var_1061_object, var_1062_object, var_1063_string, var_1064_bool, var_1059_object, var_1060_object);
	TaskReturn();
	bool var_1045_bool;
	var_1042_object->IsDialogEnd(var_1045_bool);
	
	for(;;) {
		var_1089_bool = !var_1045_bool; //@nz
		if(var_1089_bool == 0) goto Label_4423;
		@sync();
		var_1042_object->IsDialogEnd(var_1045_bool);
	}
	
Label_4423:
	object var_1090_object;
	var_1036_object = var_1090_object;
	func_4921();
	@StopDialog(var_1042_object);
	var_1042_object->GetReturnValue(-1);
	int var_1044_int = var_1035_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5378(void)
{
	@SetVariable("ood6Katerina2", 1);
}


// @pe
void func_5637(bool var_840_bool)
{
	int var_842_int;
	func_5127(var_842_int, "ood6Katerina2");
	if(var_842_int == 0) {
		var_840_bool = true;
		return 0;
	}
	var_840_bool = false;
}


// @pe
void func_1285(object var_2_object, string var_1007_string)
{
	bool var_1008_bool;
	func_5251(var_1008_bool);
	if(!var_1008_bool) //@nz
		return 0;
	if(var_1007_string == var_2_object)
		return 0;
	string var_1011_string; bool var_1012_bool;
	var_1007_string = var_1011_string;
	if(var_1007_string == "")
		var_1012_bool = false;
	else
		var_1012_bool = true;
	func_5083(var_1011_string, var_1012_bool);
	var_2_object = var_1007_string;
	
}


void func_5127(int var_329_int, string var_330_string)
{
	int var_332_int;
	@GetVariable(var_330_string, var_332_int);
	var_332_int = var_329_int;
}


void func_5384(void)
{
	@SetVariable("d6q01", 2);
	object var_85_object;
	func_5859(var_85_object);
	object var_82_object;
	var_85_object = var_82_object;
	float var_96_float;
	func_5199(var_96_float);
	var_82_object->AddMark("d6q01KaterinaGotoLaska", "pt_map_laska", 1, 515398, var_96_float);
	float var_103_float;
	func_5199(var_103_float);
	var_82_object->AddMark("d6q01KaterinagotoLaskaSelf", "pt_map_katerina", 1, 515399, var_103_float);
	func_5805();
	bool var_127_bool;
	func_5187(var_127_bool, "quest_d6_01", "saburov_klara_remove");
}
EMIT "Stack[-1] = 0";


void func_5132(object var_108_object, string var_109_string)
{
	object var_112_object;
	@GetMainOutdoorScene(var_112_object);
	object var_113_object;
	@AddBlankActor(var_113_object, var_112_object, var_109_string, (var_109_string + ".bin"));
	var_113_object = var_108_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1549(object var_2_object, string var_249_string)
{
	bool var_250_bool;
	func_5251(var_250_bool);
	if(!var_250_bool) //@nz
		return 0;
	if(var_249_string == var_2_object)
		return 0;
	string var_253_string; bool var_254_bool;
	var_249_string = var_253_string;
	if(var_249_string == "")
		var_254_bool = false;
	else
		var_254_bool = true;
	func_5083(var_253_string, var_254_bool);
	var_2_object = var_249_string;
	
}


void func_13(object var_0_object, int var_296_int, object var_297_object)
{
	var_0_object = var_297_object;
	bool var_307_bool; object var_308_object;
	object var_309_object;
	func_5111(var_309_object);
	var_309_object = var_308_object;
	func_4938(var_307_bool, var_308_object);
	bool var_310_bool; object var_311_object;
	var_297_object = var_311_object;
	func_4853(var_310_bool, var_311_object, 70.0);
	if(!var_310_bool) { //@nz
		var_296_int = -2;
		return 8;
	}
	object var_303_object;
	@CreateDialog(var_303_object);
	int var_314_int;
	func_5245(var_314_int);
	var_303_object->SetNPCName(var_314_int);
	int var_315_int;
	func_5243(var_315_int);
	var_303_object->SetNPCDescription(var_315_int);
	string var_316_string;
	func_5247(var_316_string);
	var_303_object->SetPhoto(var_316_string);
	string var_317_string;
	func_5249(var_317_string);
	var_303_object->SetPhoto2(var_317_string);
	int var_318_int;
	func_5909(var_318_int);
	var_303_object->SetPlayerName(var_318_int);
	bool var_304_bool;
	@IsOverrideActive(var_304_bool);
	if(var_304_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	@DoDialog(var_303_object);
	object var_320_object; object var_321_object;
	var_297_object = var_320_object;
	var_303_object = var_321_object;
	TaskCall(2);
	func_94(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object);
	TaskReturn();
	bool var_306_bool;
	var_303_object->IsDialogEnd(var_306_bool);
	
	for(;;) {
		var_421_bool = !var_306_bool; //@nz
		if(var_421_bool == 0) goto Label_83;
		@sync();
		var_303_object->IsDialogEnd(var_306_bool);
	}
	
Label_83:
	object var_422_object;
	var_297_object = var_422_object;
	func_4921();
	@StopDialog(var_303_object);
	var_303_object->GetReturnValue(-1);
	int var_305_int = var_296_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5649(bool var_857_bool)
{
	int var_859_int;
	func_5127(var_859_int, "d6q01");
	if(var_859_int == 4)
		var_857_bool = true;
	var_857_bool = false;
}


void func_4625(void)
{
	float var_66_float;
	@rand(var_66_float, 8, 16);
	@SetTimer(10, var_66_float);
}


// @pe
void func_3604(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_654_object, object var_655_object)
{
	var_0_object = var_655_object;
	var_3_string = false;
	if(1 != 0) {
		func_3672(var_655_object, "Neutral");
		var_0_object->SetMessage(511203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_670_bool;
		func_5697(var_654_object);
		if(var_670_bool != 0)
			var_0_object->AddReply(511204, 12393, 12392); //@t
		var_0_object->AddReply(515336, -1, 16559); //@t
		var_0_object->AddReply(536116, -1, 37872); //@t
		goto Label_3642;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe18";
	}
Label_3642:
	bool var_685_bool;
	func_5251(var_685_bool);
	if(var_685_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5076(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3671;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3671:
		return 0;

	}
	
}


void func_5909(int var_229_int)
{
	int var_231_int;
	@GetVariable("branch", var_231_int);
	if(var_231_int == 0) {
		var_229_int = 1;
		return 2;
	EMIT "GOTO 0x1724";
	}
	if(var_231_int == 1) {
		var_229_int = 2;
		return 2;
	}
	var_229_int = 3;
}


void func_5143(int var_76_int, int var_77_int)
{
	object var_79_object;
	@CreateIntVector(var_79_object);
	var_79_object->add(var_76_int);
	var_79_object->add(var_77_int);
	@SendWorldWndMessage(3, var_79_object);
}
EMIT "Stack[-1] = 0";


void func_4634(void)
{
	@KillTimer(10);
}


// @pe
void func_5661(bool var_870_bool)
{
	int var_872_int;
	func_5127(var_872_int, "d6q01");
	if(var_872_int == 3)
		var_870_bool = true;
	var_870_bool = false;
}


void func_5155(object var_65_object, object var_66_object, int var_67_int)
{
	int var_71_int;
	var_66_object->GetItemID(var_71_int);
	int var_72_int;
	@GetInvItemProperty(var_72_int, var_71_int, "Category");
	bool var_73_bool;
	var_65_object->AddItem(var_73_bool, var_66_object, var_72_int, var_67_int);
	if(!var_73_bool) { //@nz
		var_65_object->DropItems(var_66_object, var_67_int);
	} else {
		int var_76_int; int var_77_int;
		var_71_int = var_76_int;
		var_67_int = var_77_int;
		func_5143(var_76_int, var_77_int);
	}
	
}


// @pe
void func_5926(object var_69_object)
{
	var_70_bool = GlobalVars[1];
	if(!var_70_bool) { //@nz
		int var_72_int; object var_73_object;
		var_69_object = var_73_object;
		TaskCall(7);
		func_1400(var_74_object, var_72_int, var_73_object);
		TaskReturn();
		var_292_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_293_bool;
	func_5213(var_293_bool, 1);
	if(var_293_bool != 0) {
		int var_296_int; object var_297_object;
		var_69_object = var_297_object;
		TaskCall(1);
		func_13(var_298_object, var_296_int, var_297_object);
		TaskReturn();
		return 0;
	}
	bool var_423_bool;
	func_5213(var_423_bool, 2);
	if(var_423_bool != 0) {
		int var_425_int; object var_426_object;
		var_69_object = var_426_object;
		TaskCall(11);
		func_2434(var_427_object, var_425_int, var_426_object);
		TaskReturn();
		return 0;
	}
	bool var_523_bool;
	func_5213(var_523_bool, 3);
	if(var_523_bool != 0) {
		int var_525_int; object var_526_object;
		var_69_object = var_526_object;
		TaskCall(13);
		func_2856(var_527_object, var_525_int, var_526_object);
		TaskReturn();
		return 0;
	}
	bool var_628_bool;
	func_5213(var_628_bool, 4);
	if(var_628_bool != 0) {
		int var_630_int; object var_631_object;
		var_69_object = var_631_object;
		TaskCall(15);
		func_3523(var_632_object, var_630_int, var_631_object);
		TaskReturn();
		return 0;
	}
	bool var_695_bool;
	func_5213(var_695_bool, 5);
	if(var_695_bool != 0) {
		int var_697_int; object var_698_object;
		var_69_object = var_698_object;
		TaskCall(17);
		func_3818(var_699_object, var_697_int, var_698_object);
		TaskReturn();
		return 0;
	}
	bool var_781_bool;
	func_5213(var_781_bool, 6);
	if(var_781_bool != 0) {
		int var_783_int; object var_784_object;
		var_69_object = var_784_object;
		TaskCall(9);
		func_1692(var_785_object, var_783_int, var_784_object);
		TaskReturn();
		return 0;
	}
	bool var_894_bool;
	func_5213(var_894_bool, 10);
	if(var_894_bool != 0) {
		int var_896_int; object var_897_object;
		var_69_object = var_897_object;
		TaskCall(3);
		func_645(var_898_object, var_896_int, var_897_object);
		TaskReturn();
		return 0;
	}
	bool var_974_bool;
	func_5213(var_974_bool, 12);
	if(var_974_bool != 0) {
		int var_976_int; object var_977_object;
		var_69_object = var_977_object;
		TaskCall(5);
		func_1141(var_978_object, var_976_int, var_977_object);
		TaskReturn();
		return 0;
	}
	int var_1035_int; object var_1036_object;
	var_69_object = var_1036_object;
	TaskCall(19);
	func_4353(var_1037_object, var_1035_int, var_1036_object);
	TaskReturn();
}


void func_2856(object var_0_object, int var_525_int, object var_526_object)
{
	var_0_object = var_526_object;
	bool var_536_bool; object var_537_object;
	object var_538_object;
	func_5111(var_538_object);
	var_538_object = var_537_object;
	func_4938(var_536_bool, var_537_object);
	bool var_539_bool; object var_540_object;
	var_526_object = var_540_object;
	func_4853(var_539_bool, var_540_object, 70.0);
	if(!var_539_bool) { //@nz
		var_525_int = -2;
		return 8;
	}
	object var_532_object;
	@CreateDialog(var_532_object);
	int var_543_int;
	func_5245(var_543_int);
	var_532_object->SetNPCName(var_543_int);
	int var_544_int;
	func_5243(var_544_int);
	var_532_object->SetNPCDescription(var_544_int);
	string var_545_string;
	func_5247(var_545_string);
	var_532_object->SetPhoto(var_545_string);
	string var_546_string;
	func_5249(var_546_string);
	var_532_object->SetPhoto2(var_546_string);
	int var_547_int;
	func_5909(var_547_int);
	var_532_object->SetPlayerName(var_547_int);
	bool var_533_bool;
	@IsOverrideActive(var_533_bool);
	if(var_533_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	@DoDialog(var_532_object);
	object var_549_object; object var_550_object;
	var_526_object = var_549_object;
	var_532_object = var_550_object;
	TaskCall(14);
	func_2937(var_551_object, var_552_object, var_553_string, var_554_bool, var_549_object, var_550_object);
	TaskReturn();
	bool var_535_bool;
	var_532_object->IsDialogEnd(var_535_bool);
	
	for(;;) {
		var_626_bool = !var_535_bool; //@nz
		if(var_626_bool == 0) goto Label_2926;
		@sync();
		var_532_object->IsDialogEnd(var_535_bool);
	}
	
Label_2926:
	object var_627_object;
	var_526_object = var_627_object;
	func_4921();
	@StopDialog(var_532_object);
	var_532_object->GetReturnValue(-1);
	int var_534_int = var_525_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5673(bool var_863_bool)
{
	int var_865_int;
	func_5127(var_865_int, "ood6Katerina3");
	if(var_865_int == 0) {
		var_863_bool = true;
		return 0;
	}
	var_863_bool = false;
}


// @pe
void func_5421(void)
{
	@SetVariable("ood6Katerina3", 1);
}


// @pe
void func_819(object var_2_object, string var_941_string)
{
	bool var_942_bool;
	func_5251(var_942_bool);
	if(!var_942_bool) //@nz
		return 0;
	if(var_941_string == var_2_object)
		return 0;
	string var_945_string; bool var_946_bool;
	var_941_string = var_945_string;
	if(var_941_string == "")
		var_946_bool = false;
	else
		var_946_bool = true;
	func_5083(var_945_string, var_946_bool);
	var_2_object = var_941_string;
	
}


// @pe
void func_5427(void)
{
	@SetVariable("ood3Katerina1", 1);
}


// @pe
void func_5685(bool var_557_bool)
{
	int var_559_int;
	func_5127(var_559_int, "ood3Katerina1");
	if(var_559_int == 0) {
		var_557_bool = true;
		return 0;
	}
	var_557_bool = false;
}


void func_5174(object var_60_object, string var_61_string, int var_62_int)
{
	object var_64_object;
	@CreateInvItem(var_64_object);
	var_64_object->SetItemName(var_61_string);
	object var_65_object; object var_66_object; int var_67_int;
	var_60_object = var_65_object;
	var_64_object = var_66_object;
	var_62_int = var_67_int;
	func_5155(var_65_object, var_66_object, var_67_int);
}
EMIT "Stack[-1] = 0";


void func_4921(void)
{
	bool var_287_bool;
	@CameraSwitchToNormal();
	bool var_288_bool;
	func_5251(var_288_bool);
	if(var_288_bool != 0) {
	} else {
		@HasAnimationTrack(var_287_bool, "head");
		if(var_287_bool == 0) goto Label_4937;
		@UnlookAsync("head");
	}
Label_4937:
	
}


// @pe
void func_5433(object var_57_object)
{
	@Trace("drapery is given");
	object var_60_object;
	var_57_object = var_60_object;
	func_5174(var_60_object, "drapery", 1);
}


// @pe
void func_3899(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_721_object, object var_722_object)
{
	var_0_object = var_722_object;
	var_1_object = var_721_object;
	var_3_string = false;
	if(1 != 0) {
		func_3999(var_722_object, "Neutral");
		var_0_object->SetMessage(511641); //@t
		var_0_object->ClearReplies(); //@t
		bool var_737_bool;
		func_5577(var_1_object);
		if(var_737_bool != 0)
			var_0_object->AddReply(511642, 12842, 12841); //@t
		bool var_746_bool = true;
		bool var_747_bool = false;
		bool var_748_bool;
		func_5577(var_1_object);
		if(var_748_bool != 0) {
			bool var_750_bool;
			func_5733(var_1_object);
			if(var_750_bool != 0)
				var_747_bool = true;
		}
		if(var_747_bool != 1) {
			bool var_756_bool = false;
			bool var_757_bool;
			func_5589(var_1_object);
			if(var_757_bool != 0) {
				bool var_763_bool;
				func_5733(var_1_object);
				if(var_763_bool != 0)
					var_756_bool = true;
			}
			if(var_756_bool != 1)
				var_746_bool = false;
		}
		if(var_746_bool != 0)
			var_0_object->AddReply(511651, 12851, 12850); //@t
		var_0_object->AddReply(511660, -1, 12859); //@t
		goto Label_3969;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf3f";
	}
Label_3969:
	bool var_771_bool;
	func_5251(var_771_bool);
	if(var_771_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5076(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3998;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3998:
		return 0;

	}
	
}


// @pe
void func_5697(bool var_670_bool)
{
	int var_672_int;
	func_5127(var_672_int, "ood4Katerina1");
	if(var_672_int == 0) {
		var_670_bool = true;
		return 0;
	}
	var_670_bool = false;
}


void func_5187(bool var_127_bool, string var_128_string, string var_129_string)
{
	object var_131_object;
	@FindActor(var_131_object, var_128_string);
	if(var_131_object == null)
		var_127_bool = false;
	@Trigger(var_131_object, var_129_string);
	var_127_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5444(void)
{
	@SetVariable("ood4Katerina1", 1);
}


void func_4938(bool var_83_bool, object var_84_object)
{
	int var_90_int; int var_91_int;
	@GetVariable("voice_common", var_90_int);
	if(var_90_int != 0) {
		bool var_94_bool; object var_95_object;
		var_84_object = var_95_object;
		func_4996(var_94_bool, var_95_object);
		if(!var_94_bool) { //@nz
			bool var_125_bool; object var_126_object;
			var_84_object = var_126_object;
			func_5033(var_125_bool, var_126_object);
			if(!var_125_bool) { //@nz
				var_83_bool = false;
				return 4;
			}
		}
		@irand(var_91_int, 2);
		if(var_91_int != 0)
			@SetVariable("voice_common", ((var_90_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_170_bool; object var_171_object;
		var_84_object = var_171_object;
		func_5033(var_170_bool, var_171_object);
		if(!var_170_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_84_object = var_174_object;
			func_4996(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_83_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4994;
	
Label_4994:
	var_83_bool = true;
	
}


// @pe
void func_5450(void)
{
	@SetVariable("ood2Katerina1", 1);
}


// @pe
void func_5709(bool var_456_bool)
{
	int var_458_int;
	func_5127(var_458_int, "ood2Katerina1");
	if(var_458_int == 0) {
		var_456_bool = true;
		return 0;
	}
	var_456_bool = false;
}


void func_5199(float var_96_float)
{
	float var_98_float;
	@GetGameTime(var_98_float);
	var_98_float = var_96_float;
}


// @pe
void func_5456(void)
{
	@SetVariable("ood2Katerina2", 1);
}


// @pe
void func_4434(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1059_object, object var_1060_object)
{
	var_0_object = var_1060_object;
	var_1_object = var_1059_object;
	var_3_string = false;
	if(1 != 0) {
		func_4492(var_1060_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_4462;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1156";
	}
Label_4462:
	bool var_1081_bool;
	func_5251(var_1081_bool);
	if(var_1081_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5076(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4491;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4491:
		return 0;

	}
	
}


// @pe
void func_2643(object var_2_object, string var_466_string)
{
	bool var_467_bool;
	func_5251(var_467_bool);
	if(!var_467_bool) //@nz
		return 0;
	if(var_466_string == var_2_object)
		return 0;
	string var_470_string; bool var_471_bool;
	var_466_string = var_470_string;
	if(var_466_string == "")
		var_471_bool = false;
	else
		var_471_bool = true;
	func_5083(var_470_string, var_471_bool);
	var_2_object = var_466_string;
	
}


void func_5204(int var_138_int)
{
	float var_140_float;
	@GetGameTime(var_140_float);
	var_138_int = 1 + (var_140_float / 24);
}


// @pe
void func_5462(void)
{
	@SetVariable("ood5Katerina1", 1);
}


// @pe
void func_3672(object var_2_object, string var_661_string)
{
	bool var_662_bool;
	func_5251(var_662_bool);
	if(!var_662_bool) //@nz
		return 0;
	if(var_661_string == var_2_object)
		return 0;
	string var_665_string; bool var_666_bool;
	var_661_string = var_665_string;
	if(var_661_string == "")
		var_666_bool = false;
	else
		var_666_bool = true;
	func_5083(var_665_string, var_666_bool);
	var_2_object = var_661_string;
	
}


// @pe
void func_5721(bool var_492_bool)
{
	int var_494_int;
	func_5127(var_494_int, "ood2Katerina2");
	if(var_494_int == 0) {
		var_492_bool = true;
		return 0;
	}
	var_492_bool = false;
}


// @pe
void func_5468(bool var_327_bool)
{
	int var_329_int;
	func_5127(var_329_int, "d1q01FirstGeorgVisit");
	if(var_329_int == 1)
		var_327_bool = true;
	var_327_bool = false;
}


// @pe
void func_5213(bool var_293_bool, int var_294_int)
{
	int var_295_int;
	func_5204(var_295_int);
	var_293_bool = var_295_int == var_294_int;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_320_object, object var_321_object)
{
	var_0_object = var_321_object;
	var_1_object = var_320_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_327_bool;
		func_5468(var_1_object);
		if(!var_327_bool) { //@nz
			func_241(var_321_object, "Neutral");
			var_0_object->SetMessage(532198); //@t
			var_0_object->ClearReplies(); //@t
			bool var_345_bool;
			func_5480(var_1_object);
			if(var_345_bool != 0)
				var_0_object->AddReply(532199, 33615, 33614); //@t
			var_0_object->AddReply(532203, -1, 33618); //@t
		} else {
					bool var_365_bool = false;
					bool var_366_bool;
					func_5492(var_1_object);
					if(var_366_bool != 0) {
						bool var_372_bool;
						func_5745(var_1_object);
						if(var_372_bool != 0)
							var_365_bool = true;
					}
					if(var_365_bool == 0) goto Label_175;
					object var_388_object; object var_389_object;
					var_388_object = var_1_object;
					var_389_object = var_0_object;
					func_5271();
					object var_392_object; object var_393_object;
					var_392_object = var_1_object;
					var_393_object = var_0_object;
					func_5366();
					func_241(var_321_object, "Neutral");
					var_0_object->SetMessage(532204); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532205, 33621, 33620); //@t
					var_0_object->AddReply(532221, 33621, 33638); //@t
		}
	}
Label_211:
	for(;;) {
		bool var_357_bool;
		func_5251(var_357_bool);
		if(var_357_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5076(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_240;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_240:
			return 0;

		}

	}
	
Label_175:
	func_241(var_321_object, "Neutral");
	var_0_object->SetMessage(532253); //@t
	var_0_object->ClearReplies(); //@t
	bool var_406_bool = false;
	bool var_407_bool;
	func_5745(var_1_object);
	if(var_407_bool != 0) {
		bool var_409_bool;
		func_5565(var_1_object);
		if(var_409_bool != 0)
			var_406_bool = true;
	}
	if(var_406_bool != 0)
		var_0_object->AddReply(533013, 34518, 34517); //@t
	var_0_object->AddReply(532338, -1, 33767); //@t
	goto Label_211;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_5219(string var_90_string, int var_91_int)
{
	string var_93_string = "idle";
	if(var_91_int != 0)
		var_93_string += var_91_int;
	var_93_string = var_90_string;
}


// @pe
void func_5733(bool var_750_bool)
{
	int var_752_int;
	func_5127(var_752_int, "ood5Katerina1");
	if(var_752_int == 0) {
		var_750_bool = true;
		return 0;
	}
	var_750_bool = false;
}


// @pe
void func_5480(bool var_345_bool)
{
	int var_347_int;
	func_5127(var_347_int, "ood1Katerina1");
	if(var_347_int == 0) {
		var_345_bool = true;
		return 0;
	}
	var_345_bool = false;
}


void func_5226(int var_84_int)
{
	int var_87_int; bool var_88_bool;
	var_87_int = 0;
	
	for(;;) {
		string var_90_string; int var_91_int;
		var_87_int = var_91_int;
		func_5219(var_90_string, var_91_int);
		@HasAnimation(var_88_bool, "all", var_90_string);
		if(!var_88_bool) //@nz
			break;
		var_87_int += 1;
	}
	var_87_int = var_84_int;
}


// @pe
void func_1901(object var_2_object, string var_814_string)
{
	bool var_815_bool;
	func_5251(var_815_bool);
	if(!var_815_bool) //@nz
		return 0;
	if(var_814_string == var_2_object)
		return 0;
	string var_818_string; bool var_819_bool;
	var_814_string = var_818_string;
	if(var_814_string == "")
		var_819_bool = false;
	else
		var_819_bool = true;
	func_5083(var_818_string, var_819_bool);
	var_2_object = var_814_string;
	
}


// @pe
void func_5745(bool var_372_bool)
{
	bool var_374_bool = true;
	bool var_375_bool = true;
	int var_376_int;
	func_5127(var_376_int, "d1q01");
	var_379_bool = var_376_int != 0;
	if(var_379_bool != 1) {
		int var_380_int;
		func_5127(var_380_int, "d1q01");
		var_383_bool = var_380_int != 1000;
		if(var_383_bool != 1)
			var_375_bool = false;
	}
	if(var_375_bool != 1) {
		int var_384_int;
		func_5127(var_384_int, "d1q01");
		var_387_bool = var_384_int != -1;
		if(var_387_bool != 1)
			var_374_bool = false;
	}
	if(var_374_bool != 0) {
		var_372_bool = true;
		return 0;
	}
	var_372_bool = false;
}


void func_5111(object var_85_object)
{
	object var_87_object;
	@self(var_87_object);
	var_87_object = var_85_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5492(bool var_366_bool)
{
	int var_368_int;
	func_5127(var_368_int, "ood1Katerina2");
	if(var_368_int == 0) {
		var_366_bool = true;
		return 0;
	}
	var_366_bool = false;
}


void func_1141(object var_0_object, int var_976_int, object var_977_object)
{
	var_0_object = var_977_object;
	bool var_987_bool; object var_988_object;
	object var_989_object;
	func_5111(var_989_object);
	var_989_object = var_988_object;
	func_4938(var_987_bool, var_988_object);
	bool var_990_bool; object var_991_object;
	var_977_object = var_991_object;
	func_4853(var_990_bool, var_991_object, 70.0);
	if(!var_990_bool) { //@nz
		var_976_int = -2;
		return 8;
	}
	object var_983_object;
	@CreateDialog(var_983_object);
	int var_994_int;
	func_5245(var_994_int);
	var_983_object->SetNPCName(var_994_int);
	int var_995_int;
	func_5243(var_995_int);
	var_983_object->SetNPCDescription(var_995_int);
	string var_996_string;
	func_5247(var_996_string);
	var_983_object->SetPhoto(var_996_string);
	string var_997_string;
	func_5249(var_997_string);
	var_983_object->SetPhoto2(var_997_string);
	int var_998_int;
	func_5909(var_998_int);
	var_983_object->SetPlayerName(var_998_int);
	bool var_984_bool;
	@IsOverrideActive(var_984_bool);
	if(var_984_bool != 0) {
		var_976_int = -2;
		return 8;
	}
	@DoDialog(var_983_object);
	object var_1000_object; object var_1001_object;
	var_977_object = var_1000_object;
	var_983_object = var_1001_object;
	TaskCall(6);
	func_1222(var_1002_object, var_1003_object, var_1004_string, var_1005_bool, var_1000_object, var_1001_object);
	TaskReturn();
	bool var_986_bool;
	var_983_object->IsDialogEnd(var_986_bool);
	
	for(;;) {
		var_1033_bool = !var_986_bool; //@nz
		if(var_1033_bool == 0) goto Label_1211;
		@sync();
		var_983_object->IsDialogEnd(var_986_bool);
	}
	
Label_1211:
	object var_1034_object;
	var_977_object = var_1034_object;
	func_4921();
	@StopDialog(var_983_object);
	var_983_object->GetReturnValue(-1);
	int var_985_int = var_976_int;
}
EMIT "Stack[-4] = 0";


void func_1400(object var_0_object, int var_72_int, object var_73_object)
{
	var_0_object = var_73_object;
	bool var_83_bool; object var_84_object;
	object var_85_object;
	func_5111(var_85_object);
	var_85_object = var_84_object;
	func_4938(var_83_bool, var_84_object);
	bool var_178_bool; object var_179_object;
	var_73_object = var_179_object;
	func_4853(var_178_bool, var_179_object, 70.0);
	if(!var_178_bool) { //@nz
		var_72_int = -2;
		return 8;
	}
	object var_79_object;
	@CreateDialog(var_79_object);
	int var_225_int;
	func_5245(var_225_int);
	var_79_object->SetNPCName(var_225_int);
	int var_226_int;
	func_5243(var_226_int);
	var_79_object->SetNPCDescription(var_226_int);
	string var_227_string;
	func_5247(var_227_string);
	var_79_object->SetPhoto(var_227_string);
	string var_228_string;
	func_5249(var_228_string);
	var_79_object->SetPhoto2(var_228_string);
	int var_229_int;
	func_5909(var_229_int);
	var_79_object->SetPlayerName(var_229_int);
	bool var_80_bool;
	@IsOverrideActive(var_80_bool);
	if(var_80_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	@DoDialog(var_79_object);
	object var_238_object; object var_239_object;
	var_73_object = var_238_object;
	var_79_object = var_239_object;
	TaskCall(8);
	func_1481(var_240_object, var_241_object, var_242_string, var_243_bool, var_238_object, var_239_object);
	TaskReturn();
	bool var_82_bool;
	var_79_object->IsDialogEnd(var_82_bool);
	
	for(;;) {
		var_284_bool = !var_82_bool; //@nz
		if(var_284_bool == 0) goto Label_1470;
		@sync();
		var_79_object->IsDialogEnd(var_82_bool);
	}
	
Label_1470:
	object var_285_object;
	var_73_object = var_285_object;
	func_4921();
	@StopDialog(var_79_object);
	var_79_object->GetReturnValue(-1);
	int var_81_int = var_72_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2937(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_549_object, object var_550_object)
{
	var_0_object = var_550_object;
	var_1_object = var_549_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_556_bool = false;
		bool var_557_bool;
		func_5685(var_1_object);
		if(var_557_bool != 0) {
			bool var_563_bool;
			func_5516(var_1_object);
			if(var_563_bool != 0)
				var_556_bool = true;
		}
		if(var_556_bool != 0) {
			object var_582_object; object var_583_object;
			var_582_object = var_1_object;
			var_583_object = var_0_object;
			func_5427();
			func_3044(var_550_object, "Neutral");
			var_0_object->SetMessage(509926); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(509927, 10938, 10937); //@t
			var_0_object->AddReply(509940, 10954, 10953); //@t
		} else {
					func_3044(var_550_object, "Neutral");
					var_0_object->SetMessage(532898); //@t
					var_0_object->ClearReplies(); //@t
					bool var_611_bool;
					func_5553(var_1_object);
					if(var_611_bool != 0)
						var_0_object->AddReply(532897, 11224, 34384); //@t
					var_0_object->AddReply(534175, -1, 35757); //@t
					var_0_object->AddReply(534555, -1, 36187); //@t
		}
	}
	for(;;) {
		bool var_601_bool;
		func_5251(var_601_bool);
		if(var_601_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5076(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3043;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3043:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xb7d";


void func_5243(int var_226_int)
{
	var_226_int = 515539;
}


void func_5245(int var_225_int)
{
	var_225_int = 502864;
}


void func_5247(string var_227_string)
{
	var_227_string = "ui/NPC_Katerina.png";
}


// @pe
void func_5504(bool var_927_bool)
{
	int var_929_int;
	func_5127(var_929_int, "ood10Katerina1");
	if(var_929_int == 0) {
		var_927_bool = true;
		return 0;
	}
	var_927_bool = false;
}


void func_5249(string var_228_string)
{
	var_228_string = "ui/NPC_Katerina_b.png";
}


void func_2434(object var_0_object, int var_425_int, object var_426_object)
{
	var_0_object = var_426_object;
	bool var_436_bool; object var_437_object;
	object var_438_object;
	func_5111(var_438_object);
	var_438_object = var_437_object;
	func_4938(var_436_bool, var_437_object);
	bool var_439_bool; object var_440_object;
	var_426_object = var_440_object;
	func_4853(var_439_bool, var_440_object, 70.0);
	if(!var_439_bool) { //@nz
		var_425_int = -2;
		return 8;
	}
	object var_432_object;
	@CreateDialog(var_432_object);
	int var_443_int;
	func_5245(var_443_int);
	var_432_object->SetNPCName(var_443_int);
	int var_444_int;
	func_5243(var_444_int);
	var_432_object->SetNPCDescription(var_444_int);
	string var_445_string;
	func_5247(var_445_string);
	var_432_object->SetPhoto(var_445_string);
	string var_446_string;
	func_5249(var_446_string);
	var_432_object->SetPhoto2(var_446_string);
	int var_447_int;
	func_5909(var_447_int);
	var_432_object->SetPlayerName(var_447_int);
	bool var_433_bool;
	@IsOverrideActive(var_433_bool);
	if(var_433_bool != 0) {
		var_425_int = -2;
		return 8;
	}
	@DoDialog(var_432_object);
	object var_449_object; object var_450_object;
	var_426_object = var_449_object;
	var_432_object = var_450_object;
	TaskCall(12);
	func_2515(var_451_object, var_452_object, var_453_string, var_454_bool, var_449_object, var_450_object);
	TaskReturn();
	bool var_435_bool;
	var_432_object->IsDialogEnd(var_435_bool);
	
	for(;;) {
		var_521_bool = !var_435_bool; //@nz
		if(var_521_bool == 0) goto Label_2504;
		@sync();
		var_432_object->IsDialogEnd(var_435_bool);
	}
	
Label_2504:
	object var_522_object;
	var_426_object = var_522_object;
	func_4921();
	@StopDialog(var_432_object);
	var_432_object->GetReturnValue(-1);
	int var_434_int = var_425_int;
}
EMIT "Stack[-4] = 0";


void func_5251(bool var_121_bool)
{
	var_121_bool = true;
}


void func_4996(bool var_94_bool, object var_95_object)
{
	string var_101_string; bool var_103_bool; int var_104_int; string var_105_string;
	var_101_string = "c";
	int var_102_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_95_object->HasProperty((var_101_string + (var_102_int + 1)), var_103_bool);
			if(!var_103_bool) { //@nz
			} else {
				var_102_int += 1;
			}
		}
		if(!var_102_int) { //@nz
			var_94_bool = false;
			return 10;
		}
		var_104_int = 0;
		if(var_102_int > 1)
			@irand(var_104_int, var_102_int);
		var_95_object->GetProperty((var_101_string + (var_104_int + 1)), var_105_string);
		bool var_117_bool; string var_118_string;
		var_105_string = var_118_string;
		func_5089(var_117_bool, var_118_string);
		var_117_bool = var_94_bool;
		return 10;

	}
}


// @pe
void func_5253(void)
{
	@SetVariable("KnowKaterina", 1);
}


void func_645(object var_0_object, int var_896_int, object var_897_object)
{
	var_0_object = var_897_object;
	bool var_907_bool; object var_908_object;
	object var_909_object;
	func_5111(var_909_object);
	var_909_object = var_908_object;
	func_4938(var_907_bool, var_908_object);
	bool var_910_bool; object var_911_object;
	var_897_object = var_911_object;
	func_4853(var_910_bool, var_911_object, 70.0);
	if(!var_910_bool) { //@nz
		var_896_int = -2;
		return 8;
	}
	object var_903_object;
	@CreateDialog(var_903_object);
	int var_914_int;
	func_5245(var_914_int);
	var_903_object->SetNPCName(var_914_int);
	int var_915_int;
	func_5243(var_915_int);
	var_903_object->SetNPCDescription(var_915_int);
	string var_916_string;
	func_5247(var_916_string);
	var_903_object->SetPhoto(var_916_string);
	string var_917_string;
	func_5249(var_917_string);
	var_903_object->SetPhoto2(var_917_string);
	int var_918_int;
	func_5909(var_918_int);
	var_903_object->SetPlayerName(var_918_int);
	bool var_904_bool;
	@IsOverrideActive(var_904_bool);
	if(var_904_bool != 0) {
		var_896_int = -2;
		return 8;
	}
	@DoDialog(var_903_object);
	object var_920_object; object var_921_object;
	var_897_object = var_920_object;
	var_903_object = var_921_object;
	TaskCall(4);
	func_726(var_922_object, var_923_object, var_924_string, var_925_bool, var_920_object, var_921_object);
	TaskReturn();
	bool var_906_bool;
	var_903_object->IsDialogEnd(var_906_bool);
	
	for(;;) {
		var_972_bool = !var_906_bool; //@nz
		if(var_972_bool == 0) goto Label_715;
		@sync();
		var_903_object->IsDialogEnd(var_906_bool);
	}
	
Label_715:
	object var_973_object;
	var_897_object = var_973_object;
	func_4921();
	@StopDialog(var_903_object);
	var_903_object->GetReturnValue(-1);
	int var_905_int = var_896_int;
}
EMIT "Stack[-4] = 0";


void func_4745(void)
{
	bool var_78_bool; int var_79_int; int var_80_int; bool var_81_bool;
	@WaitForAnimEnd();
	bool var_82_bool;
	func_4848(var_82_bool);
	if(!var_82_bool) //@nz
		return 12;
	int var_84_int;
	func_5226(var_84_int);
	int var_76_int;
	var_84_int = var_76_int;
	int var_77_int = 0;
	
	for(;;) {
		bool var_97_bool = false;
		if(var_77_int < 5) {
			bool var_100_bool;
			func_4848(var_100_bool);
			if(var_100_bool != 0)
				var_97_bool = true;
		}
		if(var_97_bool != 0) {
			if(!var_76_int) { //@nz
				@Sleep(3, var_78_bool);
				if(!var_78_bool) { //@nz
				} else {
			} else {
			@irand(var_79_int, var_76_int);
			@irand(var_80_int, 5);
			if(var_80_int != 0)
				var_79_int = 0;
			string var_111_string; int var_112_int;
			var_79_int = var_112_int;
			func_5219(var_111_string, var_112_int);
			@PlayAnimation("all", var_111_string);
			@WaitForAnimEnd(var_81_bool);
			var_113_bool = !var_81_bool; //@nz
			if(var_113_bool == 0) goto Label_4800;
			goto Label_4811;
			}
				Label_4800:
					bool var_104_bool;
					func_4814(var_104_bool);
					var_105_bool = !var_104_bool; //@nz
					if(var_105_bool == 0) goto Label_4806;
			}
		}
	Label_4811:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4806:
		@ResetAAS();
		var_77_int += 1;
	}
	
}


// @pe
void func_5259(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5516(bool var_563_bool)
{
	bool var_565_bool = false;
	bool var_566_bool = false;
	int var_567_int;
	func_5127(var_567_int, "d3q01");
	var_570_bool = var_567_int == 0;
	if(!var_570_bool) { //@nz
		int var_572_int;
		func_5127(var_572_int, "d3q01");
		var_575_bool = var_572_int == 1000;
		if(!var_575_bool) //@nz
			var_566_bool = true;
	}
	if(var_566_bool != 0) {
		int var_577_int;
		func_5127(var_577_int, "d3q01");
		var_580_bool = var_577_int == -1;
		if(!var_580_bool) //@nz
			var_565_bool = true;
	}
	if(var_565_bool != 0) {
		var_563_bool = true;
		return 0;
	}
	var_563_bool = false;
}


// @pe
void func_4492(object var_2_object, string var_1066_string)
{
	bool var_1067_bool;
	func_5251(var_1067_bool);
	if(!var_1067_bool) //@nz
		return 0;
	if(var_1066_string == var_2_object)
		return 0;
	string var_1070_string; bool var_1071_bool;
	var_1066_string = var_1070_string;
	if(var_1066_string == "")
		var_1071_bool = false;
	else
		var_1071_bool = true;
	func_5083(var_1070_string, var_1071_bool);
	var_2_object = var_1066_string;
	
}


// @pe
void func_5265(void)
{
	@SetVariable("ood1Katerina1", 1);
}


void func_5779(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 666, 2, 534120);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_5831(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5271(void)
{
	@SetVariable("ood1Katerina2", 1);
}


void func_1692(object var_0_object, int var_783_int, object var_784_object)
{
	var_0_object = var_784_object;
	bool var_794_bool; object var_795_object;
	object var_796_object;
	func_5111(var_796_object);
	var_796_object = var_795_object;
	func_4938(var_794_bool, var_795_object);
	bool var_797_bool; object var_798_object;
	var_784_object = var_798_object;
	func_4853(var_797_bool, var_798_object, 70.0);
	if(!var_797_bool) { //@nz
		var_783_int = -2;
		return 8;
	}
	object var_790_object;
	@CreateDialog(var_790_object);
	int var_801_int;
	func_5245(var_801_int);
	var_790_object->SetNPCName(var_801_int);
	int var_802_int;
	func_5243(var_802_int);
	var_790_object->SetNPCDescription(var_802_int);
	string var_803_string;
	func_5247(var_803_string);
	var_790_object->SetPhoto(var_803_string);
	string var_804_string;
	func_5249(var_804_string);
	var_790_object->SetPhoto2(var_804_string);
	int var_805_int;
	func_5909(var_805_int);
	var_790_object->SetPlayerName(var_805_int);
	bool var_791_bool;
	@IsOverrideActive(var_791_bool);
	if(var_791_bool != 0) {
		var_783_int = -2;
		return 8;
	}
	@DoDialog(var_790_object);
	object var_807_object; object var_808_object;
	var_784_object = var_807_object;
	var_790_object = var_808_object;
	TaskCall(10);
	func_1773(var_809_object, var_810_object, var_811_string, var_812_bool, var_807_object, var_808_object);
	TaskReturn();
	bool var_793_bool;
	var_790_object->IsDialogEnd(var_793_bool);
	
	for(;;) {
		var_892_bool = !var_793_bool; //@nz
		if(var_892_bool == 0) goto Label_1762;
		@sync();
		var_790_object->IsDialogEnd(var_793_bool);
	}
	
Label_1762:
	object var_893_object;
	var_784_object = var_893_object;
	func_4921();
	@StopDialog(var_790_object);
	var_790_object->GetReturnValue(-1);
	int var_792_int = var_783_int;
}
EMIT "Stack[-4] = 0";


void func_5277(void)
{
	@SetVariable("d10q02", 1);
	object var_63_object;
	func_5859(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	float var_74_float;
	func_5199(var_74_float);
	var_60_object->AddMark("d10q02KaterinaGotoRubin", "pt_region01_center01", 0, 515467, var_74_float);
	func_5779();
	func_5792();
	object var_108_object;
	func_5132(var_108_object, "quest_d10_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_3999(object var_2_object, string var_728_string)
{
	bool var_729_bool;
	func_5251(var_729_bool);
	if(!var_729_bool) //@nz
		return 0;
	if(var_728_string == var_2_object)
		return 0;
	string var_732_string; bool var_733_bool;
	var_728_string = var_732_string;
	if(var_728_string == "")
		var_733_bool = false;
	else
		var_733_bool = true;
	func_5083(var_732_string, var_733_bool);
	var_2_object = var_728_string;
	
}


void func_5792(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 667, 2, 534121);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_5831(var_105_bool, var_106_object, 666);
}
EMIT "Stack[-1] = 0";


void func_5033(bool var_125_bool, object var_126_object)
{
	bool var_134_bool; int var_135_int; string var_136_string;
	int var_138_int;
	func_5204(var_138_int);
	string var_132_string = ("d" + var_138_int) + "m";
	int var_133_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_126_object->HasProperty((var_132_string + (var_133_int + 1)), var_134_bool);
			if(!var_134_bool) { //@nz
			} else {
				var_133_int += 1;
			}
		}
		if(!var_133_int) { //@nz
			var_125_bool = false;
			return 10;
		}
		var_135_int = 0;
		if(var_133_int > 1)
			@irand(var_135_int, var_133_int);
		var_126_object->GetProperty((var_132_string + (var_135_int + 1)), var_136_string);
		bool var_157_bool; string var_158_string;
		var_136_string = var_158_string;
		func_5089(var_157_bool, var_158_string);
		var_157_bool = var_125_bool;
		return 10;

	}
}


void func_5805(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 123, 1, 513746);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_5831(var_109_bool, var_110_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5553(bool var_611_bool)
{
	int var_613_int;
	func_5127(var_613_int, "ood3Katerina2");
	if(var_613_int == 0) {
		var_611_bool = true;
		return 0;
	}
	var_611_bool = false;
}


void func_5818(object var_118_object)
{
	object var_120_object;
	@GetDiaryRoot(var_120_object);
	if(!var_120_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_118_object = false;
	}
	var_120_object = var_118_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5307(void)
{
	@SetVariable("ood10Katerina1", 1);
}


// @pe
void func_5565(bool var_409_bool)
{
	int var_411_int;
	func_5127(var_411_int, "ood1Katerina3");
	if(var_411_int == 0) {
		var_409_bool = true;
		return 0;
	}
	var_409_bool = false;
}


// @pe
void func_5313(void)
{
	@SetVariable("d10KaterinaVisit", 1);
}


void func_3523(object var_0_object, int var_630_int, object var_631_object)
{
	var_0_object = var_631_object;
	bool var_641_bool; object var_642_object;
	object var_643_object;
	func_5111(var_643_object);
	var_643_object = var_642_object;
	func_4938(var_641_bool, var_642_object);
	bool var_644_bool; object var_645_object;
	var_631_object = var_645_object;
	func_4853(var_644_bool, var_645_object, 70.0);
	if(!var_644_bool) { //@nz
		var_630_int = -2;
		return 8;
	}
	object var_637_object;
	@CreateDialog(var_637_object);
	int var_648_int;
	func_5245(var_648_int);
	var_637_object->SetNPCName(var_648_int);
	int var_649_int;
	func_5243(var_649_int);
	var_637_object->SetNPCDescription(var_649_int);
	string var_650_string;
	func_5247(var_650_string);
	var_637_object->SetPhoto(var_650_string);
	string var_651_string;
	func_5249(var_651_string);
	var_637_object->SetPhoto2(var_651_string);
	int var_652_int;
	func_5909(var_652_int);
	var_637_object->SetPlayerName(var_652_int);
	bool var_638_bool;
	@IsOverrideActive(var_638_bool);
	if(var_638_bool != 0) {
		var_630_int = -2;
		return 8;
	}
	@DoDialog(var_637_object);
	object var_654_object; object var_655_object;
	var_631_object = var_654_object;
	var_637_object = var_655_object;
	TaskCall(16);
	func_3604(var_656_object, var_657_object, var_658_string, var_659_bool, var_654_object, var_655_object);
	TaskReturn();
	bool var_640_bool;
	var_637_object->IsDialogEnd(var_640_bool);
	
	for(;;) {
		var_693_bool = !var_640_bool; //@nz
		if(var_693_bool == 0) goto Label_3593;
		@sync();
		var_637_object->IsDialogEnd(var_640_bool);
	}
	
Label_3593:
	object var_694_object;
	var_631_object = var_694_object;
	func_4921();
	@StopDialog(var_637_object);
	var_637_object->GetReturnValue(-1);
	int var_639_int = var_630_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1222(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1000_object, object var_1001_object)
{
	var_0_object = var_1001_object;
	var_1_object = var_1000_object;
	var_3_string = false;
	if(1 != 0) {
		func_1285(var_1001_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_1255;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4ca";
	}
Label_1255:
	bool var_1025_bool;
	func_5251(var_1025_bool);
	if(var_1025_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5076(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1284;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1284:
		return 0;

	}
	
}


// @pe
void func_5319(void)
{
	@SetVariable("ood3Katerina2", 1);
}


void func_5831(bool var_109_bool, object var_110_object, int var_111_int)
{
	object var_118_object;
	func_5818(var_118_object);
	object var_115_object;
	var_118_object = var_115_object;
	object var_116_object;
	var_115_object->Find(var_111_int, var_116_object);
	if(!var_116_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_111_int);
		var_109_bool = false;
	}
	var_116_object->AddChild(var_110_object);
	@SendWorldWndMessage(7);
	int var_117_int;
	var_110_object->GetCategory(var_117_int);
	@SetDiarySection(var_117_int);
	var_109_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1481(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_238_object, object var_239_object)
{
	var_0_object = var_239_object;
	var_3_string = false;
	if(1 != 0) {
		object var_245_object; object var_246_object;
		var_245_object = var_238_object;
		var_246_object = var_0_object;
		func_5253();
		func_1549(var_239_object, "Neutral");
		var_0_object->SetMessage(500295); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500296, 350, 347); //@t
		var_0_object->AddReply(500297, 350, 348); //@t
		var_0_object->AddReply(500298, 350, 349); //@t
		goto Label_1519;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5cd";
	}
Label_1519:
	bool var_271_bool;
	func_5251(var_271_bool);
	if(var_271_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5076(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1548;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1548:
		return 0;

	}
	
}


// @pe
void func_5577(bool var_737_bool)
{
	int var_739_int;
	func_5127(var_739_int, "d5q01");
	if(var_739_int == 3)
		var_737_bool = true;
	var_737_bool = false;
}


// @pe
void func_5325(void)
{
	@SetVariable("d3KaterinaAboutKills", 1);
}


void func_4814(bool var_104_bool)
{
	var_104_bool = true;
}


void func_4816(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_5331(void)
{
	@SetVariable("ood1Katerina3", 1);
}


// @pe
void func_2515(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_449_object, object var_450_object)
{
	var_0_object = var_450_object;
	var_1_object = var_449_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_456_bool;
		func_5709(var_1_object);
		if(var_456_bool != 0) {
			object var_462_object; object var_463_object;
			var_462_object = var_1_object;
			var_463_object = var_0_object;
			func_5450();
			func_2643(var_450_object, "Neutral");
			var_0_object->SetMessage(509330); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(509331, 10248, 10247); //@t
			var_0_object->AddReply(509340, 10248, 10258); //@t
			var_0_object->AddReply(509341, 10248, 10260); //@t
		} else {
					bool var_492_bool;
					func_5721(var_1_object);
					if(var_492_bool == 0) goto Label_2591;
					object var_498_object; object var_499_object;
					var_498_object = var_1_object;
					var_499_object = var_0_object;
					func_5456();
					func_2643(var_450_object, "Neutral");
					var_0_object->SetMessage(509323); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(509324, 10239, 10238); //@t
					var_0_object->AddReply(509328, 10239, 10242); //@t
					var_0_object->AddReply(509329, 10239, 10244); //@t
		}
	}
Label_2613:
	for(;;) {
		bool var_484_bool;
		func_5251(var_484_bool);
		if(var_484_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5076(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2642;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2642:
			return 0;

		}

	}
	
Label_2591:
	func_2643(var_450_object, "Neutral");
	var_0_object->SetMessage(515792); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(533895, -1, 35453); //@t
	var_0_object->AddReply(533894, -1, 35452); //@t
	goto Label_2613;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9d7";


void func_4821(float var_66_float, object var_67_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_67_object->GetPosition(var_72_cvector);
	var_66_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


// @pe
void func_726(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_920_object, object var_921_object)
{
	var_0_object = var_921_object;
	var_1_object = var_920_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_927_bool;
		func_5504(var_1_object);
		if(var_927_bool != 0) {
			object var_933_object; object var_934_object;
			var_933_object = var_1_object;
			var_934_object = var_0_object;
			func_5307();
			object var_937_object; object var_938_object;
			var_937_object = var_1_object;
			var_938_object = var_0_object;
			func_5313();
			func_819(var_921_object, "Neutral");
			var_0_object->SetMessage(534079); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(534080, 38114, 35673); //@t
			var_0_object->AddReply(536380, 38114, 38153); //@t
		} else {
					func_819(var_921_object, "Neutral");
					var_0_object->SetMessage(534086); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(534090, -1, 35683); //@t
					var_0_object->AddReply(536397, -1, 38176); //@t
		}
	}
	for(;;) {
		bool var_956_bool;
		func_5251(var_956_bool);
		if(var_956_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_5076(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_818;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_818:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2da";


void func_5076(string var_59_string)
{
	float var_62_float; float var_63_float;
	@lshGetAnimTimes(var_59_string, var_62_float, var_63_float);
	@lshPlayAnimation(var_62_float, var_63_float, false);
}


// @pe
void func_5589(bool var_757_bool)
{
	int var_759_int;
	func_5127(var_759_int, "d5q01");
	if(var_759_int == 4)
		var_757_bool = true;
	var_757_bool = false;
}


// @pe
void func_5337(object var_117_object)
{
	object var_121_object;
	func_5859(var_121_object);
	object var_118_object;
	var_121_object = var_118_object;
	func_5876(var_118_object, "pt_region01_center01", (float)2);
	object var_141_object;
	func_5859(var_141_object);
	var_117_object->ShowMap(var_141_object);
}


void func_4563(object var_0_object)
{
	bool var_52_bool;
	func_4848(var_52_bool);
	if(!var_52_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4691();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4745();
	}
}
EMIT "Return(); Pop(0)";


void func_5083(string var_253_string, bool var_254_bool)
{
	float var_259_float; float var_260_float;
	@lshGetAnimTimes(var_253_string, var_259_float, var_260_float);
	@lshPlayAnimation(var_259_float, var_260_float, var_254_bool);
}


void func_4829(bool var_59_bool, cvector var_60_cvector)
{
	cvector var_64_cvector;
	@GetPosition(var_64_cvector);
	cvector var_65_cvector = var_60_cvector - var_64_cvector;
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_65_cvector, 2);
	bool var_66_bool;
	@Rotate(var_67_float, var_68_float, var_66_bool);
	var_66_bool = var_59_bool;
}


// @pe
void func_5601(bool var_830_bool)
{
	int var_832_int;
	func_5127(var_832_int, "d6q01");
	if(var_832_int == 1)
		var_830_bool = true;
	var_830_bool = false;
}


void func_5089(bool var_117_bool, string var_118_string)
{
	bool var_120_bool;
	bool var_121_bool;
	func_5251(var_121_bool);
	if(var_121_bool != 0) {
		@lshHasSpeech(var_120_bool, var_118_string);
		if(var_120_bool != 0) {
			@lshPlaySpeech(var_118_string);
			var_117_bool = true;
		}
	}
	var_117_bool = false;
}


void func_5859(object var_85_object)
{
	object var_88_object; object var_89_object;
	@GetMainOutdoorScene(var_88_object);
	if(var_88_object == null) {
		@Trace("Can't find main outdoor scene");
		var_89_object = null;
		var_89_object = var_85_object;
	}
	var_88_object->GetMap(var_89_object);
	var_89_object = var_85_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3044(object var_2_object, string var_586_string)
{
	bool var_587_bool;
	func_5251(var_587_bool);
	if(!var_587_bool) //@nz
		return 0;
	if(var_586_string == var_2_object)
		return 0;
	string var_590_string; bool var_591_bool;
	var_586_string = var_590_string;
	if(var_586_string == "")
		var_591_bool = false;
	else
		var_591_bool = true;
	func_5083(var_590_string, var_591_bool);
	var_2_object = var_586_string;
	
}


void func_4839(bool var_55_bool, object var_56_object)
{
	cvector var_58_cvector;
	var_56_object->GetPosition(var_58_cvector);
	bool var_59_bool; cvector var_60_cvector;
	var_58_cvector = var_60_cvector;
	func_4829(var_59_bool, var_60_cvector);
	var_59_bool = var_55_bool;
}


void func_4583(bool var_76_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) //@nz
		var_76_bool = false;
	bool var_81_bool; object var_82_object;
	var_78_object = var_82_object;
	func_4839(var_81_bool, var_82_object);
	var_81_bool = var_76_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5353(void)
{
	int var_59_int;
	func_5127(var_59_int, "d5q01");
	if(var_59_int != 4)
		@SetVariable("d5q01", 4);
}


void func_3818(object var_0_object, int var_697_int, object var_698_object)
{
	var_0_object = var_698_object;
	bool var_708_bool; object var_709_object;
	object var_710_object;
	func_5111(var_710_object);
	var_710_object = var_709_object;
	func_4938(var_708_bool, var_709_object);
	bool var_711_bool; object var_712_object;
	var_698_object = var_712_object;
	func_4853(var_711_bool, var_712_object, 70.0);
	if(!var_711_bool) { //@nz
		var_697_int = -2;
		return 8;
	}
	object var_704_object;
	@CreateDialog(var_704_object);
	int var_715_int;
	func_5245(var_715_int);
	var_704_object->SetNPCName(var_715_int);
	int var_716_int;
	func_5243(var_716_int);
	var_704_object->SetNPCDescription(var_716_int);
	string var_717_string;
	func_5247(var_717_string);
	var_704_object->SetPhoto(var_717_string);
	string var_718_string;
	func_5249(var_718_string);
	var_704_object->SetPhoto2(var_718_string);
	int var_719_int;
	func_5909(var_719_int);
	var_704_object->SetPlayerName(var_719_int);
	bool var_705_bool;
	@IsOverrideActive(var_705_bool);
	if(var_705_bool != 0) {
		var_697_int = -2;
		return 8;
	}
	@DoDialog(var_704_object);
	object var_721_object; object var_722_object;
	var_698_object = var_721_object;
	var_704_object = var_722_object;
	TaskCall(18);
	func_3899(var_723_object, var_724_object, var_725_string, var_726_bool, var_721_object, var_722_object);
	TaskReturn();
	bool var_707_bool;
	var_704_object->IsDialogEnd(var_707_bool);
	
	for(;;) {
		var_779_bool = !var_707_bool; //@nz
		if(var_779_bool == 0) goto Label_3888;
		@sync();
		var_704_object->IsDialogEnd(var_707_bool);
	}
	
Label_3888:
	object var_780_object;
	var_698_object = var_780_object;
	func_4921();
	@StopDialog(var_704_object);
	var_704_object->GetReturnValue(-1);
	int var_706_int = var_697_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1773(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_807_object, object var_808_object)
{
	var_0_object = var_808_object;
	var_1_object = var_807_object;
	var_3_string = false;
	if(1 != 0) {
		func_1901(var_808_object, "Neutral");
		var_0_object->SetMessage(512770); //@t
		var_0_object->ClearReplies(); //@t
		bool var_823_bool = false;
		bool var_824_bool;
		func_5625(var_1_object);
		if(var_824_bool != 0) {
			bool var_830_bool;
			func_5601(var_1_object);
			if(var_830_bool != 0)
				var_823_bool = true;
		}
		if(var_823_bool != 0)
			var_0_object->AddReply(512771, 3726, 13970); //@t
		bool var_839_bool = false;
		bool var_840_bool;
		func_5637(var_1_object);
		if(var_840_bool != 0) {
			bool var_846_bool;
			func_5613(var_1_object);
			if(var_846_bool != 0)
				var_839_bool = true;
		}
		if(var_839_bool != 0)
			var_0_object->AddReply(512772, 13972, 13971); //@t
		bool var_855_bool = true;
		bool var_856_bool = false;
		bool var_857_bool;
		func_5649(var_1_object);
		if(var_857_bool != 0) {
			bool var_863_bool;
			func_5673(var_1_object);
			if(var_863_bool != 0)
				var_856_bool = true;
		}
		if(var_856_bool != 1) {
			bool var_869_bool = false;
			bool var_870_bool;
			func_5661(var_1_object);
			if(var_870_bool != 0) {
				bool var_876_bool;
				func_5673(var_1_object);
				if(var_876_bool != 0)
					var_869_bool = true;
			}
			if(var_869_bool != 1)
				var_855_bool = false;
		}
		if(var_855_bool != 0)
			var_0_object->AddReply(512791, 13991, 13990); //@t
		var_0_object->AddReply(512790, -1, 13989); //@t
		goto Label_1871;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6f1";
	}
Label_1871:
	bool var_884_bool;
	func_5251(var_884_bool);
	if(var_884_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_5076(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1900;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1900:
		return 0;

	}
	
}


// @pe
void func_5613(bool var_846_bool)
{
	int var_848_int;
	func_5127(var_848_int, "d6q01KnowKillerIsKlara");
	if(var_848_int == 1)
		var_846_bool = true;
	var_846_bool = false;
}


void func_4848(bool var_52_bool)
{
	bool var_54_bool;
	@IsLoaded(var_54_bool);
	var_54_bool = var_52_bool;
}


// @pe
void func_241(object var_2_object, string var_336_string)
{
	bool var_337_bool;
	func_5251(var_337_bool);
	if(!var_337_bool) //@nz
		return 0;
	if(var_336_string == var_2_object)
		return 0;
	string var_340_string; bool var_341_bool;
	var_336_string = var_340_string;
	if(var_336_string == "")
		var_341_bool = false;
	else
		var_341_bool = true;
	func_5083(var_340_string, var_341_bool);
	var_2_object = var_336_string;
	
}


void func_5104(void)
{
	bool var_54_bool;
	func_5251(var_54_bool);
	if(var_54_bool != 0)
		@lshStopSpeech();
}


void func_5876(object var_118_object, string var_119_string, float var_120_float)
{
	object var_128_object;
	@GetMainOutdoorScene(var_128_object);
	if(var_128_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_126_cvector;
	cvector var_127_cvector;
	bool var_129_bool;
	var_128_object->GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector);
	if(!var_129_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_119_string) + " doesnt exist");
	var_128_object->GetMap(var_118_object);
	if(var_118_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_139_float = GetByIndex(var_126_cvector, 0);
	var_140_float = GetByIndex(var_126_cvector, 2);
	var_118_object->SetMapParams(var_139_float, var_140_float, var_120_float);
}
EMIT "Stack[-2] = 0";


void func_4853(bool var_178_bool, object var_179_object, float var_180_float)
{
	cvector var_191_cvector; bool var_198_bool;
	var_179_object->GetPosition(var_191_cvector);
	float var_190_float;
	var_179_object->GetEyesHeight(var_190_float);
	var_199_float = GetByIndex(var_191_cvector, 1);
	SetByIndex(var_191_cvector, 1) = (var_199_float + var_190_float);
	cvector var_192_cvector;
	@GetPosition(var_192_cvector);
	@GetEyesHeight(var_190_float);
	var_200_float = GetByIndex(var_192_cvector, 1);
	SetByIndex(var_192_cvector, 1) = (var_200_float + var_190_float);
	cvector var_193_cvector = var_191_cvector - var_192_cvector;
	var_201_float = GetByIndex(var_193_cvector, 1);
	SetByIndex(var_193_cvector, 1) = (float)0;
	var_203_float = sqrt(var_193_cvector | var_193_cvector);
	var_193_cvector /= var_203_float;
	cvector var_194_cvector = -var_193_cvector;
	cvector var_205_cvector;
	func_5117(var_205_cvector, (var_194_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_195_cvector = ((var_193_cvector * var_180_float) + (var_205_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_197_bool;
	@IsOverrideActive(var_197_bool);
	if(var_197_bool != 0)
		var_178_bool = false;
	@StopWorld();
	@CameraTransit((var_192_cvector + var_195_cvector), var_194_cvector);
	var_218_float = GetByIndex(var_195_cvector, 0);
	var_219_float = GetByIndex(var_195_cvector, 2);
	@Rotate(var_218_float, var_219_float);
	bool var_220_bool;
	func_5251(var_220_bool);
	if(var_220_bool != 0) {
	} else {
		@HasAnimationTrack(var_198_bool, "head");
		if(var_198_bool == 0) goto Label_4915;
		@LookAsyncCamera("head");
	}
Label_4915:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_178_bool = true;
	
}


// @pe
void func_5366(void)
{
	@SetVariable("d1q01KaterinaUHave1day", 1);
}


void func_4598(object var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0);
	var_129_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_128_float, var_129_float);
}


// @pe
void func_5625(bool var_824_bool)
{
	int var_826_int;
	func_5127(var_826_int, "ood6Katerina1");
	if(var_826_int == 0) {
		var_824_bool = true;
		return 0;
	}
	var_824_bool = false;
}


void func_4603(bool var_59_bool)
{
	object var_62_object;
	@FindActor(var_62_object, "player");
	if(!var_62_object) { //@nz
		var_59_bool = false;
		return 4;
	}
	float var_66_float; object var_67_object;
	func_4821(var_66_float, var_67_object);
	if(var_66_float > 90000.0) {
		var_59_bool = false;
		return 4;
	}
	bool var_63_bool;
	@CanSee(var_63_bool, var_67_object);
	var_63_bool = var_59_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_5372(void)
{
	@SetVariable("ood6Katerina1", 1);
}


void func_5117(cvector var_205_cvector, cvector var_206_cvector)
{
	float var_209_float = sqrt(var_206_cvector | var_206_cvector);
	if(var_209_float < 0.000001)
		var_205_cvector = [0.0, 0.0, 0.0];
	var_205_cvector = var_206_cvector / var_209_float;
}


