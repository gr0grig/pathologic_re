// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_42_cvector == 11509) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4195();
			}
			if(var_42_cvector == 11510) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_4195();
			}
			if(var_42_cvector == 11505) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_4195();
			}
			if(var_42_cvector == 11498) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_4195();
			}
			if(var_41_bool == 11488) {
				bool var_104_bool = false;
				bool var_105_bool;
				func_4321(var_1_object);
				if(var_105_bool != 0) {
					bool var_113_bool;
					func_4316(var_1_object);
					if(var_113_bool != 0)
						var_104_bool = true;
				}
				if(var_104_bool != 0) {
					object var_115_object; object var_116_object;
					var_115_object = var_1_object;
					var_116_object = var_0_object;
					func_4193();
					func_178(var_42_cvector, "Questioning");
					var_0_object->SetMessage(510420); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(510421, 11490, 11489); //@t
					var_0_object->AddReply(534384, 36001, 35999); //@t
					return 0;
				}
				func_178(var_42_cvector, "Neutral");
				var_0_object->SetMessage(534418); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534419, -1, 36046); //@t
				var_0_object->AddReply(536096, -1, 37848); //@t
				return 0;
			}
			if(var_41_bool == 36001) {
				func_178(var_42_cvector, "Questioning");
				var_0_object->SetMessage(534386); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534387, 36003, 36002); //@t
				return 0;
			}
			if(var_41_bool == 36003) {
				func_178(var_42_cvector, "Questioning");
				var_0_object->SetMessage(534388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534389, 36006, 36004); //@t
				var_0_object->AddReply(534390, 36006, 36005); //@t
				return 0;
			}
			if(var_41_bool == 36006) {
				func_178(var_42_cvector, "Questioning");
				var_0_object->SetMessage(534391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534392, 36009, 36007); //@t
				var_0_object->AddReply(534393, 36009, 36008); //@t
				return 0;
			}
			if(var_41_bool == 36009) {
				func_178(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(534394); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534395, 36013, 36012); //@t
				return 0;
			}
			if(var_41_bool == 36013) {
				func_178(var_42_cvector, "Neutral");
				var_0_object->SetMessage(534396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534397, 11492, 36014); //@t
				return 0;
			}
			if(var_41_bool == 11490) {
				func_178(var_42_cvector, "Doubt");
				var_0_object->SetMessage(510422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510423, 11492, 11491); //@t
				var_0_object->AddReply(534385, 11502, 36000); //@t
				return 0;
			}
			if(var_41_bool == 11492) {
				func_178(var_42_cvector, "Doubt");
				var_0_object->SetMessage(510424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510425, 11494, 11493); //@t
				return 0;
			}
			if(var_41_bool == 11494) {
				func_178(var_42_cvector, "Grin");
				var_0_object->SetMessage(510426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510427, 11496, 11495); //@t
				return 0;
			}
			if(var_41_bool == 11496) {
				func_178(var_42_cvector, "Questioning");
				var_0_object->SetMessage(510428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510429, 11499, 11497); //@t
				var_0_object->AddReply(510430, -1, 11498); //@t
				return 0;
			}
			if(var_41_bool == 11499) {
				func_178(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(510431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510432, 11502, 11500); //@t
				var_0_object->AddReply(510433, 11502, 11501); //@t
				return 0;
			}
			if(var_41_bool == 11502) {
				func_178(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(510434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510435, 11504, 11503); //@t
				var_0_object->AddReply(510437, -1, 11505); //@t
				return 0;
			}
			if(var_41_bool == 11504) {
				func_178(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510438, 11508, 11507); //@t
				return 0;
			}
			if(var_41_bool == 11508) {
				func_178(var_42_cvector, "Neutral");
				var_0_object->SetMessage(510439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510440, -1, 11509); //@t
				var_0_object->AddReply(510441, -1, 11510); //@t
				return 0;
			}
			var_3_string = true;
			bool var_261_bool;
			func_4119(var_261_bool);
			if(var_261_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc9";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_42_cvector == 13388) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4121();
			}
			if(var_41_bool == 13387) {
				func_726(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(512232); //@t
				var_0_object->ClearReplies(); //@t
				bool var_71_bool;
				func_4257(var_1_object);
				if(var_71_bool != 0)
					var_0_object->AddReply(512233, 13389, 13388); //@t
				var_0_object->AddReply(533144, -1, 34662); //@t
				return 0;
			}
			if(var_41_bool == 13389) {
				func_726(var_42_cvector, "Questioning");
				var_0_object->SetMessage(512234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512235, 13393, 13390); //@t
				var_0_object->AddReply(512236, 13393, 13391); //@t
				var_0_object->AddReply(512237, 13393, 13392); //@t
				return 0;
			}
			if(var_41_bool == 13393) {
				func_726(var_42_cvector, "Questioning");
				var_0_object->SetMessage(512238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535824, 37518, 37517); //@t
				var_0_object->AddReply(535826, 37518, 37519); //@t
				return 0;
			}
			if(var_41_bool == 37518) {
				func_726(var_42_cvector, "Questioning");
				var_0_object->SetMessage(535825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512240, 13397, 13396); //@t
				return 0;
			}
			if(var_41_bool == 13397) {
				func_726(var_42_cvector, "Doubt");
				var_0_object->SetMessage(512241); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512242, -1, 13398); //@t
				var_0_object->AddReply(535827, -1, 37521); //@t
				return 0;
			}
			var_3_string = true;
			bool var_125_bool;
			func_4119(var_125_bool);
			if(var_125_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2ed";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_41_bool == 13489) {
				bool var_47_bool;
				func_4333(var_1_object);
				if(var_47_bool != 0) {
					object var_55_object; object var_56_object;
					var_55_object = var_1_object;
					var_56_object = var_0_object;
					func_4218();
					func_1064(var_42_cvector, "Grin");
					var_0_object->SetMessage(512330); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512331, 13491, 13490); //@t
					var_0_object->AddReply(512336, -1, 13495); //@t
					return 0;
				}
				func_1064(var_42_cvector, "Neutral");
				var_0_object->SetMessage(513781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513782, -1, 15018); //@t
				var_0_object->AddReply(541839, -1, 44056); //@t
				return 0;
			}
			if(var_41_bool == 13491) {
				func_1064(var_42_cvector, "Grin");
				var_0_object->SetMessage(512332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512333, 13493, 13492); //@t
				var_0_object->AddReply(512337, 13497, 13496); //@t
				return 0;
			}
			if(var_41_bool == 13497) {
				func_1064(var_42_cvector, "Grin");
				var_0_object->SetMessage(512338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512339, 13499, 13498); //@t
				return 0;
			}
			if(var_41_bool == 13499) {
				func_1064(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512341, -1, 13500); //@t
				var_0_object->AddReply(512342, 13502, 13501); //@t
				return 0;
			}
			if(var_41_bool == 13502) {
				func_1064(var_42_cvector, "Neutral");
				var_0_object->SetMessage(512343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512344, -1, 13503); //@t
				return 0;
			}
			if(var_41_bool == 13493) {
				func_1064(var_42_cvector, "Grin");
				var_0_object->SetMessage(512334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512335, 13504, 13494); //@t
				return 0;
			}
			if(var_41_bool == 13504) {
				func_1064(var_42_cvector, "Grin");
				var_0_object->SetMessage(512345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512346, 13506, 13505); //@t
				return 0;
			}
			if(var_41_bool == 13506) {
				func_1064(var_42_cvector, "Grin");
				var_0_object->SetMessage(512347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512348, -1, 13507); //@t
				return 0;
			}
			var_3_string = true;
			bool var_146_bool;
			func_4119(var_146_bool);
			if(var_146_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x43f";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_42_cvector == 15289) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4230();
			}
			if(var_42_cvector == 15310) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_4187();
				object var_80_object = var_1_object;
				func_4239(var_0_object);
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_4141();
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_4247();
			}
			if(var_42_cvector == 40764) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_4181();
			}
			if(var_42_cvector == 40789) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_4148();
				object var_127_object = var_1_object;
				func_4165(var_0_object);
			}
			if(var_42_cvector == 40790) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_4148();
				object var_163_object = var_1_object;
				func_4165(var_0_object);
			}
			if(var_42_cvector == 40787) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_4148();
				object var_169_object = var_1_object;
				func_4165(var_0_object);
			}
			if(var_41_bool == 15276) {
				bool var_173_bool = false;
				bool var_174_bool;
				func_4345(var_1_object);
				if(var_174_bool != 0) {
					bool var_180_bool;
					func_4357(var_1_object);
					if(var_180_bool != 0)
						var_173_bool = true;
				}
				if(var_173_bool != 0) {
					object var_186_object; object var_187_object;
					var_186_object = var_1_object;
					var_187_object = var_0_object;
					func_4224();
					func_1519(var_42_cvector, "Neutral");
					var_0_object->SetMessage(514041); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514042, 15278, 15277); //@t
					return 0;
				}
				func_1519(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(514063); //@t
				var_0_object->ClearReplies(); //@t
				bool var_213_bool = false;
				bool var_214_bool;
				func_4381(var_214_bool, var_1_object);
				if(var_214_bool != 0) {
					bool var_223_bool;
					func_4369(var_1_object);
					if(var_223_bool != 0)
						var_213_bool = true;
				}
				if(var_213_bool != 0)
					var_0_object->AddReply(514068, 40760, 15305); //@t
				bool var_232_bool = false;
				bool var_233_bool;
				func_4391(var_233_bool, var_1_object);
				if(var_233_bool != 0) {
					bool var_245_bool;
					func_4369(var_1_object);
					if(var_245_bool != 0)
						var_232_bool = true;
				}
				if(var_232_bool != 0)
					var_0_object->AddReply(514069, 15307, 15306); //@t
				bool var_250_bool = false;
				bool var_251_bool;
				func_4292(var_1_object);
				if(var_251_bool != 0) {
					bool var_257_bool;
					func_4304(var_1_object);
					if(var_257_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(538835, 40765, 40764); //@t
				var_0_object->AddReply(514064, -1, 15300); //@t
				return 0;
			}
			if(var_41_bool == 40765) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538836); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538837, 40775, 40766); //@t
				var_0_object->AddReply(538838, 40774, 40767); //@t
				var_0_object->AddReply(538839, 40769, 40768); //@t
				return 0;
			}
			if(var_41_bool == 40769) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538841, 40773, 40772); //@t
				return 0;
			}
			if(var_41_bool == 40773) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538842); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538847, 40780, 40779); //@t
				return 0;
			}
			if(var_41_bool == 40774) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538846, 40769, 40777); //@t
				var_0_object->AddReply(538849, 40780, 40781); //@t
				return 0;
			}
			if(var_41_bool == 40775) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538844); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538845, 40780, 40776); //@t
				return 0;
			}
			if(var_41_bool == 40780) {
				func_1519(var_42_cvector, "Questioning");
				var_0_object->SetMessage(538848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538850, 40783, 40782); //@t
				return 0;
			}
			if(var_41_bool == 40783) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538852, 40788, 40786); //@t
				var_0_object->AddReply(538853, -1, 40787); //@t
				return 0;
			}
			if(var_41_bool == 40788) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538855, -1, 40789); //@t
				var_0_object->AddReply(538856, -1, 40790); //@t
				return 0;
			}
			if(var_41_bool == 15307) {
				func_1519(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(514070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514071, -1, 15308); //@t
				return 0;
			}
			if(var_41_bool == 40760) {
				func_1519(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(538831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538832, 40762, 40761); //@t
				return 0;
			}
			if(var_41_bool == 40762) {
				func_1519(var_42_cvector, "Grin");
				var_0_object->SetMessage(538833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538834, 15309, 40763); //@t
				return 0;
			}
			if(var_41_bool == 15309) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(514072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514073, -1, 15310); //@t
				return 0;
			}
			if(var_41_bool == 15278) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(514043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514044, 15280, 15279); //@t
				var_0_object->AddReply(538829, 15280, 40756); //@t
				return 0;
			}
			if(var_41_bool == 15280) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(514045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514046, 15282, 15281); //@t
				return 0;
			}
			if(var_41_bool == 15282) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(514047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514048, 15284, 15283); //@t
				var_0_object->AddReply(514060, 15297, 15296); //@t
				return 0;
			}
			if(var_41_bool == 15297) {
				func_1519(var_42_cvector, "Neutral");
				var_0_object->SetMessage(514061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514062, 15286, 15298); //@t
				var_0_object->AddReply(538830, 15286, 40758); //@t
				return 0;
			}
			if(var_41_bool == 15284) {
				func_1519(var_42_cvector, "Questioning");
				var_0_object->SetMessage(514049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514050, 15286, 15285); //@t
				var_0_object->AddReply(514055, 15291, 15290); //@t
				return 0;
			}
			if(var_41_bool == 15291) {
				func_1519(var_42_cvector, "Questioning");
				var_0_object->SetMessage(514056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514057, 15293, 15292); //@t
				return 0;
			}
			if(var_41_bool == 15293) {
				func_1519(var_42_cvector, "Questioning");
				var_0_object->SetMessage(514058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514059, 15286, 15294); //@t
				return 0;
			}
			if(var_41_bool == 15286) {
				func_1519(var_42_cvector, "Questioning");
				var_0_object->SetMessage(514051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514052, 15288, 15287); //@t
				return 0;
			}
			if(var_41_bool == 15288) {
				func_1519(var_42_cvector, "Grin");
				var_0_object->SetMessage(514053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514054, -1, 15289); //@t
				return 0;
			}
			var_3_string = true;
			bool var_443_bool;
			func_4119(var_443_bool);
			if(var_443_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x606";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_41_bool == 19139) {
				func_2309(var_42_cvector, "Neutral");
				var_0_object->SetMessage(518006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518007, 36191, 19140); //@t
				var_0_object->AddReply(534556, 36189, 36188); //@t
				return 0;
			}
			if(var_41_bool == 36189) {
				func_2309(var_42_cvector, "Neutral");
				var_0_object->SetMessage(534557); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534558, 36195, 36190); //@t
				return 0;
			}
			if(var_41_bool == 36195) {
				func_2309(var_42_cvector, "Neutral");
				var_0_object->SetMessage(534562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534563, -1, 36196); //@t
				var_0_object->AddReply(534565, -1, 36198); //@t
				var_0_object->AddReply(534564, -1, 36197); //@t
				return 0;
			}
			if(var_41_bool == 36191) {
				func_2309(var_42_cvector, "Neutral");
				var_0_object->SetMessage(534559); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534560, 36189, 36192); //@t
				return 0;
			}
			var_3_string = true;
			bool var_98_bool;
			func_4119(var_98_bool);
			if(var_98_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x91c";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_42_cvector == 36133) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4127();
			}
			if(var_42_cvector == 38442) {
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_4127();
			}
			if(var_42_cvector == 41671) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_4127();
			}
			if(var_41_bool == 36126) {
				func_2595(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(534481); //@t
				var_0_object->ClearReplies(); //@t
				bool var_108_bool = false;
				bool var_109_bool;
				func_4269(var_1_object);
				if(var_109_bool != 0) {
					bool var_117_bool;
					func_4281(var_117_bool, var_1_object);
					if(var_117_bool != 0)
						var_108_bool = true;
				}
				if(var_108_bool != 0)
					var_0_object->AddReply(534482, 38410, 36127); //@t
				var_0_object->AddReply(534489, -1, 36134); //@t
				var_0_object->AddReply(536587, -1, 38409); //@t
				return 0;
			}
			if(var_41_bool == 38410) {
				func_2595(var_42_cvector, "Suspicion");
				var_0_object->SetMessage(536588); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536589, 38412, 38411); //@t
				var_0_object->AddReply(536598, 38421, 38420); //@t
				return 0;
			}
			if(var_41_bool == 38421) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536600, 36128, 38422); //@t
				return 0;
			}
			if(var_41_bool == 38412) {
				func_2595(var_42_cvector, "Grin");
				var_0_object->SetMessage(536590); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536591, 38414, 38413); //@t
				var_0_object->AddReply(536601, 38418, 38424); //@t
				return 0;
			}
			if(var_41_bool == 38414) {
				func_2595(var_42_cvector, "Grin");
				var_0_object->SetMessage(536592); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536595, 38418, 38417); //@t
				var_0_object->AddReply(539710, 41666, 41668); //@t
				return 0;
			}
			if(var_41_bool == 38418) {
				func_2595(var_42_cvector, "Grin");
				var_0_object->SetMessage(536596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536610, 38437, 38436); //@t
				var_0_object->AddReply(536612, 38437, 38438); //@t
				return 0;
			}
			if(var_41_bool == 38437) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536603, 36130, 38427); //@t
				var_0_object->AddReply(534484, 36132, 36129); //@t
				return 0;
			}
			if(var_41_bool == 36130) {
				func_2595(var_42_cvector, "Doubt");
				var_0_object->SetMessage(534485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534486, 36132, 36131); //@t
				var_0_object->AddReply(536605, 41666, 38430); //@t
				return 0;
			}
			if(var_41_bool == 41666) {
				func_2595(var_42_cvector, "Doubt");
				var_0_object->SetMessage(539708); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539709, 38431, 41667); //@t
				var_0_object->AddReply(536593, 38416, 38415); //@t
				return 0;
			}
			if(var_41_bool == 38416) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536594); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539711, 36132, 41669); //@t
				return 0;
			}
			if(var_41_bool == 38431) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536607, 38433, 38432); //@t
				var_0_object->AddReply(539712, -1, 41671); //@t
				return 0;
			}
			if(var_41_bool == 38433) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536609, 36128, 38434); //@t
				return 0;
			}
			if(var_41_bool == 36132) {
				func_2595(var_42_cvector, "Doubt");
				var_0_object->SetMessage(534487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536597, 36128, 38419); //@t
				return 0;
			}
			if(var_41_bool == 36128) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(534483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534488, -1, 36133); //@t
				var_0_object->AddReply(536613, 38441, 38440); //@t
				return 0;
			}
			if(var_41_bool == 38441) {
				func_2595(var_42_cvector, "Neutral");
				var_0_object->SetMessage(536614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536615, -1, 38442); //@t
				return 0;
			}
			var_3_string = true;
			bool var_260_bool;
			func_4119(var_260_bool);
			if(var_260_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa3a";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_41_bool == 36960) {
				func_3143(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_41_bool == 36962) {
				func_3143(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_41_bool == 36964) {
				func_3143(var_42_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_94_bool;
			func_4119(var_94_bool);
			if(var_94_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5e";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4020();
			if(var_41_int == 42551) {
				func_3397(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_4119(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd5c";
	
	}

}


maintask task_16
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_3465(var_40_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, int var_41_int)
	{
		if(var_41_int == 10) {
			func_3530();
			bool var_45_bool = false;
			bool var_46_bool;
			func_3744(var_46_bool);
			if(var_46_bool != 0) {
				bool var_49_bool;
				func_3499(var_49_bool);
				if(var_49_bool != 0)
					var_45_bool = true;
			}
			if(var_45_bool != 0) {
				bool var_66_bool;
				func_3479(var_66_bool);
				if(var_66_bool != 0) {
					bool var_85_bool; object var_86_object;
					object var_87_object;
					func_4027(var_87_object);
					var_87_object = var_86_object;
					func_3894(var_85_bool, var_86_object);
				}
			} else {
				func_3494(var_41_int);
				func_3521();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_3712();
		func_3530();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		@StopGroup0();
		func_3530();
		func_3974("Neutral");
		func_3521();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, bool var_41_bool)
	{
		if(var_41_bool != 0)
			func_3521();
		else
			func_3974("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, object var_41_object)
	{
		bool var_43_bool;
		@IsOverrideActive(var_43_bool);
		if(!var_43_bool) { //@nz
			disable OnUse;
			func_3712();
			bool var_45_bool; object var_46_object;
			var_41_object = var_46_object;
			func_3735(var_45_bool, var_46_object);
			enable OnUse;
			object var_59_object;
			var_41_object = var_59_object;
			func_4590(var_59_object);
			func_3974("Neutral");
			func_3530();
			func_3521();
		}
	}

}


void func_0(object var_0_object, int var_296_int, object var_297_object)
{
	var_0_object = var_297_object;
	bool var_307_bool; object var_308_object;
	var_297_object = var_308_object;
	func_3749(var_307_bool, var_308_object, 70.0);
	if(!var_307_bool) { //@nz
		var_296_int = -2;
		return 8;
	}
	object var_303_object;
	@CreateDialog(var_303_object);
	int var_311_int;
	func_4113(var_311_int);
	var_303_object->SetNPCName(var_311_int);
	int var_312_int;
	func_4111(var_312_int);
	var_303_object->SetNPCDescription(var_312_int);
	string var_313_string;
	func_4115(var_313_string);
	var_303_object->SetPhoto(var_313_string);
	string var_314_string;
	func_4117(var_314_string);
	var_303_object->SetPhoto2(var_314_string);
	int var_315_int;
	func_4573(var_315_int);
	var_303_object->SetPlayerName(var_315_int);
	bool var_304_bool;
	@IsOverrideActive(var_304_bool);
	if(var_304_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	@DoDialog(var_303_object);
	bool var_317_bool; object var_318_object;
	object var_319_object;
	func_4027(var_319_object);
	var_319_object = var_318_object;
	func_3836(var_317_bool, var_318_object);
	object var_320_object; object var_321_object;
	var_297_object = var_320_object;
	var_303_object = var_321_object;
	TaskCall(1);
	func_81(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object);
	TaskReturn();
	bool var_306_bool;
	var_303_object->IsDialogEnd(var_306_bool);
	
	for(;;) {
		var_371_bool = !var_306_bool; //@nz
		if(var_371_bool == 0) goto Label_70;
		@sync();
		var_303_object->IsDialogEnd(var_306_bool);
	}
	
Label_70:
	object var_372_object;
	var_297_object = var_372_object;
	func_3818();
	@StopDialog(var_303_object);
	var_303_object->GetReturnValue(-1);
	int var_305_int = var_296_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4357(bool var_553_bool)
{
	int var_555_int;
	func_4043(var_555_int, "ood9Xan1");
	if(var_555_int == 0) {
		var_553_bool = true;
		return 0;
	}
	var_553_bool = false;
}


// @pe
void func_2309(object var_2_object, string var_238_string)
{
	bool var_239_bool;
	func_4119(var_239_bool);
	if(!var_239_bool) //@nz
		return 0;
	if(var_238_string == var_2_object)
		return 0;
	string var_242_string; bool var_243_bool;
	var_238_string = var_242_string;
	if(var_238_string == "")
		var_243_bool = false;
	else
		var_243_bool = true;
	func_3990(var_242_string, var_243_bool);
	var_2_object = var_238_string;
	
}


// @pe
void func_3080(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_746_object, object var_747_object)
{
	var_0_object = var_747_object;
	var_1_object = var_746_object;
	var_3_string = false;
	if(1 != 0) {
		func_3143(var_747_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_3113;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc0c";
	}
Label_3113:
	bool var_771_bool;
	func_4119(var_771_bool);
	if(var_771_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3974(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3142;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3142:
		return 0;

	}
	
}


// @pe
void func_3339(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_805_object, object var_806_object)
{
	var_0_object = var_806_object;
	var_1_object = var_805_object;
	var_3_string = false;
	if(1 != 0) {
		func_3397(var_806_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_3367;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd0f";
	}
Label_3367:
	bool var_827_bool;
	func_4119(var_827_bool);
	if(var_827_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3974(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3396;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3396:
		return 0;

	}
	
}


void func_1294(object var_0_object, int var_515_int, object var_516_object)
{
	var_0_object = var_516_object;
	bool var_526_bool; object var_527_object;
	var_516_object = var_527_object;
	func_3749(var_526_bool, var_527_object, 70.0);
	if(!var_526_bool) { //@nz
		var_515_int = -2;
		return 8;
	}
	object var_522_object;
	@CreateDialog(var_522_object);
	int var_530_int;
	func_4113(var_530_int);
	var_522_object->SetNPCName(var_530_int);
	int var_531_int;
	func_4111(var_531_int);
	var_522_object->SetNPCDescription(var_531_int);
	string var_532_string;
	func_4115(var_532_string);
	var_522_object->SetPhoto(var_532_string);
	string var_533_string;
	func_4117(var_533_string);
	var_522_object->SetPhoto2(var_533_string);
	int var_534_int;
	func_4573(var_534_int);
	var_522_object->SetPlayerName(var_534_int);
	bool var_523_bool;
	@IsOverrideActive(var_523_bool);
	if(var_523_bool != 0) {
		var_515_int = -2;
		return 8;
	}
	@DoDialog(var_522_object);
	bool var_536_bool; object var_537_object;
	object var_538_object;
	func_4027(var_538_object);
	var_538_object = var_537_object;
	func_3836(var_536_bool, var_537_object);
	object var_539_object; object var_540_object;
	var_516_object = var_539_object;
	var_522_object = var_540_object;
	TaskCall(7);
	func_1375(var_541_object, var_542_object, var_543_string, var_544_bool, var_539_object, var_540_object);
	TaskReturn();
	bool var_525_bool;
	var_522_object->IsDialogEnd(var_525_bool);
	
	for(;;) {
		var_641_bool = !var_525_bool; //@nz
		if(var_641_bool == 0) goto Label_1364;
		@sync();
		var_522_object->IsDialogEnd(var_525_bool);
	}
	
Label_1364:
	object var_642_object;
	var_516_object = var_642_object;
	func_3818();
	@StopDialog(var_522_object);
	var_522_object->GetReturnValue(-1);
	int var_524_int = var_515_int;
}
EMIT "Stack[-4] = 0";


void func_4111(int var_124_int)
{
	var_124_int = 515536;
}


void func_4113(int var_123_int)
{
	var_123_int = 502861;
}


// @pe
void func_4369(bool var_595_bool)
{
	int var_597_int;
	func_4043(var_597_int, "d9q01");
	if(var_597_int == 2)
		var_595_bool = true;
	var_595_bool = false;
}


void func_4115(string var_125_string)
{
	var_125_string = "ui/NPC_Han.png";
}


void func_4117(string var_126_string)
{
	var_126_string = "ui/NPC_Han_b.png";
}


void func_4119(bool var_118_bool)
{
	var_118_bool = true;
}


// @pe
void func_4121(void)
{
	@SetVariable("ood7Han1", 1);
}


// @pe
void func_4381(bool var_586_bool, object var_587_object)
{
	object var_589_object;
	var_587_object = var_589_object;
	bool var_588_bool;
	func_4401(var_588_bool, var_589_object);
	if(var_588_bool != 0) {
		var_586_bool = true;
		return 0;
	}
	var_586_bool = false;
}


// @pe
void func_4127(void)
{
	@SetVariable("d11q05", 2);
	func_4430();
	bool var_74_bool;
	func_4055(var_74_bool, "quest_d11_05", "place_enemy_before");
}


// @pe
void func_2595(object var_2_object, string var_676_string)
{
	bool var_677_bool;
	func_4119(var_677_bool);
	if(!var_677_bool) //@nz
		return 0;
	if(var_676_string == var_2_object)
		return 0;
	string var_680_string; bool var_681_bool;
	var_676_string = var_680_string;
	if(var_676_string == "")
		var_681_bool = false;
	else
		var_681_bool = true;
	func_3990(var_680_string, var_681_bool);
	var_2_object = var_676_string;
	
}


// @pe
void func_4391(bool var_605_bool, object var_606_object)
{
	object var_608_object;
	var_606_object = var_608_object;
	bool var_607_bool;
	func_4412(var_607_bool, var_608_object);
	if(var_607_bool != 0) {
		var_605_bool = true;
		return 0;
	}
	var_605_bool = false;
}


// @pe
void func_1064(object var_2_object, string var_480_string)
{
	bool var_481_bool;
	func_4119(var_481_bool);
	if(!var_481_bool) //@nz
		return 0;
	if(var_480_string == var_2_object)
		return 0;
	string var_484_string; bool var_485_bool;
	var_480_string = var_484_string;
	if(var_480_string == "")
		var_485_bool = false;
	else
		var_485_bool = true;
	func_3990(var_484_string, var_485_bool);
	var_2_object = var_480_string;
	
}


// @pe
void func_4141(void)
{
	bool var_88_bool;
	func_4055(var_88_bool, "quest_d9_01", "teleport_to_mnogogrannik");
}


void func_4401(bool var_588_bool, object var_589_object)
{
	int var_591_int;
	var_589_object->GetItemCountOfType(var_591_int, "Rifle");
	if(var_591_int >= 5)
		var_588_bool = true;
	var_588_bool = false;
}


// @pe
void func_4148(void)
{
	int var_117_int;
	func_4043(var_117_int, "map_chertez_state");
	if(var_117_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_3894(bool var_147_bool, object var_148_object)
{
	string var_154_string; bool var_156_bool; int var_157_int; string var_158_string;
	var_154_string = "c";
	int var_155_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_148_object->HasProperty((var_154_string + (var_155_int + 1)), var_156_bool);
			if(!var_156_bool) { //@nz
			} else {
				var_155_int += 1;
			}
		}
		if(!var_155_int) { //@nz
			var_147_bool = false;
			return 10;
		}
		var_157_int = 0;
		if(var_155_int > 1)
			@irand(var_157_int, var_155_int);
		var_148_object->GetProperty((var_154_string + (var_157_int + 1)), var_158_string);
		bool var_170_bool; string var_171_string;
		var_158_string = var_171_string;
		func_4005(var_170_bool, var_171_string);
		var_170_bool = var_147_bool;
		return 10;

	}
}


void func_3641(void)
{
	bool var_53_bool; int var_54_int; int var_55_int; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_3744(var_57_bool);
	if(!var_57_bool) //@nz
		return 12;
	int var_59_int;
	func_4094(var_59_int);
	int var_51_int;
	var_59_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_72_bool = false;
		if(var_52_int < 5) {
			bool var_75_bool;
			func_3744(var_75_bool);
			if(var_75_bool != 0)
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			if(!var_51_int) { //@nz
				@Sleep(3, var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			@irand(var_54_int, var_51_int);
			@irand(var_55_int, 5);
			if(var_55_int != 0)
				var_54_int = 0;
			string var_86_string; int var_87_int;
			var_54_int = var_87_int;
			func_4087(var_86_string, var_87_int);
			@PlayAnimation("all", var_86_string);
			@WaitForAnimEnd(var_56_bool);
			var_88_bool = !var_56_bool; //@nz
			if(var_88_bool == 0) goto Label_3696;
			goto Label_3707;
			}
				Label_3696:
					bool var_79_bool;
					func_3710(var_79_bool);
					var_80_bool = !var_79_bool; //@nz
					if(var_80_bool == 0) goto Label_3702;
			}
		}
	Label_3707:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3702:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


void func_4412(bool var_607_bool, object var_608_object)
{
	int var_610_int;
	var_608_object->GetItemCountOfType(var_610_int, "Rifle");
	bool var_612_bool = false;
	if(var_610_int > 0) {
		if(var_610_int < 5)
			var_612_bool = true;
	}
	if(var_612_bool != 0)
		var_607_bool = true;
	var_607_bool = false;
}


// @pe
void func_4165(object var_128_object)
{
	object var_132_object;
	func_4523(var_132_object);
	object var_129_object;
	var_132_object = var_129_object;
	func_4540(var_129_object, "pt_map_aglaja", (float)-1);
	object var_158_object;
	func_4523(var_158_object);
	var_128_object->ShowMap(var_158_object);
}


void func_582(object var_0_object, int var_375_int, object var_376_object)
{
	var_0_object = var_376_object;
	bool var_386_bool; object var_387_object;
	var_376_object = var_387_object;
	func_3749(var_386_bool, var_387_object, 70.0);
	if(!var_386_bool) { //@nz
		var_375_int = -2;
		return 8;
	}
	object var_382_object;
	@CreateDialog(var_382_object);
	int var_390_int;
	func_4113(var_390_int);
	var_382_object->SetNPCName(var_390_int);
	int var_391_int;
	func_4111(var_391_int);
	var_382_object->SetNPCDescription(var_391_int);
	string var_392_string;
	func_4115(var_392_string);
	var_382_object->SetPhoto(var_392_string);
	string var_393_string;
	func_4117(var_393_string);
	var_382_object->SetPhoto2(var_393_string);
	int var_394_int;
	func_4573(var_394_int);
	var_382_object->SetPlayerName(var_394_int);
	bool var_383_bool;
	@IsOverrideActive(var_383_bool);
	if(var_383_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	@DoDialog(var_382_object);
	bool var_396_bool; object var_397_object;
	object var_398_object;
	func_4027(var_398_object);
	var_398_object = var_397_object;
	func_3836(var_396_bool, var_397_object);
	object var_399_object; object var_400_object;
	var_376_object = var_399_object;
	var_382_object = var_400_object;
	TaskCall(3);
	func_663(var_401_object, var_402_object, var_403_string, var_404_bool, var_399_object, var_400_object);
	TaskReturn();
	bool var_385_bool;
	var_382_object->IsDialogEnd(var_385_bool);
	
	for(;;) {
		var_435_bool = !var_385_bool; //@nz
		if(var_435_bool == 0) goto Label_652;
		@sync();
		var_382_object->IsDialogEnd(var_385_bool);
	}
	
Label_652:
	object var_436_object;
	var_376_object = var_436_object;
	func_3818();
	@StopDialog(var_382_object);
	var_382_object->GetReturnValue(-1);
	int var_384_int = var_375_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3143(object var_2_object, string var_753_string)
{
	bool var_754_bool;
	func_4119(var_754_bool);
	if(!var_754_bool) //@nz
		return 0;
	if(var_753_string == var_2_object)
		return 0;
	string var_757_string; bool var_758_bool;
	var_753_string = var_757_string;
	if(var_753_string == "")
		var_758_bool = false;
	else
		var_758_bool = true;
	func_3990(var_757_string, var_758_bool);
	var_2_object = var_753_string;
	
}


// @pe
void func_3397(object var_2_object, string var_812_string)
{
	bool var_813_bool;
	func_4119(var_813_bool);
	if(!var_813_bool) //@nz
		return 0;
	if(var_812_string == var_2_object)
		return 0;
	string var_816_string; bool var_817_bool;
	var_812_string = var_816_string;
	if(var_812_string == "")
		var_817_bool = false;
	else
		var_817_bool = true;
	func_3990(var_816_string, var_817_bool);
	var_2_object = var_812_string;
	
}


void func_4430(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 684, 2, 534499);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_4495(var_56_bool, var_57_object, 682);
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_320_object, object var_321_object)
{
	var_0_object = var_321_object;
	var_1_object = var_320_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_327_bool = false;
		bool var_328_bool;
		func_4321(var_1_object);
		if(var_328_bool != 0) {
			bool var_336_bool;
			func_4316(var_1_object);
			if(var_336_bool != 0)
				var_327_bool = true;
		}
		if(var_327_bool != 0) {
			object var_338_object; object var_339_object;
			var_338_object = var_1_object;
			var_339_object = var_0_object;
			func_4193();
			func_178(var_321_object, "Questioning");
			var_0_object->SetMessage(510420); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(510421, 11490, 11489); //@t
			var_0_object->AddReply(534384, 36001, 35999); //@t
		} else {
					func_178(var_321_object, "Neutral");
					var_0_object->SetMessage(534418); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(534419, -1, 36046); //@t
					var_0_object->AddReply(536096, -1, 37848); //@t
		}
	}
	for(;;) {
		bool var_355_bool;
		func_4119(var_355_bool);
		if(var_355_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3974(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_177;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_177:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_4181(void)
{
	@SetVariable("ood9Xan3", 1);
}


// @pe
void func_4187(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_3931(bool var_178_bool, object var_179_object)
{
	bool var_187_bool; int var_188_int; string var_189_string;
	int var_191_int;
	func_4072(var_191_int);
	string var_185_string = ("d" + var_191_int) + "m";
	int var_186_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_179_object->HasProperty((var_185_string + (var_186_int + 1)), var_187_bool);
			if(!var_187_bool) { //@nz
			} else {
				var_186_int += 1;
			}
		}
		if(!var_186_int) { //@nz
			var_178_bool = false;
			return 10;
		}
		var_188_int = 0;
		if(var_186_int > 1)
			@irand(var_188_int, var_186_int);
		var_179_object->GetProperty((var_185_string + (var_188_int + 1)), var_189_string);
		bool var_210_bool; string var_211_string;
		var_189_string = var_211_string;
		func_4005(var_210_bool, var_211_string);
		var_210_bool = var_178_bool;
		return 10;

	}
}


void func_4443(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 679, 2, 534420);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_4495(var_72_bool, var_73_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1375(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_539_object, object var_540_object)
{
	var_0_object = var_540_object;
	var_1_object = var_539_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_546_bool = false;
		bool var_547_bool;
		func_4345(var_1_object);
		if(var_547_bool != 0) {
			bool var_553_bool;
			func_4357(var_1_object);
			if(var_553_bool != 0)
				var_546_bool = true;
		}
		if(var_546_bool != 0) {
			object var_559_object; object var_560_object;
			var_559_object = var_1_object;
			var_560_object = var_0_object;
			func_4224();
			func_1519(var_540_object, "Neutral");
			var_0_object->SetMessage(514041); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514042, 15278, 15277); //@t
		} else {
					func_1519(var_540_object, "Suspicion");
					var_0_object->SetMessage(514063); //@t
					var_0_object->ClearReplies(); //@t
					bool var_585_bool = false;
					bool var_586_bool;
					func_4381(var_586_bool, var_1_object);
					if(var_586_bool != 0) {
						bool var_595_bool;
						func_4369(var_1_object);
						if(var_595_bool != 0)
							var_585_bool = true;
					}
					if(var_585_bool != 0)
						var_0_object->AddReply(514068, 40760, 15305); //@t
					bool var_604_bool = false;
					bool var_605_bool;
					func_4391(var_605_bool, var_1_object);
					if(var_605_bool != 0) {
						bool var_617_bool;
						func_4369(var_1_object);
						if(var_617_bool != 0)
							var_604_bool = true;
					}
					if(var_604_bool != 0)
						var_0_object->AddReply(514069, 15307, 15306); //@t
					bool var_622_bool = false;
					bool var_623_bool;
					func_4292(var_1_object);
					if(var_623_bool != 0) {
						bool var_629_bool;
						func_4304(var_1_object);
						if(var_629_bool != 0)
							var_622_bool = true;
					}
					if(var_622_bool != 0)
						var_0_object->AddReply(538835, 40765, 40764); //@t
					var_0_object->AddReply(514064, -1, 15300); //@t
		}
	}
	for(;;) {
		bool var_575_bool;
		func_4119(var_575_bool);
		if(var_575_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3974(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1518;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1518:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x563";


// @pe
void func_4193(void)
{
}


void func_4195(void)
{
	@SetVariable("d3q02", 4);
	object var_53_object;
	func_4523(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4067(var_64_float);
	var_50_object->AddMark("d3q02HanGotoMladVlad", "pt_map_mladvlad", 0, 511386, var_64_float);
	func_4443();
}
EMIT "Stack[-1] = 0";


void func_4456(void)
{
	object var_97_object;
	@CreateDiaryEntry(var_97_object, 185, 1, 515448);
	bool var_101_bool; object var_102_object;
	var_97_object = var_102_object;
	func_4495(var_101_bool, var_102_object, 182);
}
EMIT "Stack[-1] = 0";


void func_4469(void)
{
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 184, 1, 515447);
	bool var_56_bool; object var_57_object;
	var_52_object = var_57_object;
	func_4495(var_56_bool, var_57_object, 182);
}
EMIT "Stack[-1] = 0";


void func_2170(object var_0_object, int var_64_int, object var_65_object)
{
	var_0_object = var_65_object;
	bool var_75_bool; object var_76_object;
	var_65_object = var_76_object;
	func_3749(var_75_bool, var_76_object, 70.0);
	if(!var_75_bool) { //@nz
		var_64_int = -2;
		return 8;
	}
	object var_71_object;
	@CreateDialog(var_71_object);
	int var_123_int;
	func_4113(var_123_int);
	var_71_object->SetNPCName(var_123_int);
	int var_124_int;
	func_4111(var_124_int);
	var_71_object->SetNPCDescription(var_124_int);
	string var_125_string;
	func_4115(var_125_string);
	var_71_object->SetPhoto(var_125_string);
	string var_126_string;
	func_4117(var_126_string);
	var_71_object->SetPhoto2(var_126_string);
	int var_127_int;
	func_4573(var_127_int);
	var_71_object->SetPlayerName(var_127_int);
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	@DoDialog(var_71_object);
	bool var_136_bool; object var_137_object;
	object var_138_object;
	func_4027(var_138_object);
	var_138_object = var_137_object;
	func_3836(var_136_bool, var_137_object);
	object var_231_object; object var_232_object;
	var_65_object = var_231_object;
	var_71_object = var_232_object;
	TaskCall(9);
	func_2251(var_233_object, var_234_object, var_235_string, var_236_bool, var_231_object, var_232_object);
	TaskReturn();
	bool var_74_bool;
	var_71_object->IsDialogEnd(var_74_bool);
	
	for(;;) {
		var_280_bool = !var_74_bool; //@nz
		if(var_280_bool == 0) goto Label_2240;
		@sync();
		var_71_object->IsDialogEnd(var_74_bool);
	}
	
Label_2240:
	object var_281_object;
	var_65_object = var_281_object;
	func_3818();
	@StopDialog(var_71_object);
	var_71_object->GetReturnValue(-1);
	int var_73_int = var_64_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4218(void)
{
	@SetVariable("ood8Han1", 1);
}


void func_3710(bool var_79_bool)
{
	var_79_bool = true;
}


void func_895(object var_0_object, int var_439_int, object var_440_object)
{
	var_0_object = var_440_object;
	bool var_450_bool; object var_451_object;
	var_440_object = var_451_object;
	func_3749(var_450_bool, var_451_object, 70.0);
	if(!var_450_bool) { //@nz
		var_439_int = -2;
		return 8;
	}
	object var_446_object;
	@CreateDialog(var_446_object);
	int var_454_int;
	func_4113(var_454_int);
	var_446_object->SetNPCName(var_454_int);
	int var_455_int;
	func_4111(var_455_int);
	var_446_object->SetNPCDescription(var_455_int);
	string var_456_string;
	func_4115(var_456_string);
	var_446_object->SetPhoto(var_456_string);
	string var_457_string;
	func_4117(var_457_string);
	var_446_object->SetPhoto2(var_457_string);
	int var_458_int;
	func_4573(var_458_int);
	var_446_object->SetPlayerName(var_458_int);
	bool var_447_bool;
	@IsOverrideActive(var_447_bool);
	if(var_447_bool != 0) {
		var_439_int = -2;
		return 8;
	}
	@DoDialog(var_446_object);
	bool var_460_bool; object var_461_object;
	object var_462_object;
	func_4027(var_462_object);
	var_462_object = var_461_object;
	func_3836(var_460_bool, var_461_object);
	object var_463_object; object var_464_object;
	var_440_object = var_463_object;
	var_446_object = var_464_object;
	TaskCall(5);
	func_976(var_465_object, var_466_object, var_467_string, var_468_bool, var_463_object, var_464_object);
	TaskReturn();
	bool var_449_bool;
	var_446_object->IsDialogEnd(var_449_bool);
	
	for(;;) {
		var_511_bool = !var_449_bool; //@nz
		if(var_511_bool == 0) goto Label_965;
		@sync();
		var_446_object->IsDialogEnd(var_449_bool);
	}
	
Label_965:
	object var_512_object;
	var_440_object = var_512_object;
	func_3818();
	@StopDialog(var_446_object);
	var_446_object->GetReturnValue(-1);
	int var_448_int = var_439_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4224(void)
{
	@SetVariable("ood9Xan1", 1);
}


void func_3712(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4482(object var_65_object)
{
	object var_67_object;
	@GetDiaryRoot(var_67_object);
	if(!var_67_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_65_object = false;
	}
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_3717(float var_56_float, object var_57_object)
{
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	cvector var_62_cvector;
	var_57_object->GetPosition(var_62_cvector);
	var_56_float = (var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector);
}


// @pe
void func_4230(void)
{
	@SetVariable("d9q01", 2);
	func_4469();
}


void func_2437(object var_0_object, int var_645_int, object var_646_object)
{
	var_0_object = var_646_object;
	bool var_656_bool; object var_657_object;
	var_646_object = var_657_object;
	func_3749(var_656_bool, var_657_object, 70.0);
	if(!var_656_bool) { //@nz
		var_645_int = -2;
		return 8;
	}
	object var_652_object;
	@CreateDialog(var_652_object);
	int var_660_int;
	func_4113(var_660_int);
	var_652_object->SetNPCName(var_660_int);
	int var_661_int;
	func_4111(var_661_int);
	var_652_object->SetNPCDescription(var_661_int);
	string var_662_string;
	func_4115(var_662_string);
	var_652_object->SetPhoto(var_662_string);
	string var_663_string;
	func_4117(var_663_string);
	var_652_object->SetPhoto2(var_663_string);
	int var_664_int;
	func_4573(var_664_int);
	var_652_object->SetPlayerName(var_664_int);
	bool var_653_bool;
	@IsOverrideActive(var_653_bool);
	if(var_653_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	@DoDialog(var_652_object);
	bool var_666_bool; object var_667_object;
	object var_668_object;
	func_4027(var_668_object);
	var_668_object = var_667_object;
	func_3836(var_666_bool, var_667_object);
	object var_669_object; object var_670_object;
	var_646_object = var_669_object;
	var_652_object = var_670_object;
	TaskCall(11);
	func_2518(var_671_object, var_672_object, var_673_string, var_674_bool, var_669_object, var_670_object);
	TaskReturn();
	bool var_655_bool;
	var_652_object->IsDialogEnd(var_655_bool);
	
	for(;;) {
		var_718_bool = !var_655_bool; //@nz
		if(var_718_bool == 0) goto Label_2507;
		@sync();
		var_652_object->IsDialogEnd(var_655_bool);
	}
	
Label_2507:
	object var_719_object;
	var_646_object = var_719_object;
	func_3818();
	@StopDialog(var_652_object);
	var_652_object->GetReturnValue(-1);
	int var_654_int = var_645_int;
}
EMIT "Stack[-4] = 0";


void func_3974(string var_264_string)
{
	bool var_268_bool; float var_269_float; float var_270_float;
	@lshHasAnimation(var_268_bool, var_264_string);
	if(var_268_bool != 0) {
		@lshGetAnimTimes(var_264_string, var_269_float, var_270_float);
		@lshPlayAnimation(var_269_float, var_270_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_264_string);
	}
	
}


void func_3465(object var_0_object)
{
	bool var_41_bool;
	func_3744(var_41_bool);
	if(!var_41_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3641();
	}
}
EMIT "Return(); Pop(0)";


void func_3725(bool var_49_bool, cvector var_50_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	bool var_56_bool;
	@Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
}


void func_4239(object var_80_object)
{
	int var_83_int;
	var_80_object->RemoveItemByType(var_83_int, "Rifle", 5);
	var_80_object->SelectWeapon();
}


void func_4495(bool var_56_bool, object var_57_object, int var_58_int)
{
	object var_65_object;
	func_4482(var_65_object);
	object var_62_object;
	var_65_object = var_62_object;
	object var_63_object;
	var_62_object->Find(var_58_int, var_63_object);
	if(!var_63_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_58_int);
		var_56_bool = false;
	}
	var_63_object->AddChild(var_57_object);
	@SendWorldWndMessage(7);
	int var_64_int;
	var_57_object->GetCategory(var_64_int);
	@SetDiarySection(var_64_int);
	var_56_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3990(string var_242_string, bool var_243_bool)
{
	bool var_249_bool; float var_250_float; float var_251_float;
	@lshHasAnimation(var_249_bool, var_242_string);
	if(var_249_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_250_float, var_251_float);
		@lshPlayAnimation(var_250_float, var_251_float, var_243_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


// @pe
void func_663(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_399_object, object var_400_object)
{
	var_0_object = var_400_object;
	var_3_string = false;
	if(1 != 0) {
		func_726(var_400_object, "Suspicion");
		var_0_object->SetMessage(512232); //@t
		var_0_object->ClearReplies(); //@t
		bool var_415_bool;
		func_4257(var_399_object);
		if(var_415_bool != 0)
			var_0_object->AddReply(512233, 13389, 13388); //@t
		var_0_object->AddReply(533144, -1, 34662); //@t
		goto Label_696;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29b";
	}
Label_696:
	bool var_427_bool;
	func_4119(var_427_bool);
	if(var_427_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3974(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_725;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_725:
		return 0;

	}
	
}


// @pe
void func_4247(void)
{
	func_4456();
	bool var_104_bool;
	func_4055(var_104_bool, "quest_d9_01", "completed");
}


void func_3735(bool var_45_bool, object var_46_object)
{
	cvector var_48_cvector;
	var_46_object->GetPosition(var_48_cvector);
	bool var_49_bool; cvector var_50_cvector;
	var_48_cvector = var_50_cvector;
	func_3725(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
}


void func_3479(bool var_66_bool)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_66_bool = false;
	bool var_71_bool; object var_72_object;
	var_68_object = var_72_object;
	func_3735(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
}
EMIT "Stack[-1] = 0";


void func_3744(bool var_41_bool)
{
	bool var_43_bool;
	@IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
}


// @pe
void func_4257(bool var_415_bool)
{
	int var_417_int;
	func_4043(var_417_int, "ood7Han1");
	if(var_417_int == 0) {
		var_415_bool = true;
		return 0;
	}
	var_415_bool = false;
}


void func_3749(bool var_75_bool, object var_76_object, float var_77_float)
{
	cvector var_88_cvector; bool var_95_bool;
	var_76_object->GetPosition(var_88_cvector);
	float var_87_float;
	var_76_object->GetEyesHeight(var_87_float);
	var_96_float = GetByIndex(var_88_cvector, 1);
	SetByIndex(var_88_cvector, 1) = (var_96_float + var_87_float);
	cvector var_89_cvector;
	@GetPosition(var_89_cvector);
	@GetEyesHeight(var_87_float);
	var_97_float = GetByIndex(var_89_cvector, 1);
	SetByIndex(var_89_cvector, 1) = (var_97_float + var_87_float);
	cvector var_90_cvector = var_88_cvector - var_89_cvector;
	var_98_float = GetByIndex(var_90_cvector, 1);
	SetByIndex(var_90_cvector, 1) = (float)0;
	var_100_float = sqrt(var_90_cvector | var_90_cvector);
	var_90_cvector /= var_100_float;
	cvector var_91_cvector = -var_90_cvector;
	cvector var_102_cvector;
	func_4033(var_102_cvector, (var_91_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_92_cvector = ((var_90_cvector * var_77_float) + (var_102_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_94_bool;
	@IsOverrideActive(var_94_bool);
	if(var_94_bool != 0)
		var_75_bool = false;
	@StopWorld();
	@CameraTransit((var_89_cvector + var_92_cvector), var_91_cvector, true);
	var_116_float = GetByIndex(var_92_cvector, 0);
	var_117_float = GetByIndex(var_92_cvector, 2);
	@Rotate(var_116_float, var_117_float);
	bool var_118_bool;
	func_4119(var_118_bool);
	if(var_118_bool != 0) {
	} else {
		@HasAnimationTrack(var_95_bool, "head");
		if(var_95_bool == 0) goto Label_3812;
		@LookAsyncCamera("head");
	}
Label_3812:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_75_bool = true;
	
}


void func_4005(bool var_170_bool, string var_171_string)
{
	bool var_173_bool;
	bool var_174_bool;
	func_4119(var_174_bool);
	if(var_174_bool != 0) {
		@lshHasSpeech(var_173_bool, var_171_string);
		if(var_173_bool != 0) {
			@lshPlaySpeech(var_171_string);
			var_170_bool = true;
		}
	}
	var_170_bool = false;
}


void func_3494(object var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_118_float, var_119_float);
}


void func_3499(bool var_49_bool)
{
	object var_52_object;
	@FindActor(var_52_object, "player");
	if(!var_52_object) { //@nz
		var_49_bool = false;
		return 4;
	}
	float var_56_float; object var_57_object;
	func_3717(var_56_float, var_57_object);
	if(var_56_float > 90000.0) {
		var_49_bool = false;
		return 4;
	}
	bool var_53_bool;
	@CanSee(var_53_bool, var_57_object);
	var_53_bool = var_49_bool;
}
EMIT "Stack[-2] = 0";


void func_4523(object var_132_object)
{
	object var_135_object; object var_136_object;
	@GetMainOutdoorScene(var_135_object);
	if(var_135_object == null) {
		@Trace("Can't find main outdoor scene");
		var_136_object = null;
		var_136_object = var_132_object;
	}
	var_135_object->GetMap(var_136_object);
	var_136_object = var_132_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4269(bool var_686_bool)
{
	int var_688_int;
	func_4043(var_688_int, "d11q05");
	if(var_688_int == 1)
		var_686_bool = true;
	var_686_bool = false;
}


// @pe
void func_178(object var_2_object, string var_340_string)
{
	bool var_341_bool;
	func_4119(var_341_bool);
	if(!var_341_bool) //@nz
		return 0;
	if(var_340_string == var_2_object)
		return 0;
	string var_344_string; bool var_345_bool;
	var_340_string = var_344_string;
	if(var_340_string == "")
		var_345_bool = false;
	else
		var_345_bool = true;
	func_3990(var_344_string, var_345_bool);
	var_2_object = var_340_string;
	
}


void func_4020(void)
{
	bool var_44_bool;
	func_4119(var_44_bool);
	if(var_44_bool != 0)
		@lshStopSpeech();
}


void func_2999(object var_0_object, int var_722_int, object var_723_object)
{
	var_0_object = var_723_object;
	bool var_733_bool; object var_734_object;
	var_723_object = var_734_object;
	func_3749(var_733_bool, var_734_object, 70.0);
	if(!var_733_bool) { //@nz
		var_722_int = -2;
		return 8;
	}
	object var_729_object;
	@CreateDialog(var_729_object);
	int var_737_int;
	func_4113(var_737_int);
	var_729_object->SetNPCName(var_737_int);
	int var_738_int;
	func_4111(var_738_int);
	var_729_object->SetNPCDescription(var_738_int);
	string var_739_string;
	func_4115(var_739_string);
	var_729_object->SetPhoto(var_739_string);
	string var_740_string;
	func_4117(var_740_string);
	var_729_object->SetPhoto2(var_740_string);
	int var_741_int;
	func_4573(var_741_int);
	var_729_object->SetPlayerName(var_741_int);
	bool var_730_bool;
	@IsOverrideActive(var_730_bool);
	if(var_730_bool != 0) {
		var_722_int = -2;
		return 8;
	}
	@DoDialog(var_729_object);
	bool var_743_bool; object var_744_object;
	object var_745_object;
	func_4027(var_745_object);
	var_745_object = var_744_object;
	func_3836(var_743_bool, var_744_object);
	object var_746_object; object var_747_object;
	var_723_object = var_746_object;
	var_729_object = var_747_object;
	TaskCall(13);
	func_3080(var_748_object, var_749_object, var_750_string, var_751_bool, var_746_object, var_747_object);
	TaskReturn();
	bool var_732_bool;
	var_729_object->IsDialogEnd(var_732_bool);
	
	for(;;) {
		var_779_bool = !var_732_bool; //@nz
		if(var_779_bool == 0) goto Label_3069;
		@sync();
		var_729_object->IsDialogEnd(var_732_bool);
	}
	
Label_3069:
	object var_780_object;
	var_723_object = var_780_object;
	func_3818();
	@StopDialog(var_729_object);
	var_729_object->GetReturnValue(-1);
	int var_731_int = var_722_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4281(bool var_692_bool, object var_693_object)
{
	object var_695_object;
	var_693_object = var_695_object;
	bool var_694_bool;
	func_4048(var_694_bool, var_695_object, "burah_serum");
	if(var_694_bool != 0) {
		var_692_bool = true;
		return 0;
	}
	var_692_bool = false;
}


void func_3258(object var_0_object, int var_781_int, object var_782_object)
{
	var_0_object = var_782_object;
	bool var_792_bool; object var_793_object;
	var_782_object = var_793_object;
	func_3749(var_792_bool, var_793_object, 70.0);
	if(!var_792_bool) { //@nz
		var_781_int = -2;
		return 8;
	}
	object var_788_object;
	@CreateDialog(var_788_object);
	int var_796_int;
	func_4113(var_796_int);
	var_788_object->SetNPCName(var_796_int);
	int var_797_int;
	func_4111(var_797_int);
	var_788_object->SetNPCDescription(var_797_int);
	string var_798_string;
	func_4115(var_798_string);
	var_788_object->SetPhoto(var_798_string);
	string var_799_string;
	func_4117(var_799_string);
	var_788_object->SetPhoto2(var_799_string);
	int var_800_int;
	func_4573(var_800_int);
	var_788_object->SetPlayerName(var_800_int);
	bool var_789_bool;
	@IsOverrideActive(var_789_bool);
	if(var_789_bool != 0) {
		var_781_int = -2;
		return 8;
	}
	@DoDialog(var_788_object);
	bool var_802_bool; object var_803_object;
	object var_804_object;
	func_4027(var_804_object);
	var_804_object = var_803_object;
	func_3836(var_802_bool, var_803_object);
	object var_805_object; object var_806_object;
	var_782_object = var_805_object;
	var_788_object = var_806_object;
	TaskCall(15);
	func_3339(var_807_object, var_808_object, var_809_string, var_810_bool, var_805_object, var_806_object);
	TaskReturn();
	bool var_791_bool;
	var_788_object->IsDialogEnd(var_791_bool);
	
	for(;;) {
		var_835_bool = !var_791_bool; //@nz
		if(var_835_bool == 0) goto Label_3328;
		@sync();
		var_788_object->IsDialogEnd(var_791_bool);
	}
	
Label_3328:
	object var_836_object;
	var_782_object = var_836_object;
	func_3818();
	@StopDialog(var_788_object);
	var_788_object->GetReturnValue(-1);
	int var_790_int = var_781_int;
}
EMIT "Stack[-4] = 0";


void func_4027(object var_138_object)
{
	object var_140_object;
	@self(var_140_object);
	var_140_object = var_138_object;
}
EMIT "Stack[-1] = 0";


void func_4540(object var_129_object, string var_130_string, float var_131_float)
{
	object var_145_object;
	@GetMainOutdoorScene(var_145_object);
	if(var_145_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_143_cvector;
	cvector var_144_cvector;
	bool var_146_bool;
	var_145_object->GetLocator(var_130_string, var_146_bool, var_143_cvector, var_144_cvector);
	if(!var_146_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_130_string) + " doesnt exist");
	var_145_object->GetMap(var_129_object);
	if(var_129_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_156_float = GetByIndex(var_143_cvector, 0);
	var_157_float = GetByIndex(var_143_cvector, 2);
	var_129_object->SetMapParams(var_156_float, var_157_float, var_131_float);
}
EMIT "Stack[-2] = 0";


void func_3521(void)
{
	float var_840_float;
	@rand(var_840_float, 8, 16);
	@SetTimer(10, var_840_float);
}


void func_4033(cvector var_102_cvector, cvector var_103_cvector)
{
	float var_106_float = sqrt(var_103_cvector | var_103_cvector);
	if(var_106_float < 0.000001)
		var_102_cvector = [0.0, 0.0, 0.0];
	var_102_cvector = var_103_cvector / var_106_float;
}


// @pe
void func_4292(bool var_623_bool)
{
	int var_625_int;
	func_4043(var_625_int, "d9q01");
	if(var_625_int == 1000)
		var_623_bool = true;
	var_623_bool = false;
}


void func_3530(void)
{
	@KillTimer(10);
}


// @pe
void func_2251(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_231_object, object var_232_object)
{
	var_0_object = var_232_object;
	var_1_object = var_231_object;
	var_3_string = false;
	if(1 != 0) {
		func_2309(var_232_object, "Neutral");
		var_0_object->SetMessage(518006); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518007, 36191, 19140); //@t
		var_0_object->AddReply(534556, 36189, 36188); //@t
		goto Label_2279;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8cf";
	}
Label_2279:
	bool var_262_bool;
	func_4119(var_262_bool);
	if(var_262_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3974(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2308;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2308:
		return 0;

	}
	
}


void func_4043(int var_330_int, string var_331_string)
{
	int var_333_int;
	@GetVariable(var_331_string, var_333_int);
	var_333_int = var_330_int;
}


// @pe
void func_4304(bool var_629_bool)
{
	int var_631_int;
	func_4043(var_631_int, "ood9Xan3");
	if(var_631_int == 0) {
		var_629_bool = true;
		return 0;
	}
	var_629_bool = false;
}


// @pe
void func_976(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_463_object, object var_464_object)
{
	var_0_object = var_464_object;
	var_1_object = var_463_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_470_bool;
		func_4333(var_1_object);
		if(var_470_bool != 0) {
			object var_476_object; object var_477_object;
			var_476_object = var_1_object;
			var_477_object = var_0_object;
			func_4218();
			func_1064(var_464_object, "Grin");
			var_0_object->SetMessage(512330); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512331, 13491, 13490); //@t
			var_0_object->AddReply(512336, -1, 13495); //@t
		} else {
					func_1064(var_464_object, "Neutral");
					var_0_object->SetMessage(513781); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513782, -1, 15018); //@t
					var_0_object->AddReply(541839, -1, 44056); //@t
		}
	}
	for(;;) {
		bool var_495_bool;
		func_4119(var_495_bool);
		if(var_495_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3974(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1063;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1063:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3d4";


void func_4048(bool var_694_bool, object var_695_object, string var_696_string)
{
	int var_699_int;
	@GetInvItemByName(var_699_int, var_696_string);
	bool var_700_bool;
	var_695_object->HasItem(var_699_int, var_700_bool);
	var_700_bool = var_694_bool;
}


// @pe
void func_726(object var_2_object, string var_406_string)
{
	bool var_407_bool;
	func_4119(var_407_bool);
	if(!var_407_bool) //@nz
		return 0;
	if(var_406_string == var_2_object)
		return 0;
	string var_410_string; bool var_411_bool;
	var_406_string = var_410_string;
	if(var_406_string == "")
		var_411_bool = false;
	else
		var_411_bool = true;
	func_3990(var_410_string, var_411_bool);
	var_2_object = var_406_string;
	
}


// @pe
void func_2518(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_669_object, object var_670_object)
{
	var_0_object = var_670_object;
	var_1_object = var_669_object;
	var_3_string = false;
	if(1 != 0) {
		func_2595(var_670_object, "Suspicion");
		var_0_object->SetMessage(534481); //@t
		var_0_object->ClearReplies(); //@t
		bool var_685_bool = false;
		bool var_686_bool;
		func_4269(var_1_object);
		if(var_686_bool != 0) {
			bool var_692_bool;
			func_4281(var_692_bool, var_1_object);
			if(var_692_bool != 0)
				var_685_bool = true;
		}
		if(var_685_bool != 0)
			var_0_object->AddReply(534482, 38410, 36127); //@t
		var_0_object->AddReply(534489, -1, 36134); //@t
		var_0_object->AddReply(536587, -1, 38409); //@t
		goto Label_2565;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9da";
	}
Label_2565:
	bool var_710_bool;
	func_4119(var_710_bool);
	if(var_710_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3974(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2594;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2594:
		return 0;

	}
	
}


void func_4055(bool var_74_bool, string var_75_string, string var_76_string)
{
	object var_78_object;
	@FindActor(var_78_object, var_75_string);
	if(var_78_object == null)
		var_74_bool = false;
	@Trigger(var_78_object, var_76_string);
	var_74_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4316(bool var_336_bool)
{
	var_336_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_4573(int var_127_int)
{
	int var_129_int;
	@GetVariable("branch", var_129_int);
	if(var_129_int == 0) {
		var_127_int = 1;
		return 2;
	EMIT "GOTO 0x11ec";
	}
	if(var_129_int == 1) {
		var_127_int = 2;
		return 2;
	}
	var_127_int = 3;
}


// @pe
void func_4321(bool var_328_bool)
{
	int var_330_int;
	func_4043(var_330_int, "d3q02");
	if(var_330_int == 3)
		var_328_bool = true;
	var_328_bool = false;
}


void func_4067(float var_64_float)
{
	float var_66_float;
	@GetGameTime(var_66_float);
	var_66_float = var_64_float;
}


void func_4072(int var_191_int)
{
	float var_193_float;
	@GetGameTime(var_193_float);
	var_191_int = 1 + (var_193_float / 24);
}


void func_3818(void)
{
	bool var_283_bool;
	@CameraSwitchToNormal(true);
	bool var_285_bool;
	func_4119(var_285_bool);
	if(var_285_bool != 0) {
	} else {
		@HasAnimationTrack(var_283_bool, "head");
		if(var_283_bool == 0) goto Label_3835;
		@UnlookAsync("head");
	}
Label_3835:
	
}


// @pe
void func_4333(bool var_470_bool)
{
	int var_472_int;
	func_4043(var_472_int, "ood8Han1");
	if(var_472_int == 0) {
		var_470_bool = true;
		return 0;
	}
	var_470_bool = false;
}


void func_4590(object var_59_object)
{
	int var_61_int;
	@GetVariable("mt_han", var_61_int);
	if(!var_61_int) { //@nz
		int var_64_int; object var_65_object;
		var_59_object = var_65_object;
		TaskCall(8);
		func_2170(var_66_object, var_64_int, var_65_object);
		TaskReturn();
		@SetVariable("mt_han", 1);
	}
	bool var_291_bool;
	func_4081(var_291_bool, 1);
	if(var_291_bool != 0)
		return 2;
	bool var_294_bool;
	func_4081(var_294_bool, 3);
	if(var_294_bool != 0) {
		int var_296_int; object var_297_object;
		var_59_object = var_297_object;
		TaskCall(0);
		func_0(var_298_object, var_296_int, var_297_object);
		TaskReturn();
		return 2;
	}
	bool var_373_bool;
	func_4081(var_373_bool, 7);
	if(var_373_bool != 0) {
		int var_375_int; object var_376_object;
		var_59_object = var_376_object;
		TaskCall(2);
		func_582(var_377_object, var_375_int, var_376_object);
		TaskReturn();
		return 2;
	}
	bool var_437_bool;
	func_4081(var_437_bool, 8);
	if(var_437_bool != 0) {
		int var_439_int; object var_440_object;
		var_59_object = var_440_object;
		TaskCall(4);
		func_895(var_441_object, var_439_int, var_440_object);
		TaskReturn();
		return 2;
	}
	bool var_513_bool;
	func_4081(var_513_bool, 9);
	if(var_513_bool != 0) {
		int var_515_int; object var_516_object;
		var_59_object = var_516_object;
		TaskCall(6);
		func_1294(var_517_object, var_515_int, var_516_object);
		TaskReturn();
		return 2;
	}
	bool var_643_bool;
	func_4081(var_643_bool, 11);
	if(var_643_bool != 0) {
		int var_645_int; object var_646_object;
		var_59_object = var_646_object;
		TaskCall(10);
		func_2437(var_647_object, var_645_int, var_646_object);
		TaskReturn();
		return 2;
	}
	bool var_720_bool;
	func_4081(var_720_bool, 12);
	if(var_720_bool != 0) {
		int var_722_int; object var_723_object;
		var_59_object = var_723_object;
		TaskCall(12);
		func_2999(var_724_object, var_722_int, var_723_object);
		TaskReturn();
		return 2;
	}
	int var_781_int; object var_782_object;
	var_59_object = var_782_object;
	TaskCall(14);
	func_3258(var_783_object, var_781_int, var_782_object);
	TaskReturn();
}


// @pe
void func_1519(object var_2_object, string var_563_string)
{
	bool var_564_bool;
	func_4119(var_564_bool);
	if(!var_564_bool) //@nz
		return 0;
	if(var_563_string == var_2_object)
		return 0;
	string var_567_string; bool var_568_bool;
	var_563_string = var_567_string;
	if(var_563_string == "")
		var_568_bool = false;
	else
		var_568_bool = true;
	func_3990(var_567_string, var_568_bool);
	var_2_object = var_563_string;
	
}


// @pe
void func_4081(bool var_291_bool, int var_292_int)
{
	int var_293_int;
	func_4072(var_293_int);
	var_291_bool = var_293_int == var_292_int;
}


void func_4087(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


// @pe
void func_4345(bool var_547_bool)
{
	int var_549_int;
	func_4043(var_549_int, "d9q01");
	if(var_549_int == 1)
		var_547_bool = true;
	var_547_bool = false;
}


void func_3836(bool var_136_bool, object var_137_object)
{
	int var_143_int; int var_144_int;
	@GetVariable("voice_common", var_143_int);
	if(var_143_int != 0) {
		bool var_147_bool; object var_148_object;
		var_137_object = var_148_object;
		func_3894(var_147_bool, var_148_object);
		if(!var_147_bool) { //@nz
			bool var_178_bool; object var_179_object;
			var_137_object = var_179_object;
			func_3931(var_178_bool, var_179_object);
			if(!var_178_bool) { //@nz
				var_136_bool = false;
				return 4;
			}
		}
		@irand(var_144_int, 2);
		if(var_144_int != 0)
			@SetVariable("voice_common", ((var_143_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_223_bool; object var_224_object;
		var_137_object = var_224_object;
		func_3931(var_223_bool, var_224_object);
		if(!var_223_bool) { //@nz
			bool var_226_bool; object var_227_object;
			var_137_object = var_227_object;
			func_3894(var_226_bool, var_227_object);
			if(!var_226_bool) { //@nz
				var_136_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3892;
	
Label_3892:
	var_136_bool = true;
	
}


void func_4094(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_4087(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


