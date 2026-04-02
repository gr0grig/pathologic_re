// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_37_cvector == 26964) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3714();
			}
			if(var_37_cvector == 26789) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_3763();
			}
			if(var_37_cvector == 26791) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_3691();
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_3846();
			}
			if(var_37_cvector == 42604) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_3691();
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_3846();
			}
			if(var_37_cvector == 43745) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_3830();
			}
			if(var_37_cvector == 43750) {
				object var_151_object = var_1_object;
				func_3684(var_0_object);
			}
			if(var_37_cvector == 43751) {
				object var_193_object = var_1_object;
				func_3823(var_0_object);
			}
			if(var_36_bool == 26788) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525420); //@t
				var_0_object->ClearReplies(); //@t
				bool var_218_bool;
				func_3923(var_1_object);
				if(var_218_bool != 0)
					var_0_object->AddReply(525620, 41124, 26962); //@t
				bool var_229_bool = false;
				bool var_230_bool;
				func_3875(var_1_object);
				if(var_230_bool != 0) {
					bool var_236_bool;
					func_3911(var_1_object);
					if(var_236_bool != 0)
						var_229_bool = true;
				}
				if(var_229_bool != 0)
					var_0_object->AddReply(525421, 42590, 26789); //@t
				bool var_245_bool = false;
				bool var_246_bool;
				func_3971(var_1_object);
				if(var_246_bool != 0) {
					bool var_252_bool;
					func_3983(var_1_object);
					if(var_252_bool != 0)
						var_245_bool = true;
				}
				if(var_245_bool != 0)
					var_0_object->AddReply(541574, 43746, 43745); //@t
				var_0_object->AddReply(525424, -1, 26792); //@t
				var_0_object->AddReply(539182, -1, 41123); //@t
				return 0;
			}
			if(var_36_bool == 43746) {
				func_187(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(541575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541576, 43749, 43747); //@t
				var_0_object->AddReply(541577, -1, 43748); //@t
				return 0;
			}
			if(var_36_bool == 43749) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541579, -1, 43750); //@t
				var_0_object->AddReply(541580, -1, 43751); //@t
				return 0;
			}
			if(var_36_bool == 42590) {
				func_187(var_37_cvector, "Impatience");
				var_0_object->SetMessage(540576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540577, 42592, 42591); //@t
				return 0;
			}
			if(var_36_bool == 42592) {
				func_187(var_37_cvector, "Fear");
				var_0_object->SetMessage(540578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540579, 42594, 42593); //@t
				return 0;
			}
			if(var_36_bool == 42594) {
				func_187(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(540580); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540581, 26790, 42595); //@t
				var_0_object->AddReply(540613, 42634, 42633); //@t
				return 0;
			}
			if(var_36_bool == 42634) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540615, 42637, 42635); //@t
				return 0;
			}
			if(var_36_bool == 26790) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529338, 30794, 30793); //@t
				return 0;
			}
			if(var_36_bool == 30794) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529339); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540612, 42637, 42632); //@t
				return 0;
			}
			if(var_36_bool == 42637) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540618, 42640, 42639); //@t
				var_0_object->AddReply(540620, 42640, 42641); //@t
				return 0;
			}
			if(var_36_bool == 42640) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540582, 42597, 42596); //@t
				return 0;
			}
			if(var_36_bool == 42597) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540584, 42599, 42598); //@t
				var_0_object->AddReply(540588, 42603, 42602); //@t
				return 0;
			}
			if(var_36_bool == 42603) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540590, -1, 42604); //@t
				var_0_object->AddReply(540591, 42616, 42605); //@t
				return 0;
			}
			if(var_36_bool == 42599) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540585); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540586, 42616, 42600); //@t
				var_0_object->AddReply(540587, 42616, 42601); //@t
				return 0;
			}
			if(var_36_bool == 42616) {
				func_187(var_37_cvector, "Impatience");
				var_0_object->SetMessage(540602); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525423, -1, 26791); //@t
				return 0;
			}
			if(var_36_bool == 41124) {
				func_187(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(539183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539184, 41126, 41125); //@t
				var_0_object->AddReply(539188, 41130, 41129); //@t
				return 0;
			}
			if(var_36_bool == 41126) {
				func_187(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(539185); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539187, 41130, 41128); //@t
				var_0_object->AddReply(539186, 41130, 41127); //@t
				return 0;
			}
			if(var_36_bool == 41130) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539190, 26963, 41132); //@t
				var_0_object->AddReply(539191, 41134, 41133); //@t
				return 0;
			}
			if(var_36_bool == 41134) {
				func_187(var_37_cvector, "Fear");
				var_0_object->SetMessage(539192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539193, 26963, 41135); //@t
				return 0;
			}
			if(var_36_bool == 26963) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525622, -1, 26964); //@t
				return 0;
			}
			var_3_string = true;
			bool var_430_bool;
			func_3672(var_430_bool);
			if(var_430_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_36_bool == 26845) {
				func_896(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525490, 42621, 26846); //@t
				var_0_object->AddReply(529311, 30766, 30765); //@t
				return 0;
			}
			if(var_36_bool == 30766) {
				func_896(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529313, 42621, 30767); //@t
				var_0_object->AddReply(540603, 42621, 42620); //@t
				return 0;
			}
			if(var_36_bool == 42621) {
				func_896(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540604); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540605, 42626, 42624); //@t
				var_0_object->AddReply(540606, -1, 42625); //@t
				return 0;
			}
			if(var_36_bool == 42626) {
				func_896(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540607); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540608, 42628, 42627); //@t
				return 0;
			}
			if(var_36_bool == 42628) {
				func_896(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540610, -1, 42629); //@t
				var_0_object->AddReply(540611, -1, 42630); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_3672(var_103_bool);
			if(var_103_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x397";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_37_cvector == 27482) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3745();
			}
			if(var_36_bool == 27479) {
				func_1191(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526198); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_3887(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(526199, 30173, 27480); //@t
				var_0_object->AddReply(526202, -1, 27483); //@t
				return 0;
			}
			if(var_36_bool == 30173) {
				func_1191(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528747); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528748, 27481, 30174); //@t
				return 0;
			}
			if(var_36_bool == 27481) {
				func_1191(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(526200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528750, 30177, 30176); //@t
				var_0_object->AddReply(541056, 30177, 43159); //@t
				return 0;
			}
			if(var_36_bool == 30177) {
				func_1191(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526201, -1, 27482); //@t
				return 0;
			}
			var_3_string = true;
			bool var_127_bool;
			func_3672(var_127_bool);
			if(var_127_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4be";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_37_cvector == 28011) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3754();
			}
			if(var_37_cvector == 43707) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_3754();
			}
			if(var_36_bool == 28004) {
				bool var_75_bool;
				func_3899(var_1_object);
				if(var_75_bool != 0) {
					func_1491(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526727); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526728, 30294, 28005); //@t
					var_0_object->AddReply(541532, 43694, 43693); //@t
					return 0;
				}
				func_1491(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526736, -1, 28013); //@t
				var_0_object->AddReply(528870, -1, 30293); //@t
				return 0;
			}
			if(var_36_bool == 43694) {
				func_1491(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541533); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541534, 43702, 43695); //@t
				return 0;
			}
			if(var_36_bool == 30294) {
				func_1491(var_37_cvector, "Strength");
				var_0_object->SetMessage(528871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528872, 28006, 30295); //@t
				var_0_object->AddReply(541535, 43697, 43696); //@t
				return 0;
			}
			if(var_36_bool == 43697) {
				func_1491(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541537, 43699, 43698); //@t
				return 0;
			}
			if(var_36_bool == 43699) {
				func_1491(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(541538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541539, 43694, 43700); //@t
				var_0_object->AddReply(541540, 43702, 43701); //@t
				return 0;
			}
			if(var_36_bool == 43702) {
				func_1491(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541543, 30297, 43705); //@t
				return 0;
			}
			if(var_36_bool == 28006) {
				func_1491(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526729); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528873, 30297, 30296); //@t
				return 0;
			}
			if(var_36_bool == 30297) {
				func_1491(var_37_cvector, "Impatience");
				var_0_object->SetMessage(528874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528875, 30299, 30298); //@t
				return 0;
			}
			if(var_36_bool == 30299) {
				func_1491(var_37_cvector, "Impatience");
				var_0_object->SetMessage(528876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526730, 28008, 28007); //@t
				var_0_object->AddReply(541544, -1, 43707); //@t
				return 0;
			}
			if(var_36_bool == 28008) {
				func_1491(var_37_cvector, "Impatience");
				var_0_object->SetMessage(526731); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526732, 28010, 28009); //@t
				return 0;
			}
			if(var_36_bool == 28010) {
				func_1491(var_37_cvector, "Strength");
				var_0_object->SetMessage(526733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526734, -1, 28011); //@t
				return 0;
			}
			var_3_string = true;
			bool var_194_bool;
			func_3672(var_194_bool);
			if(var_194_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5ea";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_36_bool == 36960) {
				func_1935(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_36_bool == 36962) {
				func_1935(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_36_bool == 36964) {
				func_1935(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_89_bool;
			func_3672(var_89_bool);
			if(var_89_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7a6";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_37_cvector == 41351) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3781();
				object var_93_object = var_1_object;
				func_3859(var_0_object);
			}
			if(var_37_cvector == 41387) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_3807();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_3769();
				object var_141_object = var_1_object;
				func_3674(var_0_object);
			}
			if(var_37_cvector == 42788) {
				object var_164_object = var_1_object;
				func_3852(var_0_object);
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_3807();
			}
			if(var_37_cvector == 42787) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_3807();
				object var_210_object = var_1_object;
				func_3836(var_0_object);
				object var_215_object = var_1_object;
				func_3823(var_0_object);
			}
			if(var_36_bool == 41346) {
				bool var_222_bool;
				func_3935(var_1_object);
				if(var_222_bool != 0) {
					object var_230_object; object var_231_object;
					var_230_object = var_1_object;
					var_231_object = var_0_object;
					func_3775();
					object var_234_object; object var_235_object;
					var_234_object = var_1_object;
					var_235_object = var_0_object;
					func_3817();
					func_2244(var_37_cvector, "Strength");
					var_0_object->SetMessage(539415); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540750, 42790, 42789); //@t
					var_0_object->AddReply(540754, 42790, 42793); //@t
					return 0;
				}
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539421); //@t
				var_0_object->ClearReplies(); //@t
				bool var_264_bool = false;
				bool var_265_bool;
				func_3947(var_1_object);
				if(var_265_bool != 0) {
					bool var_271_bool;
					func_3959(var_1_object);
					if(!var_271_bool) //@nz
						var_264_bool = true;
				}
				if(var_264_bool != 0)
					var_0_object->AddReply(539454, 42779, 41385); //@t
				var_0_object->AddReply(539422, -1, 41353); //@t
				var_0_object->AddReply(540740, -1, 42778); //@t
				return 0;
			}
			if(var_36_bool == 42779) {
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540742, 41386, 42780); //@t
				return 0;
			}
			if(var_36_bool == 41386) {
				func_2244(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(539455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540743, 42782, 42781); //@t
				var_0_object->AddReply(540747, 42782, 42785); //@t
				return 0;
			}
			if(var_36_bool == 42782) {
				func_2244(var_37_cvector, "Strength");
				var_0_object->SetMessage(540744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540745, 42784, 42783); //@t
				var_0_object->AddReply(540748, -1, 42787); //@t
				return 0;
			}
			if(var_36_bool == 42784) {
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539456, -1, 41387); //@t
				var_0_object->AddReply(540749, -1, 42788); //@t
				return 0;
			}
			if(var_36_bool == 42790) {
				func_2244(var_37_cvector, "Strength");
				var_0_object->SetMessage(540751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540752, 42792, 42791); //@t
				var_0_object->AddReply(540755, 42796, 42795); //@t
				return 0;
			}
			if(var_36_bool == 42796) {
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540756); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540757, 42792, 42797); //@t
				return 0;
			}
			if(var_36_bool == 42792) {
				func_2244(var_37_cvector, "Fear");
				var_0_object->SetMessage(540753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539416, 41348, 41347); //@t
				return 0;
			}
			if(var_36_bool == 41348) {
				func_2244(var_37_cvector, "Fear");
				var_0_object->SetMessage(539417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539418, 42802, 41349); //@t
				var_0_object->AddReply(540758, 42800, 42799); //@t
				return 0;
			}
			if(var_36_bool == 42800) {
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540760, 42802, 42801); //@t
				return 0;
			}
			if(var_36_bool == 42802) {
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540762, 41350, 42803); //@t
				return 0;
			}
			if(var_36_bool == 41350) {
				func_2244(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540763, 42806, 42805); //@t
				var_0_object->AddReply(540765, 42806, 42807); //@t
				return 0;
			}
			if(var_36_bool == 42806) {
				func_2244(var_37_cvector, "Sympathy");
				var_0_object->SetMessage(540764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539420, -1, 41351); //@t
				var_0_object->AddReply(539423, -1, 41354); //@t
				return 0;
			}
			var_3_string = true;
			bool var_392_bool;
			func_3672(var_392_bool);
			if(var_392_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8db";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3482();
			if(var_36_int == 42548) {
				func_2815(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3672(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb16";
	
	}

}


maintask task_14
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		var_36_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2886(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2951();
			bool var_40_bool = false;
			bool var_41_bool;
			func_3206(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2920(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2900(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3489(var_82_object);
					var_82_object = var_81_object;
					func_3356(var_80_bool, var_81_object);
				}
			} else {
				func_2915(var_36_int);
				func_2942();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3133();
		func_2951();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		func_2951();
		func_3436("Neutral");
		func_2942();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2942();
		else
			func_3436("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_3133();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_3197(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_4207(var_54_object);
			func_3436("Neutral");
			func_2951();
			func_2942();
		}
	}

}


void func_0(object var_0_object, int var_286_int, object var_287_object)
{
	var_0_object = var_287_object;
	bool var_297_bool; object var_298_object;
	var_287_object = var_298_object;
	func_3211(var_297_bool, var_298_object, 70.0);
	if(!var_297_bool) { //@nz
		var_286_int = -2;
		return 8;
	}
	object var_293_object;
	@CreateDialog(var_293_object);
	int var_301_int;
	func_3666(var_301_int);
	var_293_object->SetNPCName(var_301_int);
	int var_302_int;
	func_3664(var_302_int);
	var_293_object->SetNPCDescription(var_302_int);
	string var_303_string;
	func_3668(var_303_string);
	var_293_object->SetPhoto(var_303_string);
	string var_304_string;
	func_3670(var_304_string);
	var_293_object->SetPhoto2(var_304_string);
	int var_305_int;
	func_4190(var_305_int);
	var_293_object->SetPlayerName(var_305_int);
	bool var_294_bool;
	@IsOverrideActive(var_294_bool);
	if(var_294_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	@DoDialog(var_293_object);
	bool var_307_bool; object var_308_object;
	object var_309_object;
	func_3489(var_309_object);
	var_309_object = var_308_object;
	func_3298(var_307_bool, var_308_object);
	object var_310_object; object var_311_object;
	var_287_object = var_310_object;
	var_293_object = var_311_object;
	TaskCall(1);
	func_81(var_312_object, var_313_object, var_314_string, var_315_bool, var_310_object, var_311_object);
	TaskReturn();
	bool var_296_bool;
	var_293_object->IsDialogEnd(var_296_bool);
	
	for(;;) {
		var_383_bool = !var_296_bool; //@nz
		if(var_383_bool == 0) goto Label_70;
		@sync();
		var_293_object->IsDialogEnd(var_296_bool);
	}
	
Label_70:
	object var_384_object;
	var_287_object = var_384_object;
	func_3280();
	@StopDialog(var_293_object);
	var_293_object->GetReturnValue(-1);
	int var_295_int = var_286_int;
}
EMIT "Stack[-4] = 0";


void func_2050(object var_0_object, int var_387_int, object var_388_object)
{
	var_0_object = var_388_object;
	bool var_398_bool; object var_399_object;
	var_388_object = var_399_object;
	func_3211(var_398_bool, var_399_object, 70.0);
	if(!var_398_bool) { //@nz
		var_387_int = -2;
		return 8;
	}
	object var_394_object;
	@CreateDialog(var_394_object);
	int var_402_int;
	func_3666(var_402_int);
	var_394_object->SetNPCName(var_402_int);
	int var_403_int;
	func_3664(var_403_int);
	var_394_object->SetNPCDescription(var_403_int);
	string var_404_string;
	func_3668(var_404_string);
	var_394_object->SetPhoto(var_404_string);
	string var_405_string;
	func_3670(var_405_string);
	var_394_object->SetPhoto2(var_405_string);
	int var_406_int;
	func_4190(var_406_int);
	var_394_object->SetPlayerName(var_406_int);
	bool var_395_bool;
	@IsOverrideActive(var_395_bool);
	if(var_395_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	@DoDialog(var_394_object);
	bool var_408_bool; object var_409_object;
	object var_410_object;
	func_3489(var_410_object);
	var_410_object = var_409_object;
	func_3298(var_408_bool, var_409_object);
	object var_411_object; object var_412_object;
	var_388_object = var_411_object;
	var_394_object = var_412_object;
	TaskCall(11);
	func_2131(var_413_object, var_414_object, var_415_string, var_416_bool, var_411_object, var_412_object);
	TaskReturn();
	bool var_397_bool;
	var_394_object->IsDialogEnd(var_397_bool);
	
	for(;;) {
		var_480_bool = !var_397_bool; //@nz
		if(var_480_bool == 0) goto Label_2120;
		@sync();
		var_394_object->IsDialogEnd(var_397_bool);
	}
	
Label_2120:
	object var_481_object;
	var_388_object = var_481_object;
	func_3280();
	@StopDialog(var_394_object);
	var_394_object->GetReturnValue(-1);
	int var_396_int = var_387_int;
}
EMIT "Stack[-4] = 0";


void func_4099(object var_76_object)
{
	object var_78_object;
	@GetDiaryRoot(var_78_object);
	if(!var_78_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_76_object = false;
	}
	var_78_object = var_76_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3846(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_3852(object var_164_object)
{
	object var_167_object;
	var_164_object = var_167_object;
	bool var_166_bool;
	func_3563(var_166_bool, var_167_object, 0.1);
}


void func_3598(float var_173_float)
{
	object var_175_object;
	@CreateFloatVector(var_175_object);
	var_175_object->add(var_173_float);
	@SendWorldWndMessage(16, var_175_object);
}
EMIT "Stack[-1] = 0";


void func_4112(bool var_67_bool, object var_68_object, int var_69_int)
{
	object var_76_object;
	func_4099(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	object var_74_object;
	var_73_object->Find(var_69_int, var_74_object);
	if(!var_74_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_69_int);
		var_67_bool = false;
	}
	var_74_object->AddChild(var_68_object);
	@SendWorldWndMessage(7);
	int var_75_int;
	var_68_object->GetCategory(var_75_int);
	@SetDiarySection(var_75_int);
	var_67_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3859(object var_94_object)
{
	object var_98_object;
	func_4140(var_98_object);
	object var_95_object;
	var_98_object = var_95_object;
	func_4157(var_95_object, "pt_map_maria", (float)2);
	object var_118_object;
	func_4140(var_118_object);
	var_94_object->ShowMap(var_118_object);
}


void func_1047(object var_0_object, int var_556_int, object var_557_object)
{
	var_0_object = var_557_object;
	bool var_567_bool; object var_568_object;
	var_557_object = var_568_object;
	func_3211(var_567_bool, var_568_object, 70.0);
	if(!var_567_bool) { //@nz
		var_556_int = -2;
		return 8;
	}
	object var_563_object;
	@CreateDialog(var_563_object);
	int var_571_int;
	func_3666(var_571_int);
	var_563_object->SetNPCName(var_571_int);
	int var_572_int;
	func_3664(var_572_int);
	var_563_object->SetNPCDescription(var_572_int);
	string var_573_string;
	func_3668(var_573_string);
	var_563_object->SetPhoto(var_573_string);
	string var_574_string;
	func_3670(var_574_string);
	var_563_object->SetPhoto2(var_574_string);
	int var_575_int;
	func_4190(var_575_int);
	var_563_object->SetPlayerName(var_575_int);
	bool var_564_bool;
	@IsOverrideActive(var_564_bool);
	if(var_564_bool != 0) {
		var_556_int = -2;
		return 8;
	}
	@DoDialog(var_563_object);
	bool var_577_bool; object var_578_object;
	object var_579_object;
	func_3489(var_579_object);
	var_579_object = var_578_object;
	func_3298(var_577_bool, var_578_object);
	object var_580_object; object var_581_object;
	var_557_object = var_580_object;
	var_563_object = var_581_object;
	TaskCall(5);
	func_1128(var_582_object, var_583_object, var_584_string, var_585_bool, var_580_object, var_581_object);
	TaskReturn();
	bool var_566_bool;
	var_563_object->IsDialogEnd(var_566_bool);
	
	for(;;) {
		var_616_bool = !var_566_bool; //@nz
		if(var_616_bool == 0) goto Label_1117;
		@sync();
		var_563_object->IsDialogEnd(var_566_bool);
	}
	
Label_1117:
	object var_617_object;
	var_557_object = var_617_object;
	func_3280();
	@StopDialog(var_563_object);
	var_563_object->GetReturnValue(-1);
	int var_565_int = var_556_int;
}
EMIT "Stack[-4] = 0";


void func_3608(bool var_131_bool, string var_132_string, string var_133_string)
{
	object var_135_object;
	@FindActor(var_135_object, var_132_string);
	if(var_135_object == null)
		var_131_bool = false;
	@Trigger(var_135_object, var_133_string);
	var_131_bool = true;
}
EMIT "Stack[-1] = 0";


void func_3356(bool var_140_bool, object var_141_object)
{
	string var_147_string; bool var_149_bool; int var_150_int; string var_151_string;
	var_147_string = "c";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_163_bool; string var_164_string;
		var_151_string = var_164_string;
		func_3467(var_163_bool, var_164_string);
		var_163_bool = var_140_bool;
		return 10;

	}
}


// @pe
void func_3875(bool var_338_bool)
{
	int var_340_int;
	func_3516(var_340_int, "k3q01");
	if(var_340_int == 2)
		var_338_bool = true;
	var_338_bool = false;
}


void func_3620(float var_59_float)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	var_61_float = var_59_float;
}


void func_3625(int var_184_int)
{
	float var_186_float;
	@GetGameTime(var_186_float);
	var_184_int = 1 + (var_186_float / 24);
}


void func_4140(object var_48_object)
{
	object var_51_object; object var_52_object;
	@GetMainOutdoorScene(var_51_object);
	if(var_51_object == null) {
		@Trace("Can't find main outdoor scene");
		var_52_object = null;
		var_52_object = var_48_object;
	}
	var_51_object->GetMap(var_52_object);
	var_52_object = var_48_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3887(bool var_596_bool)
{
	int var_598_int;
	func_3516(var_598_int, "k7q01");
	if(var_598_int == 7)
		var_596_bool = true;
	var_596_bool = false;
}


void func_1327(object var_0_object, int var_484_int, object var_485_object)
{
	var_0_object = var_485_object;
	bool var_495_bool; object var_496_object;
	var_485_object = var_496_object;
	func_3211(var_495_bool, var_496_object, 70.0);
	if(!var_495_bool) { //@nz
		var_484_int = -2;
		return 8;
	}
	object var_491_object;
	@CreateDialog(var_491_object);
	int var_499_int;
	func_3666(var_499_int);
	var_491_object->SetNPCName(var_499_int);
	int var_500_int;
	func_3664(var_500_int);
	var_491_object->SetNPCDescription(var_500_int);
	string var_501_string;
	func_3668(var_501_string);
	var_491_object->SetPhoto(var_501_string);
	string var_502_string;
	func_3670(var_502_string);
	var_491_object->SetPhoto2(var_502_string);
	int var_503_int;
	func_4190(var_503_int);
	var_491_object->SetPlayerName(var_503_int);
	bool var_492_bool;
	@IsOverrideActive(var_492_bool);
	if(var_492_bool != 0) {
		var_484_int = -2;
		return 8;
	}
	@DoDialog(var_491_object);
	bool var_505_bool; object var_506_object;
	object var_507_object;
	func_3489(var_507_object);
	var_507_object = var_506_object;
	func_3298(var_505_bool, var_506_object);
	object var_508_object; object var_509_object;
	var_485_object = var_508_object;
	var_491_object = var_509_object;
	TaskCall(7);
	func_1408(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object);
	TaskReturn();
	bool var_494_bool;
	var_491_object->IsDialogEnd(var_494_bool);
	
	for(;;) {
		var_552_bool = !var_494_bool; //@nz
		if(var_552_bool == 0) goto Label_1397;
		@sync();
		var_491_object->IsDialogEnd(var_494_bool);
	}
	
Label_1397:
	object var_553_object;
	var_485_object = var_553_object;
	func_3280();
	@StopDialog(var_491_object);
	var_491_object->GetReturnValue(-1);
	int var_493_int = var_484_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3634(bool var_283_bool, int var_284_int)
{
	int var_285_int;
	func_3625(var_285_int);
	var_283_bool = var_285_int == var_284_int;
}


void func_3640(string var_61_string, int var_62_int)
{
	string var_64_string = "idle";
	if(var_62_int != 0)
		var_64_string += var_62_int;
	var_64_string = var_61_string;
}


void func_3131(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_3899(bool var_515_bool)
{
	int var_517_int;
	func_3516(var_517_int, "k6q02");
	if(var_517_int == 1)
		var_515_bool = true;
	var_515_bool = false;
}


void func_4157(object var_95_object, string var_96_string, float var_97_float)
{
	object var_105_object;
	@GetMainOutdoorScene(var_105_object);
	if(var_105_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_103_cvector;
	cvector var_104_cvector;
	bool var_106_bool;
	var_105_object->GetLocator(var_96_string, var_106_bool, var_103_cvector, var_104_cvector);
	if(!var_106_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_96_string) + " doesnt exist");
	var_105_object->GetMap(var_95_object);
	if(var_95_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_116_float = GetByIndex(var_103_cvector, 0);
	var_117_float = GetByIndex(var_103_cvector, 2);
	var_95_object->SetMapParams(var_116_float, var_117_float, var_97_float);
}
EMIT "Stack[-2] = 0";


void func_3133(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3647(int var_55_int)
{
	int var_58_int; bool var_59_bool;
	var_58_int = 0;
	
	for(;;) {
		string var_61_string; int var_62_int;
		var_58_int = var_62_int;
		func_3640(var_61_string, var_62_int);
		@HasAnimation(var_59_bool, "all", var_61_string);
		if(!var_59_bool) //@nz
			break;
		var_58_int += 1;
	}
	var_58_int = var_55_int;
}


void func_3393(bool var_171_bool, object var_172_object)
{
	bool var_180_bool; int var_181_int; string var_182_string;
	int var_184_int;
	func_3625(var_184_int);
	string var_178_string = ("d" + var_184_int) + "m";
	int var_179_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_172_object->HasProperty((var_178_string + (var_179_int + 1)), var_180_bool);
			if(!var_180_bool) { //@nz
			} else {
				var_179_int += 1;
			}
		}
		if(!var_179_int) { //@nz
			var_171_bool = false;
			return 10;
		}
		var_181_int = 0;
		if(var_179_int > 1)
			@irand(var_181_int, var_179_int);
		var_172_object->GetProperty((var_178_string + (var_181_int + 1)), var_182_string);
		bool var_203_bool; string var_204_string;
		var_182_string = var_204_string;
		func_3467(var_203_bool, var_204_string);
		var_203_bool = var_171_bool;
		return 10;

	}
}


void func_3138(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


// @pe
void func_838(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_224_object, object var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_string = false;
	if(1 != 0) {
		func_896(var_225_object, "Neutral");
		var_0_object->SetMessage(525489); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525490, 42621, 26846); //@t
		var_0_object->AddReply(529311, 30766, 30765); //@t
		goto Label_866;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x34a";
	}
Label_866:
	bool var_255_bool;
	func_3672(var_255_bool);
	if(var_255_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_895;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_895:
		return 0;

	}
	
}


// @pe
void func_3911(bool var_344_bool)
{
	int var_346_int;
	func_3516(var_346_int, "ook3Kapella1");
	if(var_346_int == 0) {
		var_344_bool = true;
		return 0;
	}
	var_344_bool = false;
}


void func_2886(object var_0_object)
{
	bool var_37_bool;
	func_3206(var_37_bool);
	if(!var_37_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3062();
	}
}
EMIT "Return(); Pop(0)";


void func_3146(bool var_185_bool, object var_186_object, string var_187_string)
{
	var_192_bool = IsFuncExist(var_186_object, "HasProperty", 2);
	if(!var_192_bool) { //@nz
		var_185_bool = false;
		return 2;
	}
	bool var_189_bool;
	var_186_object->HasProperty(var_187_string, var_189_bool);
	var_189_bool = var_185_bool;
}


void func_3664(int var_117_int)
{
	var_117_int = 515538;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_310_object, object var_311_object)
{
	var_0_object = var_311_object;
	var_1_object = var_310_object;
	var_3_string = false;
	if(1 != 0) {
		func_187(var_311_object, "Neutral");
		var_0_object->SetMessage(525420); //@t
		var_0_object->ClearReplies(); //@t
		bool var_326_bool;
		func_3923(var_1_object);
		if(var_326_bool != 0)
			var_0_object->AddReply(525620, 41124, 26962); //@t
		bool var_337_bool = false;
		bool var_338_bool;
		func_3875(var_1_object);
		if(var_338_bool != 0) {
			bool var_344_bool;
			func_3911(var_1_object);
			if(var_344_bool != 0)
				var_337_bool = true;
		}
		if(var_337_bool != 0)
			var_0_object->AddReply(525421, 42590, 26789); //@t
		bool var_353_bool = false;
		bool var_354_bool;
		func_3971(var_1_object);
		if(var_354_bool != 0) {
			bool var_360_bool;
			func_3983(var_1_object);
			if(var_360_bool != 0)
				var_353_bool = true;
		}
		if(var_353_bool != 0)
			var_0_object->AddReply(541574, 43746, 43745); //@t
		var_0_object->AddReply(525424, -1, 26792); //@t
		var_0_object->AddReply(539182, -1, 41123); //@t
		goto Label_157;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_157:
	bool var_375_bool;
	func_3672(var_375_bool);
	if(var_375_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_186;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_186:
		return 0;

	}
	
}


void func_3666(int var_116_int)
{
	var_116_int = 502863;
}


// @pe
void func_2131(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_411_object, object var_412_object)
{
	var_0_object = var_412_object;
	var_1_object = var_411_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_418_bool;
		func_3935(var_1_object);
		if(var_418_bool != 0) {
			object var_424_object; object var_425_object;
			var_424_object = var_1_object;
			var_425_object = var_0_object;
			func_3775();
			object var_428_object; object var_429_object;
			var_428_object = var_1_object;
			var_429_object = var_0_object;
			func_3817();
			func_2244(var_412_object, "Strength");
			var_0_object->SetMessage(539415); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540750, 42790, 42789); //@t
			var_0_object->AddReply(540754, 42790, 42793); //@t
		} else {
					func_2244(var_412_object, "Neutral");
					var_0_object->SetMessage(539421); //@t
					var_0_object->ClearReplies(); //@t
					bool var_457_bool = false;
					bool var_458_bool;
					func_3947(var_1_object);
					if(var_458_bool != 0) {
						bool var_464_bool;
						func_3959(var_1_object);
						if(!var_464_bool) //@nz
							var_457_bool = true;
					}
					if(var_457_bool != 0)
						var_0_object->AddReply(539454, 42779, 41385); //@t
					var_0_object->AddReply(539422, -1, 41353); //@t
					var_0_object->AddReply(540740, -1, 42778); //@t
		}
	}
	for(;;) {
		bool var_447_bool;
		func_3672(var_447_bool);
		if(var_447_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3436(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2243;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2243:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x857";


void func_3668(string var_118_string)
{
	var_118_string = "ui/NPC_Kapella.png";
}


// @pe
void func_2815(object var_2_object, string var_710_string)
{
	bool var_711_bool;
	func_3672(var_711_bool);
	if(!var_711_bool) //@nz
		return 0;
	if(var_710_string == var_2_object)
		return 0;
	string var_714_string; bool var_715_bool;
	var_710_string = var_714_string;
	if(var_710_string == "")
		var_715_bool = false;
	else
		var_715_bool = true;
	func_3452(var_714_string, var_715_bool);
	var_2_object = var_710_string;
	
}


void func_3670(string var_119_string)
{
	var_119_string = "ui/NPC_Kapella_b.png";
}


void func_3158(bool var_177_bool, object var_178_object, string var_179_string, float var_180_float, float var_181_float, float var_182_float)
{
	object var_186_object;
	var_178_object = var_186_object;
	string var_187_string;
	var_179_string = var_187_string;
	bool var_185_bool;
	func_3146(var_185_bool, var_186_object, var_187_string);
	if(!var_185_bool) //@nz
		var_177_bool = false;
	float var_184_float;
	var_178_object->GetProperty(var_179_string, var_184_float);
	float var_195_float; float var_197_float; float var_198_float;
	var_181_float = var_197_float;
	var_182_float = var_198_float;
	func_3505(var_195_float, (var_184_float + var_180_float), var_197_float, var_198_float);
	var_178_object->SetProperty(var_179_string, var_195_float);
	var_177_bool = true;
}


void func_3672(bool var_111_bool)
{
	var_111_bool = true;
}


// @pe
void func_1872(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_644_object, object var_645_object)
{
	var_0_object = var_645_object;
	var_1_object = var_644_object;
	var_3_string = false;
	if(1 != 0) {
		func_1935(var_645_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_1905;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x754";
	}
Label_1905:
	bool var_669_bool;
	func_3672(var_669_bool);
	if(var_669_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1934;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1934:
		return 0;

	}
	
}


// @pe
void func_3674(object var_141_object)
{
	@Trace("money 4000 is given");
	object var_144_object;
	var_141_object = var_144_object;
	func_3544(var_144_object, 4000);
}


// @pe
void func_3923(bool var_326_bool)
{
	int var_328_int;
	func_3516(var_328_int, "k3q04");
	if(var_328_int == 0) {
		var_326_bool = true;
		return 0;
	}
	var_326_bool = false;
}


void func_2900(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_3197(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_4190(int var_120_int)
{
	int var_122_int;
	@GetVariable("branch", var_122_int);
	if(var_122_int == 0) {
		var_120_int = 1;
		return 2;
	EMIT "GOTO 0x106d";
	}
	if(var_122_int == 1) {
		var_120_int = 2;
		return 2;
	}
	var_120_int = 3;
}


// @pe
void func_3935(bool var_418_bool)
{
	int var_420_int;
	func_3516(var_420_int, "ook5Kapella1");
	if(var_420_int == 0) {
		var_418_bool = true;
		return 0;
	}
	var_418_bool = false;
}


void func_2915(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


// @pe
void func_3684(object var_151_object)
{
	object var_154_object;
	var_151_object = var_154_object;
	bool var_153_bool;
	func_3563(var_153_bool, var_154_object, 0.05);
}


// @pe
void func_1128(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_580_object, object var_581_object)
{
	var_0_object = var_581_object;
	var_3_string = false;
	if(1 != 0) {
		func_1191(var_581_object, "Neutral");
		var_0_object->SetMessage(526198); //@t
		var_0_object->ClearReplies(); //@t
		bool var_596_bool;
		func_3887(var_580_object);
		if(var_596_bool != 0)
			var_0_object->AddReply(526199, 30173, 27480); //@t
		var_0_object->AddReply(526202, -1, 27483); //@t
		goto Label_1161;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x46c";
	}
Label_1161:
	bool var_608_bool;
	func_3672(var_608_bool);
	if(var_608_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1190;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1190:
		return 0;

	}
	
}


void func_2920(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_3138(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3691(void)
{
	@SetVariable("k3q01KapellaAboutHan", 1);
	object var_119_object;
	func_4140(var_119_object);
	object var_116_object;
	var_119_object = var_116_object;
	float var_124_float;
	func_3620(var_124_float);
	var_116_object->AddMark("k3q01KapellaGotoAnna", "pt_map_anna", 1, 525456, var_124_float);
	func_3995();
}
EMIT "Stack[-1] = 0";


void func_3180(object var_148_object, string var_149_string, int var_150_int)
{
	int var_152_int;
	var_148_object->GetProperty(var_149_string, var_152_int);
	var_148_object->SetProperty(var_149_string, (var_152_int + var_150_int));
}


// @pe
void func_3947(bool var_458_bool)
{
	int var_460_int;
	func_3516(var_460_int, "k5q04SoborVisit");
	if(var_460_int != 0) {
		var_458_bool = true;
		return 0;
	}
	var_458_bool = false;
}


void func_3436(string var_257_string)
{
	bool var_261_bool; float var_262_float; float var_263_float;
	@lshHasAnimation(var_261_bool, var_257_string);
	if(var_261_bool != 0) {
		@lshGetAnimTimes(var_257_string, var_262_float, var_263_float);
		@lshPlayAnimation(var_262_float, var_263_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_257_string);
	}
	
}


// @pe
void func_4207(object var_54_object)
{
	var_55_bool = GlobalVars[1];
	if(!var_55_bool) { //@nz
		int var_57_int; object var_58_object;
		var_54_object = var_58_object;
		TaskCall(2);
		func_757(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_282_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_283_bool;
	func_3634(var_283_bool, 3);
	if(var_283_bool != 0) {
		int var_286_int; object var_287_object;
		var_54_object = var_287_object;
		TaskCall(0);
		func_0(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	bool var_385_bool;
	func_3634(var_385_bool, 5);
	if(var_385_bool != 0) {
		int var_387_int; object var_388_object;
		var_54_object = var_388_object;
		TaskCall(10);
		func_2050(var_389_object, var_387_int, var_388_object);
		TaskReturn();
		return 0;
	}
	bool var_482_bool;
	func_3634(var_482_bool, 6);
	if(var_482_bool != 0) {
		int var_484_int; object var_485_object;
		var_54_object = var_485_object;
		TaskCall(6);
		func_1327(var_486_object, var_484_int, var_485_object);
		TaskReturn();
		return 0;
	}
	bool var_554_bool;
	func_3634(var_554_bool, 7);
	if(var_554_bool != 0) {
		int var_556_int; object var_557_object;
		var_54_object = var_557_object;
		TaskCall(4);
		func_1047(var_558_object, var_556_int, var_557_object);
		TaskReturn();
		return 0;
	}
	bool var_618_bool;
	func_3634(var_618_bool, 12);
	if(var_618_bool != 0) {
		int var_620_int; object var_621_object;
		var_54_object = var_621_object;
		TaskCall(8);
		func_1791(var_622_object, var_620_int, var_621_object);
		TaskReturn();
		return 0;
	}
	int var_679_int; object var_680_object;
	var_54_object = var_680_object;
	TaskCall(12);
	func_2676(var_681_object, var_679_int, var_680_object);
	TaskReturn();
}


void func_3187(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


void func_2676(object var_0_object, int var_679_int, object var_680_object)
{
	var_0_object = var_680_object;
	bool var_690_bool; object var_691_object;
	var_680_object = var_691_object;
	func_3211(var_690_bool, var_691_object, 70.0);
	if(!var_690_bool) { //@nz
		var_679_int = -2;
		return 8;
	}
	object var_686_object;
	@CreateDialog(var_686_object);
	int var_694_int;
	func_3666(var_694_int);
	var_686_object->SetNPCName(var_694_int);
	int var_695_int;
	func_3664(var_695_int);
	var_686_object->SetNPCDescription(var_695_int);
	string var_696_string;
	func_3668(var_696_string);
	var_686_object->SetPhoto(var_696_string);
	string var_697_string;
	func_3670(var_697_string);
	var_686_object->SetPhoto2(var_697_string);
	int var_698_int;
	func_4190(var_698_int);
	var_686_object->SetPlayerName(var_698_int);
	bool var_687_bool;
	@IsOverrideActive(var_687_bool);
	if(var_687_bool != 0) {
		var_679_int = -2;
		return 8;
	}
	@DoDialog(var_686_object);
	bool var_700_bool; object var_701_object;
	object var_702_object;
	func_3489(var_702_object);
	var_702_object = var_701_object;
	func_3298(var_700_bool, var_701_object);
	object var_703_object; object var_704_object;
	var_680_object = var_703_object;
	var_686_object = var_704_object;
	TaskCall(13);
	func_2757(var_705_object, var_706_object, var_707_string, var_708_bool, var_703_object, var_704_object);
	TaskReturn();
	bool var_689_bool;
	var_686_object->IsDialogEnd(var_689_bool);
	
	for(;;) {
		var_733_bool = !var_689_bool; //@nz
		if(var_733_bool == 0) goto Label_2746;
		@sync();
		var_686_object->IsDialogEnd(var_689_bool);
	}
	
Label_2746:
	object var_734_object;
	var_680_object = var_734_object;
	func_3280();
	@StopDialog(var_686_object);
	var_686_object->GetReturnValue(-1);
	int var_688_int = var_679_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3959(bool var_464_bool)
{
	int var_466_int;
	func_3516(var_466_int, "k5q04");
	if(var_466_int == 1000)
		var_464_bool = true;
	var_464_bool = false;
}


void func_3452(string var_235_string, bool var_236_bool)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_235_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_235_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, var_236_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_235_string);
	}
	
}


void func_3197(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_3187(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_2942(void)
{
	float var_738_float;
	@rand(var_738_float, 8, 16);
	@SetTimer(10, var_738_float);
}


// @pe
void func_896(object var_2_object, string var_231_string)
{
	bool var_232_bool;
	func_3672(var_232_bool);
	if(!var_232_bool) //@nz
		return 0;
	if(var_231_string == var_2_object)
		return 0;
	string var_235_string; bool var_236_bool;
	var_231_string = var_235_string;
	if(var_231_string == "")
		var_236_bool = false;
	else
		var_236_bool = true;
	func_3452(var_235_string, var_236_bool);
	var_2_object = var_231_string;
	
}


// @pe
void func_1408(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_508_object, object var_509_object)
{
	var_0_object = var_509_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_515_bool;
		func_3899(var_508_object);
		if(var_515_bool != 0) {
			func_1491(var_509_object, "Neutral");
			var_0_object->SetMessage(526727); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526728, 30294, 28005); //@t
			var_0_object->AddReply(541532, 43694, 43693); //@t
		} else {
					func_1491(var_509_object, "Neutral");
					var_0_object->SetMessage(526735); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526736, -1, 28013); //@t
					var_0_object->AddReply(528870, -1, 30293); //@t
		}
	}
	for(;;) {
		bool var_536_bool;
		func_3672(var_536_bool);
		if(var_536_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3436(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1490;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1490:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x584";


void func_3714(void)
{
	object var_46_object;
	func_4140(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3620(var_57_float);
	var_45_object->AddMark("k3q04KapellaGotoDanko", "pt_gmap_dt_house2_08", 0, 529819, var_57_float);
	func_4008();
	func_4021();
	object var_91_object;
	func_3521(var_91_object, "quest_k3_04");
	bool var_99_bool;
	func_3608(var_99_bool, "quest_k3_04", "place_burah_lopuh");
}
EMIT "Stack[-1] = 0";


// @pe
void func_3971(bool var_354_bool)
{
	int var_356_int;
	func_3516(var_356_int, "k3q04SawDanko");
	if(var_356_int != 0) {
		var_354_bool = true;
		return 0;
	}
	var_354_bool = false;
}


void func_3206(bool var_37_bool)
{
	bool var_39_bool;
	@IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
}


void func_2951(void)
{
	@KillTimer(10);
}


void func_3211(bool var_68_bool, object var_69_object, float var_70_float)
{
	cvector var_81_cvector; bool var_88_bool;
	var_69_object->GetPosition(var_81_cvector);
	float var_80_float;
	var_69_object->GetEyesHeight(var_80_float);
	var_89_float = GetByIndex(var_81_cvector, 1);
	SetByIndex(var_81_cvector, 1) = (var_89_float + var_80_float);
	cvector var_82_cvector;
	@GetPosition(var_82_cvector);
	@GetEyesHeight(var_80_float);
	var_90_float = GetByIndex(var_82_cvector, 1);
	SetByIndex(var_82_cvector, 1) = (var_90_float + var_80_float);
	cvector var_83_cvector = var_81_cvector - var_82_cvector;
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (float)0;
	var_93_float = sqrt(var_83_cvector | var_83_cvector);
	var_83_cvector /= var_93_float;
	cvector var_84_cvector = -var_83_cvector;
	cvector var_95_cvector;
	func_3495(var_95_cvector, (var_84_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_85_cvector = ((var_83_cvector * var_70_float) + (var_95_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_87_bool;
	@IsOverrideActive(var_87_bool);
	if(var_87_bool != 0)
		var_68_bool = false;
	@StopWorld();
	@CameraTransit((var_82_cvector + var_85_cvector), var_84_cvector, true);
	var_109_float = GetByIndex(var_85_cvector, 0);
	var_110_float = GetByIndex(var_85_cvector, 2);
	@Rotate(var_109_float, var_110_float);
	bool var_111_bool;
	func_3672(var_111_bool);
	if(var_111_bool != 0) {
	} else {
		@HasAnimationTrack(var_88_bool, "head");
		if(var_88_bool == 0) goto Label_3274;
		@LookAsyncCamera("head");
	}
Label_3274:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_68_bool = true;
	
}


void func_3467(bool var_163_bool, string var_164_string)
{
	bool var_166_bool;
	bool var_167_bool;
	func_3672(var_167_bool);
	if(var_167_bool != 0) {
		@lshHasSpeech(var_166_bool, var_164_string);
		if(var_166_bool != 0) {
			@lshPlaySpeech(var_164_string);
			var_163_bool = true;
		}
	}
	var_163_bool = false;
}


// @pe
void func_3983(bool var_360_bool)
{
	int var_362_int;
	func_3516(var_362_int, "ook3Kapella2");
	if(var_362_int == 0) {
		var_360_bool = true;
		return 0;
	}
	var_360_bool = false;
}


// @pe
void func_1935(object var_2_object, string var_651_string)
{
	bool var_652_bool;
	func_3672(var_652_bool);
	if(!var_652_bool) //@nz
		return 0;
	if(var_651_string == var_2_object)
		return 0;
	string var_655_string; bool var_656_bool;
	var_651_string = var_655_string;
	if(var_651_string == "")
		var_656_bool = false;
	else
		var_656_bool = true;
	func_3452(var_655_string, var_656_bool);
	var_2_object = var_651_string;
	
}


void func_3482(void)
{
	bool var_39_bool;
	func_3672(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_3995(void)
{
	object var_126_object;
	@CreateDiaryEntry(var_126_object, 340, 1, 525449);
	bool var_130_bool; object var_131_object;
	var_126_object = var_131_object;
	func_4112(var_130_bool, var_131_object, 337);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3745(void)
{
	@SetVariable("k7q01", 8);
	func_4086();
}


void func_3489(object var_131_object)
{
	object var_133_object;
	@self(var_133_object);
	var_133_object = var_131_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1191(object var_2_object, string var_587_string)
{
	bool var_588_bool;
	func_3672(var_588_bool);
	if(!var_588_bool) //@nz
		return 0;
	if(var_587_string == var_2_object)
		return 0;
	string var_591_string; bool var_592_bool;
	var_587_string = var_591_string;
	if(var_587_string == "")
		var_592_bool = false;
	else
		var_592_bool = true;
	func_3452(var_591_string, var_592_bool);
	var_2_object = var_587_string;
	
}


void func_3495(cvector var_95_cvector, cvector var_96_cvector)
{
	float var_99_float = sqrt(var_96_cvector | var_96_cvector);
	if(var_99_float < 0.000001)
		var_95_cvector = [0.0, 0.0, 0.0];
	var_95_cvector = var_96_cvector / var_99_float;
}


void func_4008(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 354, 2, 525654);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_4112(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3754(void)
{
	@SetVariable("k6q02", 2);
	func_4073();
}


// @pe
void func_3505(float var_195_float, float var_196_float, float var_197_float, float var_198_float)
{
	if(var_196_float < var_197_float) {
		var_197_float = var_195_float;
		return 0;
	}
	if(var_196_float > var_198_float) {
		var_198_float = var_195_float;
		return 0;
	}
	var_196_float = var_195_float;
}


// @pe
void func_3763(void)
{
	@SetVariable("ook3Kapella1", 1);
}


void func_4021(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 355, 2, 525655);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_4112(var_88_bool, var_89_object, 354);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3769(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_187(object var_2_object, string var_317_string)
{
	bool var_318_bool;
	func_3672(var_318_bool);
	if(!var_318_bool) //@nz
		return 0;
	if(var_317_string == var_2_object)
		return 0;
	string var_321_string; bool var_322_bool;
	var_317_string = var_321_string;
	if(var_317_string == "")
		var_322_bool = false;
	else
		var_322_bool = true;
	func_3452(var_321_string, var_322_bool);
	var_2_object = var_317_string;
	
}


void func_3516(int var_328_int, string var_329_string)
{
	int var_331_int;
	@GetVariable(var_329_string, var_331_int);
	var_331_int = var_328_int;
}


// @pe
void func_3775(void)
{
	@SetVariable("ook5Kapella1", 1);
}


void func_3521(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4034(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 740, 2, 539457);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_4112(var_67_bool, var_68_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2244(object var_2_object, string var_432_string)
{
	bool var_433_bool;
	func_3672(var_433_bool);
	if(!var_433_bool) //@nz
		return 0;
	if(var_432_string == var_2_object)
		return 0;
	string var_436_string; bool var_437_bool;
	var_432_string = var_436_string;
	if(var_432_string == "")
		var_437_bool = false;
	else
		var_437_bool = true;
	func_3452(var_436_string, var_437_bool);
	var_2_object = var_432_string;
	
}


void func_3781(void)
{
	@SetVariable("k5q04", 1);
	object var_48_object;
	func_4140(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_3620(var_59_float);
	var_45_object->AddMark("k5q04KapellaGotoMaria", "pt_map_maria", 0, 515282, var_59_float);
	func_4034();
	func_4060();
}
EMIT "Stack[-1] = 0";


// @pe
void func_2757(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_703_object, object var_704_object)
{
	var_0_object = var_704_object;
	var_1_object = var_703_object;
	var_3_string = false;
	if(1 != 0) {
		func_2815(var_704_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2785;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xac9";
	}
Label_2785:
	bool var_725_bool;
	func_3672(var_725_bool);
	if(var_725_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3436(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2814;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2814:
		return 0;

	}
	
}


void func_3532(int var_157_int, int var_158_int)
{
	object var_160_object;
	@CreateIntVector(var_160_object);
	var_160_object->add(var_157_int);
	var_160_object->add(var_158_int);
	@SendWorldWndMessage(3, var_160_object);
}
EMIT "Stack[-1] = 0";


void func_4047(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 747, 2, 539464);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_4112(var_128_bool, var_129_object, 740);
}
EMIT "Stack[-1] = 0";


void func_3280(void)
{
	bool var_276_bool;
	@CameraSwitchToNormal(true);
	bool var_278_bool;
	func_3672(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		@HasAnimationTrack(var_276_bool, "head");
		if(var_276_bool == 0) goto Label_3297;
		@UnlookAsync("head");
	}
Label_3297:
	
}


// @pe
void func_1491(object var_2_object, string var_521_string)
{
	bool var_522_bool;
	func_3672(var_522_bool);
	if(!var_522_bool) //@nz
		return 0;
	if(var_521_string == var_2_object)
		return 0;
	string var_525_string; bool var_526_bool;
	var_521_string = var_525_string;
	if(var_521_string == "")
		var_526_bool = false;
	else
		var_526_bool = true;
	func_3452(var_525_string, var_526_bool);
	var_2_object = var_521_string;
	
}


void func_3544(object var_144_object, int var_145_int)
{
	int var_147_int;
	object var_148_object;
	var_144_object = var_148_object;
	int var_150_int;
	func_3180(var_148_object, "money", var_150_int);
	if(var_150_int > 0) {
		@GetInvItemByName(var_147_int, "Money");
		int var_157_int; int var_158_int;
		var_147_int = var_157_int;
		var_145_int = var_158_int;
		func_3532(var_157_int, var_158_int);
	}
}


void func_4060(void)
{
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 741, 2, 539458);
	bool var_90_bool; object var_91_object;
	var_86_object = var_91_object;
	func_4112(var_90_bool, var_91_object, 740);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3807(void)
{
	func_4047();
	bool var_131_bool;
	func_3608(var_131_bool, "quest_k5_04", "completed");
}


void func_3298(bool var_129_bool, object var_130_object)
{
	int var_136_int; int var_137_int;
	@GetVariable("voice_common", var_136_int);
	if(var_136_int != 0) {
		bool var_140_bool; object var_141_object;
		var_130_object = var_141_object;
		func_3356(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_171_bool; object var_172_object;
			var_130_object = var_172_object;
			func_3393(var_171_bool, var_172_object);
			if(!var_171_bool) { //@nz
				var_129_bool = false;
				return 4;
			}
		}
		@irand(var_137_int, 2);
		if(var_137_int != 0)
			@SetVariable("voice_common", ((var_136_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_216_bool; object var_217_object;
		var_130_object = var_217_object;
		func_3393(var_216_bool, var_217_object);
		if(!var_216_bool) { //@nz
			bool var_219_bool; object var_220_object;
			var_130_object = var_220_object;
			func_3356(var_219_bool, var_220_object);
			if(!var_219_bool) { //@nz
				var_129_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3354;
	
Label_3354:
	var_129_bool = true;
	
}


// @pe
void func_3817(void)
{
	@SetVariable("k5Kapellavisit", 1);
}


void func_4073(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 502, 2, 528768);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_4112(var_51_bool, var_52_object, 500);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3563(bool var_166_bool, object var_167_object, float var_168_float)
{
	if(!var_167_object) { //@nz
		var_166_bool = false;
		return 0;
	}
	if(var_168_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_168_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_173_float;
		var_168_float = var_173_float;
		func_3598(var_173_float);
		bool var_177_bool; object var_178_object; float var_180_float;
		var_167_object = var_178_object;
		var_168_float = var_180_float;
		func_3158(var_177_bool, var_178_object, "reputation", var_180_float, (float)0, (float)1);
		var_166_bool = true;
		return 0;

	}
	
	var_166_bool = false;
}


// @pe
void func_3823(object var_215_object)
{
	object var_218_object;
	var_215_object = var_218_object;
	bool var_217_bool;
	func_3563(var_217_bool, var_218_object, 0.02);
}


void func_757(object var_0_object, int var_57_int, object var_58_object)
{
	var_0_object = var_58_object;
	bool var_68_bool; object var_69_object;
	var_58_object = var_69_object;
	func_3211(var_68_bool, var_69_object, 70.0);
	if(!var_68_bool) { //@nz
		var_57_int = -2;
		return 8;
	}
	object var_64_object;
	@CreateDialog(var_64_object);
	int var_116_int;
	func_3666(var_116_int);
	var_64_object->SetNPCName(var_116_int);
	int var_117_int;
	func_3664(var_117_int);
	var_64_object->SetNPCDescription(var_117_int);
	string var_118_string;
	func_3668(var_118_string);
	var_64_object->SetPhoto(var_118_string);
	string var_119_string;
	func_3670(var_119_string);
	var_64_object->SetPhoto2(var_119_string);
	int var_120_int;
	func_4190(var_120_int);
	var_64_object->SetPlayerName(var_120_int);
	bool var_65_bool;
	@IsOverrideActive(var_65_bool);
	if(var_65_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	@DoDialog(var_64_object);
	bool var_129_bool; object var_130_object;
	object var_131_object;
	func_3489(var_131_object);
	var_131_object = var_130_object;
	func_3298(var_129_bool, var_130_object);
	object var_224_object; object var_225_object;
	var_58_object = var_224_object;
	var_64_object = var_225_object;
	TaskCall(3);
	func_838(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	bool var_67_bool;
	var_64_object->IsDialogEnd(var_67_bool);
	
	for(;;) {
		var_273_bool = !var_67_bool; //@nz
		if(var_273_bool == 0) goto Label_827;
		@sync();
		var_64_object->IsDialogEnd(var_67_bool);
	}
	
Label_827:
	object var_274_object;
	var_58_object = var_274_object;
	func_3280();
	@StopDialog(var_64_object);
	var_64_object->GetReturnValue(-1);
	int var_66_int = var_57_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3830(void)
{
	@SetVariable("ook3Kapella2", 1);
}


void func_3062(void)
{
	bool var_49_bool; int var_50_int; int var_51_int; bool var_52_bool;
	@WaitForAnimEnd();
	bool var_53_bool;
	func_3206(var_53_bool);
	if(!var_53_bool) //@nz
		return 12;
	int var_55_int;
	func_3647(var_55_int);
	int var_47_int;
	var_55_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_68_bool = false;
		if(var_48_int < 5) {
			bool var_71_bool;
			func_3206(var_71_bool);
			if(var_71_bool != 0)
				var_68_bool = true;
		}
		if(var_68_bool != 0) {
			if(!var_47_int) { //@nz
				@Sleep(3, var_49_bool);
				if(!var_49_bool) { //@nz
				} else {
			} else {
			@irand(var_50_int, var_47_int);
			@irand(var_51_int, 5);
			if(var_51_int != 0)
				var_50_int = 0;
			string var_82_string; int var_83_int;
			var_50_int = var_83_int;
			func_3640(var_82_string, var_83_int);
			@PlayAnimation("all", var_82_string);
			@WaitForAnimEnd(var_52_bool);
			var_84_bool = !var_52_bool; //@nz
			if(var_84_bool == 0) goto Label_3117;
			goto Label_3128;
			}
				Label_3117:
					bool var_75_bool;
					func_3131(var_75_bool);
					var_76_bool = !var_75_bool; //@nz
					if(var_76_bool == 0) goto Label_3123;
			}
		}
	Label_3128:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3123:
		@ResetAAS();
		var_48_int += 1;
	}
	
}


void func_4086(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 426, 1, 526225);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_4112(var_51_bool, var_52_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3836(object var_210_object)
{
	@Trace("money 5000 is given");
	object var_213_object;
	var_210_object = var_213_object;
	func_3544(var_213_object, 5000);
}


void func_1791(object var_0_object, int var_620_int, object var_621_object)
{
	var_0_object = var_621_object;
	bool var_631_bool; object var_632_object;
	var_621_object = var_632_object;
	func_3211(var_631_bool, var_632_object, 70.0);
	if(!var_631_bool) { //@nz
		var_620_int = -2;
		return 8;
	}
	object var_627_object;
	@CreateDialog(var_627_object);
	int var_635_int;
	func_3666(var_635_int);
	var_627_object->SetNPCName(var_635_int);
	int var_636_int;
	func_3664(var_636_int);
	var_627_object->SetNPCDescription(var_636_int);
	string var_637_string;
	func_3668(var_637_string);
	var_627_object->SetPhoto(var_637_string);
	string var_638_string;
	func_3670(var_638_string);
	var_627_object->SetPhoto2(var_638_string);
	int var_639_int;
	func_4190(var_639_int);
	var_627_object->SetPlayerName(var_639_int);
	bool var_628_bool;
	@IsOverrideActive(var_628_bool);
	if(var_628_bool != 0) {
		var_620_int = -2;
		return 8;
	}
	@DoDialog(var_627_object);
	bool var_641_bool; object var_642_object;
	object var_643_object;
	func_3489(var_643_object);
	var_643_object = var_642_object;
	func_3298(var_641_bool, var_642_object);
	object var_644_object; object var_645_object;
	var_621_object = var_644_object;
	var_627_object = var_645_object;
	TaskCall(9);
	func_1872(var_646_object, var_647_object, var_648_string, var_649_bool, var_644_object, var_645_object);
	TaskReturn();
	bool var_630_bool;
	var_627_object->IsDialogEnd(var_630_bool);
	
	for(;;) {
		var_677_bool = !var_630_bool; //@nz
		if(var_677_bool == 0) goto Label_1861;
		@sync();
		var_627_object->IsDialogEnd(var_630_bool);
	}
	
Label_1861:
	object var_678_object;
	var_621_object = var_678_object;
	func_3280();
	@StopDialog(var_627_object);
	var_627_object->GetReturnValue(-1);
	int var_629_int = var_620_int;
}
EMIT "Stack[-4] = 0";


