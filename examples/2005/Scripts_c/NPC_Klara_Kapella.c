// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_37_cvector == 26964) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3475();
			}
			if(var_37_cvector == 26789) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_3519();
			}
			if(var_37_cvector == 26791) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_3452();
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_3596();
			}
			if(var_36_bool == 26788) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525420); //@t
				var_0_object->ClearReplies(); //@t
				bool var_146_bool;
				func_3673(var_1_object);
				if(var_146_bool != 0)
					var_0_object->AddReply(525620, 41124, 26962); //@t
				bool var_157_bool = false;
				bool var_158_bool;
				func_3625(var_1_object);
				if(var_158_bool != 0) {
					bool var_164_bool;
					func_3661(var_1_object);
					if(var_164_bool != 0)
						var_157_bool = true;
				}
				if(var_157_bool != 0)
					var_0_object->AddReply(525421, 42590, 26789); //@t
				var_0_object->AddReply(525424, -1, 26792); //@t
				var_0_object->AddReply(539182, -1, 41123); //@t
				return 0;
			}
			if(var_36_bool == 42590) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540577, 42592, 42591); //@t
				return 0;
			}
			if(var_36_bool == 42592) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540579, 42594, 42593); //@t
				return 0;
			}
			if(var_36_bool == 42594) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540580); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540581, 26790, 42595); //@t
				var_0_object->AddReply(540613, 42634, 42633); //@t
				return 0;
			}
			if(var_36_bool == 42634) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540615, 42637, 42635); //@t
				return 0;
			}
			if(var_36_bool == 26790) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529338, 30794, 30793); //@t
				return 0;
			}
			if(var_36_bool == 30794) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529339); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540612, 42637, 42632); //@t
				return 0;
			}
			if(var_36_bool == 42637) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540618, 42640, 42639); //@t
				var_0_object->AddReply(540620, 42640, 42641); //@t
				return 0;
			}
			if(var_36_bool == 42640) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540582, 42597, 42596); //@t
				return 0;
			}
			if(var_36_bool == 42597) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540584, 42599, 42598); //@t
				var_0_object->AddReply(540588, 42603, 42602); //@t
				return 0;
			}
			if(var_36_bool == 42603) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540590, 42616, 42604); //@t
				var_0_object->AddReply(540591, 42616, 42605); //@t
				return 0;
			}
			if(var_36_bool == 42599) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540585); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540586, 42616, 42600); //@t
				var_0_object->AddReply(540587, 42616, 42601); //@t
				return 0;
			}
			if(var_36_bool == 42616) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540602); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525423, -1, 26791); //@t
				return 0;
			}
			if(var_36_bool == 41124) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539184, 41126, 41125); //@t
				var_0_object->AddReply(539188, 41130, 41129); //@t
				return 0;
			}
			if(var_36_bool == 41126) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539185); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539187, 41130, 41128); //@t
				var_0_object->AddReply(539186, 41130, 41127); //@t
				return 0;
			}
			if(var_36_bool == 41130) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539190, 26963, 41132); //@t
				var_0_object->AddReply(539191, 41134, 41133); //@t
				return 0;
			}
			if(var_36_bool == 41134) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539193, 26963, 41135); //@t
				return 0;
			}
			if(var_36_bool == 26963) {
				func_181(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525622, -1, 26964); //@t
				return 0;
			}
			var_3_string = true;
			bool var_322_bool;
			func_3440(var_322_bool);
			if(var_322_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcc";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_36_bool == 26845) {
				func_788(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525490, 42621, 26846); //@t
				var_0_object->AddReply(529311, 30766, 30765); //@t
				return 0;
			}
			if(var_36_bool == 30766) {
				func_788(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529313, 42621, 30767); //@t
				var_0_object->AddReply(540603, 42621, 42620); //@t
				return 0;
			}
			if(var_36_bool == 42621) {
				func_788(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540604); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540605, 42626, 42624); //@t
				var_0_object->AddReply(540606, -1, 42625); //@t
				return 0;
			}
			if(var_36_bool == 42626) {
				func_788(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540607); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540608, 42628, 42627); //@t
				return 0;
			}
			if(var_36_bool == 42628) {
				func_788(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540610, -1, 42629); //@t
				var_0_object->AddReply(540611, -1, 42630); //@t
				return 0;
			}
			var_3_string = true;
			bool var_98_bool;
			func_3440(var_98_bool);
			if(var_98_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x32b";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_37_cvector == 27482) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3501();
			}
			if(var_36_bool == 27479) {
				func_1083(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526198); //@t
				var_0_object->ClearReplies(); //@t
				bool var_84_bool;
				func_3637(var_1_object);
				if(var_84_bool != 0)
					var_0_object->AddReply(526199, 30173, 27480); //@t
				var_0_object->AddReply(526202, -1, 27483); //@t
				return 0;
			}
			if(var_36_bool == 30173) {
				func_1083(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528747); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528748, 27481, 30174); //@t
				return 0;
			}
			if(var_36_bool == 27481) {
				func_1083(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528750, 30177, 30176); //@t
				var_0_object->AddReply(541056, 30177, 43159); //@t
				return 0;
			}
			if(var_36_bool == 30177) {
				func_1083(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526201, -1, 27482); //@t
				return 0;
			}
			var_3_string = true;
			bool var_122_bool;
			func_3440(var_122_bool);
			if(var_122_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x452";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_37_cvector == 28011) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3510();
			}
			if(var_36_bool == 28004) {
				bool var_71_bool;
				func_3649(var_1_object);
				if(var_71_bool != 0) {
					func_1378(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526727); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526728, 30294, 28005); //@t
					return 0;
				}
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526736, -1, 28013); //@t
				var_0_object->AddReply(528870, -1, 30293); //@t
				return 0;
			}
			if(var_36_bool == 30294) {
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528872, 28006, 30295); //@t
				return 0;
			}
			if(var_36_bool == 28006) {
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526729); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528873, 30297, 30296); //@t
				return 0;
			}
			if(var_36_bool == 30297) {
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528875, 30299, 30298); //@t
				return 0;
			}
			if(var_36_bool == 30299) {
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526730, 28008, 28007); //@t
				return 0;
			}
			if(var_36_bool == 28008) {
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526731); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526732, 28010, 28009); //@t
				return 0;
			}
			if(var_36_bool == 28010) {
				func_1378(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526734, -1, 28011); //@t
				return 0;
			}
			var_3_string = true;
			bool var_145_bool;
			func_3440(var_145_bool);
			if(var_145_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x579";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_36_bool == 36960) {
				func_1722(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_36_bool == 36962) {
				func_1722(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_36_bool == 36964) {
				func_1722(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_3440(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d1";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_37_cvector == 41351) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3537();
				object var_93_object = var_1_object;
				func_3609(var_0_object);
			}
			if(var_37_cvector == 41387) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_3563();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_3525();
				object var_141_object = var_1_object;
				func_3442(var_0_object);
			}
			if(var_37_cvector == 42788) {
				object var_164_object = var_1_object;
				func_3602(var_0_object);
			}
			if(var_37_cvector == 42787) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_3563();
				object var_208_object = var_1_object;
				func_3586(var_0_object);
				object var_213_object = var_1_object;
				func_3579(var_0_object);
			}
			if(var_36_bool == 41346) {
				bool var_220_bool;
				func_3685(var_1_object);
				if(var_220_bool != 0) {
					object var_228_object; object var_229_object;
					var_228_object = var_1_object;
					var_229_object = var_0_object;
					func_3531();
					object var_232_object; object var_233_object;
					var_232_object = var_1_object;
					var_233_object = var_0_object;
					func_3573();
					func_2031(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539415); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540750, 42790, 42789); //@t
					var_0_object->AddReply(540754, 42790, 42793); //@t
					return 0;
				}
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539421); //@t
				var_0_object->ClearReplies(); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_3697(var_1_object);
				if(var_258_bool != 0) {
					bool var_264_bool;
					func_3709(var_1_object);
					if(!var_264_bool) //@nz
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(539454, 42779, 41385); //@t
				var_0_object->AddReply(539422, -1, 41353); //@t
				var_0_object->AddReply(540740, -1, 42778); //@t
				return 0;
			}
			if(var_36_bool == 42779) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540742, 41386, 42780); //@t
				return 0;
			}
			if(var_36_bool == 41386) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540743, 42782, 42781); //@t
				var_0_object->AddReply(540747, 42782, 42785); //@t
				return 0;
			}
			if(var_36_bool == 42782) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540745, 42784, 42783); //@t
				var_0_object->AddReply(540748, -1, 42787); //@t
				return 0;
			}
			if(var_36_bool == 42784) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539456, -1, 41387); //@t
				var_0_object->AddReply(540749, -1, 42788); //@t
				return 0;
			}
			if(var_36_bool == 42790) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540752, 42792, 42791); //@t
				var_0_object->AddReply(540755, 42796, 42795); //@t
				return 0;
			}
			if(var_36_bool == 42796) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540756); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540757, 42792, 42797); //@t
				return 0;
			}
			if(var_36_bool == 42792) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539416, 41348, 41347); //@t
				return 0;
			}
			if(var_36_bool == 41348) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539418, 42802, 41349); //@t
				var_0_object->AddReply(540758, 42800, 42799); //@t
				return 0;
			}
			if(var_36_bool == 42800) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540760, 42802, 42801); //@t
				return 0;
			}
			if(var_36_bool == 42802) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540762, 41350, 42803); //@t
				return 0;
			}
			if(var_36_bool == 41350) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539419); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540763, 42806, 42805); //@t
				var_0_object->AddReply(540765, 42806, 42807); //@t
				return 0;
			}
			if(var_36_bool == 42806) {
				func_2031(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539420, -1, 41351); //@t
				var_0_object->AddReply(539423, -1, 41354); //@t
				return 0;
			}
			var_3_string = true;
			bool var_385_bool;
			func_3440(var_385_bool);
			if(var_385_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x806";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3250();
			if(var_36_int == 42548) {
				func_2597(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3440(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa3c";
	
	}

}


maintask task_15
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		var_36_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2668(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2739();
			bool var_40_bool = false;
			bool var_41_bool;
			func_2994(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2708(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2688(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3257(var_82_object);
					var_82_object = var_81_object;
					func_3142(var_80_bool, var_81_object);
				}
			} else {
				func_2703(var_36_int);
				func_2730();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2921();
		func_2739();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_2739();
		func_3222("Neutral");
		func_2730();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2730();
		else
			func_3222("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_2921();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_2985(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3933(var_54_object);
			func_3222("Neutral");
			func_2739();
			func_2730();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_41_bool;
	func_2994(var_41_bool);
	if(!var_41_bool) goto Label_0; //@nz
}


// @pe
void func_3586(object var_208_object)
{
	@Trace("money 5000 is given");
	object var_211_object;
	var_208_object = var_211_object;
	func_3312(var_211_object, 5000);
}


// @pe
void func_3331(bool var_166_bool, object var_167_object, float var_168_float)
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
		func_3366(var_173_float);
		bool var_177_bool; object var_178_object; float var_180_float;
		var_167_object = var_178_object;
		var_168_float = var_180_float;
		func_2946(var_177_bool, var_178_object, "reputation", var_180_float, (float)0, (float)1);
		var_166_bool = true;
		return 0;

	}
	
	var_166_bool = false;
}


void func_3084(bool var_68_bool, object var_69_object)
{
	int var_75_int; int var_76_int;
	@GetVariable("voice_common", var_75_int);
	if(var_75_int != 0) {
		bool var_79_bool; object var_80_object;
		var_69_object = var_80_object;
		func_3142(var_79_bool, var_80_object);
		if(!var_79_bool) { //@nz
			bool var_110_bool; object var_111_object;
			var_69_object = var_111_object;
			func_3179(var_110_bool, var_111_object);
			if(!var_110_bool) { //@nz
				var_68_bool = false;
				return 4;
			}
		}
		@irand(var_76_int, 2);
		if(var_76_int != 0)
			@SetVariable("voice_common", ((var_75_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_155_bool; object var_156_object;
		var_69_object = var_156_object;
		func_3179(var_155_bool, var_156_object);
		if(!var_155_bool) { //@nz
			bool var_158_bool; object var_159_object;
			var_69_object = var_159_object;
			func_3142(var_158_bool, var_159_object);
			if(!var_158_bool) { //@nz
				var_68_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3140;
	
Label_3140:
	var_68_bool = true;
	
}


void func_13(object var_0_object, int var_274_int, object var_275_object)
{
	var_0_object = var_275_object;
	bool var_285_bool; object var_286_object;
	object var_287_object;
	func_3257(var_287_object);
	var_287_object = var_286_object;
	func_3084(var_285_bool, var_286_object);
	bool var_288_bool; object var_289_object;
	var_275_object = var_289_object;
	func_2999(var_288_bool, var_289_object, 70.0);
	if(!var_288_bool) { //@nz
		var_274_int = -2;
		return 8;
	}
	object var_281_object;
	@CreateDialog(var_281_object);
	int var_292_int;
	func_3434(var_292_int);
	var_281_object->SetNPCName(var_292_int);
	int var_293_int;
	func_3432(var_293_int);
	var_281_object->SetNPCDescription(var_293_int);
	string var_294_string;
	func_3436(var_294_string);
	var_281_object->SetPhoto(var_294_string);
	string var_295_string;
	func_3438(var_295_string);
	var_281_object->SetPhoto2(var_295_string);
	int var_296_int;
	func_3916(var_296_int);
	var_281_object->SetPlayerName(var_296_int);
	bool var_282_bool;
	@IsOverrideActive(var_282_bool);
	if(var_282_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	@DoDialog(var_281_object);
	object var_298_object; object var_299_object;
	var_275_object = var_298_object;
	var_281_object = var_299_object;
	TaskCall(2);
	func_94(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object);
	TaskReturn();
	bool var_284_bool;
	var_281_object->IsDialogEnd(var_284_bool);
	
	for(;;) {
		var_355_bool = !var_284_bool; //@nz
		if(var_355_bool == 0) goto Label_83;
		@sync();
		var_281_object->IsDialogEnd(var_284_bool);
	}
	
Label_83:
	object var_356_object;
	var_275_object = var_356_object;
	func_3067();
	@StopDialog(var_281_object);
	var_281_object->GetReturnValue(-1);
	int var_283_int = var_274_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3596(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_3602(object var_164_object)
{
	object var_167_object;
	var_164_object = var_167_object;
	bool var_166_bool;
	func_3331(var_166_bool, var_167_object, 0.1);
}


// @pe
void func_788(object var_2_object, string var_230_string)
{
	bool var_231_bool;
	func_3440(var_231_bool);
	if(!var_231_bool) //@nz
		return 0;
	if(var_230_string == var_2_object)
		return 0;
	string var_234_string; bool var_235_bool;
	var_230_string = var_234_string;
	if(var_230_string == "")
		var_235_bool = false;
	else
		var_235_bool = true;
	func_3229(var_234_string, var_235_bool);
	var_2_object = var_230_string;
	
}


// @pe
void func_1300(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_480_object, object var_481_object)
{
	var_0_object = var_481_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_487_bool;
		func_3649(var_480_object);
		if(var_487_bool != 0) {
			func_1378(var_481_object, "Neutral");
			var_0_object->SetMessage(526727); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526728, 30294, 28005); //@t
		} else {
					func_1378(var_481_object, "Neutral");
					var_0_object->SetMessage(526735); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526736, -1, 28013); //@t
					var_0_object->AddReply(528870, -1, 30293); //@t
		}
	}
	for(;;) {
		bool var_505_bool;
		func_3440(var_505_bool);
		if(var_505_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3222(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1377;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1377:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x518";


// @pe
void func_3609(object var_94_object)
{
	object var_98_object;
	func_3866(var_98_object);
	object var_95_object;
	var_98_object = var_95_object;
	func_3883(var_95_object, "pt_map_maria", (float)2);
	object var_118_object;
	func_3866(var_118_object);
	var_94_object->ShowMap(var_118_object);
}


void func_3866(object var_48_object)
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


void func_2850(void)
{
	bool var_63_bool; int var_64_int; int var_65_int; bool var_66_bool;
	@WaitForAnimEnd();
	bool var_67_bool;
	func_2994(var_67_bool);
	if(!var_67_bool) //@nz
		return 12;
	int var_69_int;
	func_3415(var_69_int);
	int var_61_int;
	var_69_int = var_61_int;
	int var_62_int = 0;
	
	for(;;) {
		bool var_82_bool = false;
		if(var_62_int < 5) {
			bool var_85_bool;
			func_2994(var_85_bool);
			if(var_85_bool != 0)
				var_82_bool = true;
		}
		if(var_82_bool != 0) {
			if(!var_61_int) { //@nz
				@Sleep(3, var_63_bool);
				if(!var_63_bool) { //@nz
				} else {
			} else {
			@irand(var_64_int, var_61_int);
			@irand(var_65_int, 5);
			if(var_65_int != 0)
				var_64_int = 0;
			string var_96_string; int var_97_int;
			var_64_int = var_97_int;
			func_3408(var_96_string, var_97_int);
			@PlayAnimation("all", var_96_string);
			@WaitForAnimEnd(var_66_bool);
			var_98_bool = !var_66_bool; //@nz
			if(var_98_bool == 0) goto Label_2905;
			goto Label_2916;
			}
				Label_2905:
					bool var_89_bool;
					func_2919(var_89_bool);
					var_90_bool = !var_89_bool; //@nz
					if(var_90_bool == 0) goto Label_2911;
			}
		}
	Label_2916:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2911:
		@ResetAAS();
		var_62_int += 1;
	}
	
}


// @pe
void func_2597(object var_2_object, string var_679_string)
{
	bool var_680_bool;
	func_3440(var_680_bool);
	if(!var_680_bool) //@nz
		return 0;
	if(var_679_string == var_2_object)
		return 0;
	string var_683_string; bool var_684_bool;
	var_679_string = var_683_string;
	if(var_679_string == "")
		var_684_bool = false;
	else
		var_684_bool = true;
	func_3229(var_683_string, var_684_bool);
	var_2_object = var_679_string;
	
}


void func_3366(float var_173_float)
{
	object var_175_object;
	@CreateFloatVector(var_175_object);
	var_175_object->add(var_173_float);
	@SendWorldWndMessage(16, var_175_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3625(bool var_326_bool)
{
	int var_328_int;
	func_3284(var_328_int, "k3q01");
	if(var_328_int == 2)
		var_326_bool = true;
	var_326_bool = false;
}


void func_1578(object var_0_object, int var_589_int, object var_590_object)
{
	var_0_object = var_590_object;
	bool var_600_bool; object var_601_object;
	object var_602_object;
	func_3257(var_602_object);
	var_602_object = var_601_object;
	func_3084(var_600_bool, var_601_object);
	bool var_603_bool; object var_604_object;
	var_590_object = var_604_object;
	func_2999(var_603_bool, var_604_object, 70.0);
	if(!var_603_bool) { //@nz
		var_589_int = -2;
		return 8;
	}
	object var_596_object;
	@CreateDialog(var_596_object);
	int var_607_int;
	func_3434(var_607_int);
	var_596_object->SetNPCName(var_607_int);
	int var_608_int;
	func_3432(var_608_int);
	var_596_object->SetNPCDescription(var_608_int);
	string var_609_string;
	func_3436(var_609_string);
	var_596_object->SetPhoto(var_609_string);
	string var_610_string;
	func_3438(var_610_string);
	var_596_object->SetPhoto2(var_610_string);
	int var_611_int;
	func_3916(var_611_int);
	var_596_object->SetPlayerName(var_611_int);
	bool var_597_bool;
	@IsOverrideActive(var_597_bool);
	if(var_597_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	@DoDialog(var_596_object);
	object var_613_object; object var_614_object;
	var_590_object = var_613_object;
	var_596_object = var_614_object;
	TaskCall(10);
	func_1659(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object);
	TaskReturn();
	bool var_599_bool;
	var_596_object->IsDialogEnd(var_599_bool);
	
	for(;;) {
		var_646_bool = !var_599_bool; //@nz
		if(var_646_bool == 0) goto Label_1648;
		@sync();
		var_596_object->IsDialogEnd(var_599_bool);
	}
	
Label_1648:
	object var_647_object;
	var_590_object = var_647_object;
	func_3067();
	@StopDialog(var_596_object);
	var_596_object->GetReturnValue(-1);
	int var_598_int = var_589_int;
}
EMIT "Stack[-4] = 0";


void func_3883(object var_95_object, string var_96_string, float var_97_float)
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


void func_1837(object var_0_object, int var_359_int, object var_360_object)
{
	var_0_object = var_360_object;
	bool var_370_bool; object var_371_object;
	object var_372_object;
	func_3257(var_372_object);
	var_372_object = var_371_object;
	func_3084(var_370_bool, var_371_object);
	bool var_373_bool; object var_374_object;
	var_360_object = var_374_object;
	func_2999(var_373_bool, var_374_object, 70.0);
	if(!var_373_bool) { //@nz
		var_359_int = -2;
		return 8;
	}
	object var_366_object;
	@CreateDialog(var_366_object);
	int var_377_int;
	func_3434(var_377_int);
	var_366_object->SetNPCName(var_377_int);
	int var_378_int;
	func_3432(var_378_int);
	var_366_object->SetNPCDescription(var_378_int);
	string var_379_string;
	func_3436(var_379_string);
	var_366_object->SetPhoto(var_379_string);
	string var_380_string;
	func_3438(var_380_string);
	var_366_object->SetPhoto2(var_380_string);
	int var_381_int;
	func_3916(var_381_int);
	var_366_object->SetPlayerName(var_381_int);
	bool var_367_bool;
	@IsOverrideActive(var_367_bool);
	if(var_367_bool != 0) {
		var_359_int = -2;
		return 8;
	}
	@DoDialog(var_366_object);
	object var_383_object; object var_384_object;
	var_360_object = var_383_object;
	var_366_object = var_384_object;
	TaskCall(12);
	func_1918(var_385_object, var_386_object, var_387_string, var_388_bool, var_383_object, var_384_object);
	TaskReturn();
	bool var_369_bool;
	var_366_object->IsDialogEnd(var_369_bool);
	
	for(;;) {
		var_452_bool = !var_369_bool; //@nz
		if(var_452_bool == 0) goto Label_1907;
		@sync();
		var_366_object->IsDialogEnd(var_369_bool);
	}
	
Label_1907:
	object var_453_object;
	var_360_object = var_453_object;
	func_3067();
	@StopDialog(var_366_object);
	var_366_object->GetReturnValue(-1);
	int var_368_int = var_359_int;
}
EMIT "Stack[-4] = 0";


void func_3376(bool var_131_bool, string var_132_string, string var_133_string)
{
	object var_135_object;
	@FindActor(var_135_object, var_132_string);
	if(var_135_object == null)
		var_131_bool = false;
	@Trigger(var_135_object, var_133_string);
	var_131_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3637(bool var_565_bool)
{
	int var_567_int;
	func_3284(var_567_int, "k7q01");
	if(var_567_int == 7)
		var_565_bool = true;
	var_565_bool = false;
}


// @pe
void func_1083(object var_2_object, string var_556_string)
{
	bool var_557_bool;
	func_3440(var_557_bool);
	if(!var_557_bool) //@nz
		return 0;
	if(var_556_string == var_2_object)
		return 0;
	string var_560_string; bool var_561_bool;
	var_556_string = var_560_string;
	if(var_556_string == "")
		var_561_bool = false;
	else
		var_561_bool = true;
	func_3229(var_560_string, var_561_bool);
	var_2_object = var_556_string;
	
}


void func_3388(float var_59_float)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	var_61_float = var_59_float;
}


// @pe
void func_3649(bool var_487_bool)
{
	int var_489_int;
	func_3284(var_489_int, "k6q02");
	if(var_489_int == 1)
		var_487_bool = true;
	var_487_bool = false;
}


void func_3393(int var_123_int)
{
	float var_125_float;
	@GetGameTime(var_125_float);
	var_123_int = 1 + (var_125_float / 24);
}


void func_3142(bool var_79_bool, object var_80_object)
{
	string var_86_string; bool var_88_bool; int var_89_int; string var_90_string;
	var_86_string = "c";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_102_bool; string var_103_string;
		var_90_string = var_103_string;
		func_3235(var_102_bool, var_103_string);
		var_102_bool = var_79_bool;
		return 10;

	}
}


void func_3067(void)
{
	bool var_265_bool;
	@CameraSwitchToNormal();
	bool var_266_bool;
	func_3440(var_266_bool);
	if(var_266_bool != 0) {
	} else {
		@HasAnimationTrack(var_265_bool, "head");
		if(var_265_bool == 0) goto Label_3083;
		@UnlookAsync("head");
	}
Label_3083:
	
}


// @pe
void func_3402(bool var_271_bool, int var_272_int)
{
	int var_273_int;
	func_3393(var_273_int);
	var_271_bool = var_273_int == var_272_int;
}


void func_3916(int var_214_int)
{
	int var_216_int;
	@GetVariable("branch", var_216_int);
	if(var_216_int == 0) {
		var_214_int = 1;
		return 2;
	EMIT "GOTO 0xf5b";
	}
	if(var_216_int == 1) {
		var_214_int = 2;
		return 2;
	}
	var_214_int = 3;
}


// @pe
void func_3661(bool var_332_bool)
{
	int var_334_int;
	func_3284(var_334_int, "ook3Kapella1");
	if(var_334_int == 0) {
		var_332_bool = true;
		return 0;
	}
	var_332_bool = false;
}


void func_3408(string var_75_string, int var_76_int)
{
	string var_78_string = "idle";
	if(var_76_int != 0)
		var_78_string += var_76_int;
	var_78_string = var_75_string;
}


void func_3415(int var_69_int)
{
	int var_72_int; bool var_73_bool;
	var_72_int = 0;
	
	for(;;) {
		string var_75_string; int var_76_int;
		var_72_int = var_76_int;
		func_3408(var_75_string, var_76_int);
		@HasAnimation(var_73_bool, "all", var_75_string);
		if(!var_73_bool) //@nz
			break;
		var_72_int += 1;
	}
	var_72_int = var_69_int;
}


// @pe
void func_3673(bool var_314_bool)
{
	int var_316_int;
	func_3284(var_316_int, "k3q04");
	if(var_316_int == 0) {
		var_314_bool = true;
		return 0;
	}
	var_314_bool = false;
}


// @pe
void func_3933(object var_54_object)
{
	var_55_bool = GlobalVars[1];
	if(!var_55_bool) { //@nz
		int var_57_int; object var_58_object;
		var_54_object = var_58_object;
		TaskCall(3);
		func_649(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_270_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_271_bool;
	func_3402(var_271_bool, 3);
	if(var_271_bool != 0) {
		int var_274_int; object var_275_object;
		var_54_object = var_275_object;
		TaskCall(1);
		func_13(var_276_object, var_274_int, var_275_object);
		TaskReturn();
		return 0;
	}
	bool var_357_bool;
	func_3402(var_357_bool, 5);
	if(var_357_bool != 0) {
		int var_359_int; object var_360_object;
		var_54_object = var_360_object;
		TaskCall(11);
		func_1837(var_361_object, var_359_int, var_360_object);
		TaskReturn();
		return 0;
	}
	bool var_454_bool;
	func_3402(var_454_bool, 6);
	if(var_454_bool != 0) {
		int var_456_int; object var_457_object;
		var_54_object = var_457_object;
		TaskCall(7);
		func_1219(var_458_object, var_456_int, var_457_object);
		TaskReturn();
		return 0;
	}
	bool var_523_bool;
	func_3402(var_523_bool, 7);
	if(var_523_bool != 0) {
		int var_525_int; object var_526_object;
		var_54_object = var_526_object;
		TaskCall(5);
		func_939(var_527_object, var_525_int, var_526_object);
		TaskReturn();
		return 0;
	}
	bool var_587_bool;
	func_3402(var_587_bool, 12);
	if(var_587_bool != 0) {
		int var_589_int; object var_590_object;
		var_54_object = var_590_object;
		TaskCall(9);
		func_1578(var_591_object, var_589_int, var_590_object);
		TaskReturn();
		return 0;
	}
	int var_648_int; object var_649_object;
	var_54_object = var_649_object;
	TaskCall(13);
	func_2458(var_650_object, var_648_int, var_649_object);
	TaskReturn();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_298_object, object var_299_object)
{
	var_0_object = var_299_object;
	var_1_object = var_298_object;
	var_3_string = false;
	if(1 != 0) {
		func_181(var_299_object, "Neutral");
		var_0_object->SetMessage(525420); //@t
		var_0_object->ClearReplies(); //@t
		bool var_314_bool;
		func_3673(var_1_object);
		if(var_314_bool != 0)
			var_0_object->AddReply(525620, 41124, 26962); //@t
		bool var_325_bool = false;
		bool var_326_bool;
		func_3625(var_1_object);
		if(var_326_bool != 0) {
			bool var_332_bool;
			func_3661(var_1_object);
			if(var_332_bool != 0)
				var_325_bool = true;
		}
		if(var_325_bool != 0)
			var_0_object->AddReply(525421, 42590, 26789); //@t
		var_0_object->AddReply(525424, -1, 26792); //@t
		var_0_object->AddReply(539182, -1, 41123); //@t
		goto Label_151;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_151:
	bool var_347_bool;
	func_3440(var_347_bool);
	if(var_347_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3222(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_180;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_180:
		return 0;

	}
	
}


// @pe
void func_1378(object var_2_object, string var_493_string)
{
	bool var_494_bool;
	func_3440(var_494_bool);
	if(!var_494_bool) //@nz
		return 0;
	if(var_493_string == var_2_object)
		return 0;
	string var_497_string; bool var_498_bool;
	var_493_string = var_497_string;
	if(var_493_string == "")
		var_498_bool = false;
	else
		var_498_bool = true;
	func_3229(var_497_string, var_498_bool);
	var_2_object = var_493_string;
	
}


// @pe
void func_3685(bool var_390_bool)
{
	int var_392_int;
	func_3284(var_392_int, "ook5Kapella1");
	if(var_392_int == 0) {
		var_390_bool = true;
		return 0;
	}
	var_390_bool = false;
}


void func_2919(bool var_89_bool)
{
	var_89_bool = true;
}


void func_3432(int var_211_int)
{
	var_211_int = 515538;
}


void func_2921(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3434(int var_210_int)
{
	var_210_int = 502863;
}


void func_3179(bool var_110_bool, object var_111_object)
{
	bool var_119_bool; int var_120_int; string var_121_string;
	int var_123_int;
	func_3393(var_123_int);
	string var_117_string = ("d" + var_123_int) + "m";
	int var_118_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_111_object->HasProperty((var_117_string + (var_118_int + 1)), var_119_bool);
			if(!var_119_bool) { //@nz
			} else {
				var_118_int += 1;
			}
		}
		if(!var_118_int) { //@nz
			var_110_bool = false;
			return 10;
		}
		var_120_int = 0;
		if(var_118_int > 1)
			@irand(var_120_int, var_118_int);
		var_111_object->GetProperty((var_117_string + (var_120_int + 1)), var_121_string);
		bool var_142_bool; string var_143_string;
		var_121_string = var_143_string;
		func_3235(var_142_bool, var_143_string);
		var_142_bool = var_110_bool;
		return 10;

	}
}


void func_2668(object var_0_object)
{
	bool var_37_bool;
	func_2994(var_37_bool);
	if(!var_37_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2796();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2850();
	}
}
EMIT "Return(); Pop(0)";


void func_3436(string var_212_string)
{
	var_212_string = "ui/NPC_Kapella.png";
}


void func_3438(string var_213_string)
{
	var_213_string = "ui/NPC_Kapella_b.png";
}


void func_2926(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_3440(bool var_106_bool)
{
	var_106_bool = true;
}


// @pe
void func_3697(bool var_430_bool)
{
	int var_432_int;
	func_3284(var_432_int, "k5q04SoborVisit");
	if(var_432_int != 0) {
		var_430_bool = true;
		return 0;
	}
	var_430_bool = false;
}


// @pe
void func_3442(object var_141_object)
{
	@Trace("money 4000 is given");
	object var_144_object;
	var_141_object = var_144_object;
	func_3312(var_144_object, 4000);
}


void func_2934(bool var_185_bool, object var_186_object, string var_187_string)
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


// @pe
void func_1659(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_613_object, object var_614_object)
{
	var_0_object = var_614_object;
	var_1_object = var_613_object;
	var_3_string = false;
	if(1 != 0) {
		func_1722(var_614_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_1692;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x67f";
	}
Label_1692:
	bool var_638_bool;
	func_3440(var_638_bool);
	if(var_638_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3222(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1721;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1721:
		return 0;

	}
	
}


void func_3452(void)
{
	@SetVariable("k3q01KapellaAboutHan", 1);
	object var_113_object;
	func_3866(var_113_object);
	object var_110_object;
	var_113_object = var_110_object;
	float var_118_float;
	func_3388(var_118_float);
	var_110_object->AddMark("k3q01KapellaGotoAnna", "pt_map_anna", 1, 525456, var_118_float);
	func_3721();
}
EMIT "Stack[-1] = 0";


// @pe
void func_3709(bool var_436_bool)
{
	int var_438_int;
	func_3284(var_438_int, "k5q04");
	if(var_438_int == 1000)
		var_436_bool = true;
	var_436_bool = false;
}


// @pe
void func_1918(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_383_object, object var_384_object)
{
	var_0_object = var_384_object;
	var_1_object = var_383_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_390_bool;
		func_3685(var_1_object);
		if(var_390_bool != 0) {
			object var_396_object; object var_397_object;
			var_396_object = var_1_object;
			var_397_object = var_0_object;
			func_3531();
			object var_400_object; object var_401_object;
			var_400_object = var_1_object;
			var_401_object = var_0_object;
			func_3573();
			func_2031(var_384_object, "Neutral");
			var_0_object->SetMessage(539415); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540750, 42790, 42789); //@t
			var_0_object->AddReply(540754, 42790, 42793); //@t
		} else {
					func_2031(var_384_object, "Neutral");
					var_0_object->SetMessage(539421); //@t
					var_0_object->ClearReplies(); //@t
					bool var_429_bool = false;
					bool var_430_bool;
					func_3697(var_1_object);
					if(var_430_bool != 0) {
						bool var_436_bool;
						func_3709(var_1_object);
						if(!var_436_bool) //@nz
							var_429_bool = true;
					}
					if(var_429_bool != 0)
						var_0_object->AddReply(539454, 42779, 41385); //@t
					var_0_object->AddReply(539422, -1, 41353); //@t
					var_0_object->AddReply(540740, -1, 42778); //@t
		}
	}
	for(;;) {
		bool var_419_bool;
		func_3440(var_419_bool);
		if(var_419_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3222(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2030;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2030:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x782";


void func_2688(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_2985(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_2946(bool var_177_bool, object var_178_object, string var_179_string, float var_180_float, float var_181_float, float var_182_float)
{
	object var_186_object;
	var_178_object = var_186_object;
	string var_187_string;
	var_179_string = var_187_string;
	bool var_185_bool;
	func_2934(var_185_bool, var_186_object, var_187_string);
	if(!var_185_bool) //@nz
		var_177_bool = false;
	float var_184_float;
	var_178_object->GetProperty(var_179_string, var_184_float);
	float var_195_float; float var_197_float; float var_198_float;
	var_181_float = var_197_float;
	var_182_float = var_198_float;
	func_3273(var_195_float, (var_184_float + var_180_float), var_197_float, var_198_float);
	var_178_object->SetProperty(var_179_string, var_195_float);
	var_177_bool = true;
}


void func_3721(void)
{
	object var_120_object;
	@CreateDiaryEntry(var_120_object, 340, 1, 525449);
	bool var_124_bool; object var_125_object;
	var_120_object = var_125_object;
	func_3838(var_124_bool, var_125_object, 337);
}
EMIT "Stack[-1] = 0";


void func_649(object var_0_object, int var_57_int, object var_58_object)
{
	var_0_object = var_58_object;
	bool var_68_bool; object var_69_object;
	object var_70_object;
	func_3257(var_70_object);
	var_70_object = var_69_object;
	func_3084(var_68_bool, var_69_object);
	bool var_163_bool; object var_164_object;
	var_58_object = var_164_object;
	func_2999(var_163_bool, var_164_object, 70.0);
	if(!var_163_bool) { //@nz
		var_57_int = -2;
		return 8;
	}
	object var_64_object;
	@CreateDialog(var_64_object);
	int var_210_int;
	func_3434(var_210_int);
	var_64_object->SetNPCName(var_210_int);
	int var_211_int;
	func_3432(var_211_int);
	var_64_object->SetNPCDescription(var_211_int);
	string var_212_string;
	func_3436(var_212_string);
	var_64_object->SetPhoto(var_212_string);
	string var_213_string;
	func_3438(var_213_string);
	var_64_object->SetPhoto2(var_213_string);
	int var_214_int;
	func_3916(var_214_int);
	var_64_object->SetPlayerName(var_214_int);
	bool var_65_bool;
	@IsOverrideActive(var_65_bool);
	if(var_65_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	@DoDialog(var_64_object);
	object var_223_object; object var_224_object;
	var_58_object = var_223_object;
	var_64_object = var_224_object;
	TaskCall(4);
	func_730(var_225_object, var_226_object, var_227_string, var_228_bool, var_223_object, var_224_object);
	TaskReturn();
	bool var_67_bool;
	var_64_object->IsDialogEnd(var_67_bool);
	
	for(;;) {
		var_262_bool = !var_67_bool; //@nz
		if(var_262_bool == 0) goto Label_719;
		@sync();
		var_64_object->IsDialogEnd(var_67_bool);
	}
	
Label_719:
	object var_263_object;
	var_58_object = var_263_object;
	func_3067();
	@StopDialog(var_64_object);
	var_64_object->GetReturnValue(-1);
	int var_66_int = var_57_int;
}
EMIT "Stack[-4] = 0";


void func_2703(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_3475(void)
{
	object var_46_object;
	func_3866(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3388(var_57_float);
	var_45_object->AddMark("k3q04KapellaGotoDanko", "pt_gmap_dt_house2_08", 0, 529819, var_57_float);
	func_3734();
	func_3747();
	object var_91_object;
	func_3289(var_91_object, "quest_k3_04");
}
EMIT "Stack[-1] = 0";


void func_2708(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_2926(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3222(string var_44_string)
{
	float var_47_float; float var_48_float;
	@lshGetAnimTimes(var_44_string, var_47_float, var_48_float);
	@lshPlayAnimation(var_47_float, var_48_float, false);
}


void func_3734(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 354, 2, 525654);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_3838(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2968(object var_148_object, string var_149_string, int var_150_int)
{
	int var_152_int;
	var_148_object->GetProperty(var_149_string, var_152_int);
	var_148_object->SetProperty(var_149_string, (var_152_int + var_150_int));
}


void func_2458(object var_0_object, int var_648_int, object var_649_object)
{
	var_0_object = var_649_object;
	bool var_659_bool; object var_660_object;
	object var_661_object;
	func_3257(var_661_object);
	var_661_object = var_660_object;
	func_3084(var_659_bool, var_660_object);
	bool var_662_bool; object var_663_object;
	var_649_object = var_663_object;
	func_2999(var_662_bool, var_663_object, 70.0);
	if(!var_662_bool) { //@nz
		var_648_int = -2;
		return 8;
	}
	object var_655_object;
	@CreateDialog(var_655_object);
	int var_666_int;
	func_3434(var_666_int);
	var_655_object->SetNPCName(var_666_int);
	int var_667_int;
	func_3432(var_667_int);
	var_655_object->SetNPCDescription(var_667_int);
	string var_668_string;
	func_3436(var_668_string);
	var_655_object->SetPhoto(var_668_string);
	string var_669_string;
	func_3438(var_669_string);
	var_655_object->SetPhoto2(var_669_string);
	int var_670_int;
	func_3916(var_670_int);
	var_655_object->SetPlayerName(var_670_int);
	bool var_656_bool;
	@IsOverrideActive(var_656_bool);
	if(var_656_bool != 0) {
		var_648_int = -2;
		return 8;
	}
	@DoDialog(var_655_object);
	object var_672_object; object var_673_object;
	var_649_object = var_672_object;
	var_655_object = var_673_object;
	TaskCall(14);
	func_2539(var_674_object, var_675_object, var_676_string, var_677_bool, var_672_object, var_673_object);
	TaskReturn();
	bool var_658_bool;
	var_655_object->IsDialogEnd(var_658_bool);
	
	for(;;) {
		var_702_bool = !var_658_bool; //@nz
		if(var_702_bool == 0) goto Label_2528;
		@sync();
		var_655_object->IsDialogEnd(var_658_bool);
	}
	
Label_2528:
	object var_703_object;
	var_649_object = var_703_object;
	func_3067();
	@StopDialog(var_655_object);
	var_655_object->GetReturnValue(-1);
	int var_657_int = var_648_int;
}
EMIT "Stack[-4] = 0";


void func_3229(string var_234_string, bool var_235_bool)
{
	float var_240_float; float var_241_float;
	@lshGetAnimTimes(var_234_string, var_240_float, var_241_float);
	@lshPlayAnimation(var_240_float, var_241_float, var_235_bool);
}


void func_2975(bool var_44_bool, cvector var_45_cvector)
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


void func_3235(bool var_102_bool, string var_103_string)
{
	bool var_105_bool;
	bool var_106_bool;
	func_3440(var_106_bool);
	if(var_106_bool != 0) {
		@lshHasSpeech(var_105_bool, var_103_string);
		if(var_105_bool != 0) {
			@lshPlaySpeech(var_103_string);
			var_102_bool = true;
		}
	}
	var_102_bool = false;
}


void func_3747(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 355, 2, 525655);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_3838(var_88_bool, var_89_object, 354);
}
EMIT "Stack[-1] = 0";


void func_2985(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_2975(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_2730(void)
{
	float var_51_float;
	@rand(var_51_float, 8, 16);
	@SetTimer(10, var_51_float);
}


void func_939(object var_0_object, int var_525_int, object var_526_object)
{
	var_0_object = var_526_object;
	bool var_536_bool; object var_537_object;
	object var_538_object;
	func_3257(var_538_object);
	var_538_object = var_537_object;
	func_3084(var_536_bool, var_537_object);
	bool var_539_bool; object var_540_object;
	var_526_object = var_540_object;
	func_2999(var_539_bool, var_540_object, 70.0);
	if(!var_539_bool) { //@nz
		var_525_int = -2;
		return 8;
	}
	object var_532_object;
	@CreateDialog(var_532_object);
	int var_543_int;
	func_3434(var_543_int);
	var_532_object->SetNPCName(var_543_int);
	int var_544_int;
	func_3432(var_544_int);
	var_532_object->SetNPCDescription(var_544_int);
	string var_545_string;
	func_3436(var_545_string);
	var_532_object->SetPhoto(var_545_string);
	string var_546_string;
	func_3438(var_546_string);
	var_532_object->SetPhoto2(var_546_string);
	int var_547_int;
	func_3916(var_547_int);
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
	TaskCall(6);
	func_1020(var_551_object, var_552_object, var_553_string, var_554_bool, var_549_object, var_550_object);
	TaskReturn();
	bool var_535_bool;
	var_532_object->IsDialogEnd(var_535_bool);
	
	for(;;) {
		var_585_bool = !var_535_bool; //@nz
		if(var_585_bool == 0) goto Label_1009;
		@sync();
		var_532_object->IsDialogEnd(var_535_bool);
	}
	
Label_1009:
	object var_586_object;
	var_526_object = var_586_object;
	func_3067();
	@StopDialog(var_532_object);
	var_532_object->GetReturnValue(-1);
	int var_534_int = var_525_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3501(void)
{
	@SetVariable("k7q01", 8);
	func_3812();
}


void func_3760(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 740, 2, 539457);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_3838(var_67_bool, var_68_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3250(void)
{
	bool var_39_bool;
	func_3440(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_2739(void)
{
	@KillTimer(10);
}


void func_2994(bool var_37_bool)
{
	bool var_39_bool;
	@IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
}


// @pe
void func_181(object var_2_object, string var_305_string)
{
	bool var_306_bool;
	func_3440(var_306_bool);
	if(!var_306_bool) //@nz
		return 0;
	if(var_305_string == var_2_object)
		return 0;
	string var_309_string; bool var_310_bool;
	var_305_string = var_309_string;
	if(var_305_string == "")
		var_310_bool = false;
	else
		var_310_bool = true;
	func_3229(var_309_string, var_310_bool);
	var_2_object = var_305_string;
	
}


// @pe
void func_3510(void)
{
	@SetVariable("k6q02", 2);
	func_3799();
}


void func_2999(bool var_163_bool, object var_164_object, float var_165_float)
{
	cvector var_176_cvector; bool var_183_bool;
	var_164_object->GetPosition(var_176_cvector);
	float var_175_float;
	var_164_object->GetEyesHeight(var_175_float);
	var_184_float = GetByIndex(var_176_cvector, 1);
	SetByIndex(var_176_cvector, 1) = (var_184_float + var_175_float);
	cvector var_177_cvector;
	@GetPosition(var_177_cvector);
	@GetEyesHeight(var_175_float);
	var_185_float = GetByIndex(var_177_cvector, 1);
	SetByIndex(var_177_cvector, 1) = (var_185_float + var_175_float);
	cvector var_178_cvector = var_176_cvector - var_177_cvector;
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (float)0;
	var_188_float = sqrt(var_178_cvector | var_178_cvector);
	var_178_cvector /= var_188_float;
	cvector var_179_cvector = -var_178_cvector;
	cvector var_190_cvector;
	func_3263(var_190_cvector, (var_179_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_180_cvector = ((var_178_cvector * var_165_float) + (var_190_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_182_bool;
	@IsOverrideActive(var_182_bool);
	if(var_182_bool != 0)
		var_163_bool = false;
	@StopWorld();
	@CameraTransit((var_177_cvector + var_180_cvector), var_179_cvector);
	var_203_float = GetByIndex(var_180_cvector, 0);
	var_204_float = GetByIndex(var_180_cvector, 2);
	@Rotate(var_203_float, var_204_float);
	bool var_205_bool;
	func_3440(var_205_bool);
	if(var_205_bool != 0) {
	} else {
		@HasAnimationTrack(var_183_bool, "head");
		if(var_183_bool == 0) goto Label_3061;
		@LookAsyncCamera("head");
	}
Label_3061:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_163_bool = true;
	
}


void func_3257(object var_70_object)
{
	object var_72_object;
	@self(var_72_object);
	var_72_object = var_70_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1722(object var_2_object, string var_620_string)
{
	bool var_621_bool;
	func_3440(var_621_bool);
	if(!var_621_bool) //@nz
		return 0;
	if(var_620_string == var_2_object)
		return 0;
	string var_624_string; bool var_625_bool;
	var_620_string = var_624_string;
	if(var_620_string == "")
		var_625_bool = false;
	else
		var_625_bool = true;
	func_3229(var_624_string, var_625_bool);
	var_2_object = var_620_string;
	
}


void func_3773(void)
{
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 741, 2, 539458);
	bool var_90_bool; object var_91_object;
	var_86_object = var_91_object;
	func_3838(var_90_bool, var_91_object, 740);
}
EMIT "Stack[-1] = 0";


void func_3263(cvector var_190_cvector, cvector var_191_cvector)
{
	float var_194_float = sqrt(var_191_cvector | var_191_cvector);
	if(var_194_float < 0.000001)
		var_190_cvector = [0.0, 0.0, 0.0];
	var_190_cvector = var_191_cvector / var_194_float;
}


// @pe
void func_3519(void)
{
	@SetVariable("ook3Kapella1", 1);
}


void func_1219(object var_0_object, int var_456_int, object var_457_object)
{
	var_0_object = var_457_object;
	bool var_467_bool; object var_468_object;
	object var_469_object;
	func_3257(var_469_object);
	var_469_object = var_468_object;
	func_3084(var_467_bool, var_468_object);
	bool var_470_bool; object var_471_object;
	var_457_object = var_471_object;
	func_2999(var_470_bool, var_471_object, 70.0);
	if(!var_470_bool) { //@nz
		var_456_int = -2;
		return 8;
	}
	object var_463_object;
	@CreateDialog(var_463_object);
	int var_474_int;
	func_3434(var_474_int);
	var_463_object->SetNPCName(var_474_int);
	int var_475_int;
	func_3432(var_475_int);
	var_463_object->SetNPCDescription(var_475_int);
	string var_476_string;
	func_3436(var_476_string);
	var_463_object->SetPhoto(var_476_string);
	string var_477_string;
	func_3438(var_477_string);
	var_463_object->SetPhoto2(var_477_string);
	int var_478_int;
	func_3916(var_478_int);
	var_463_object->SetPlayerName(var_478_int);
	bool var_464_bool;
	@IsOverrideActive(var_464_bool);
	if(var_464_bool != 0) {
		var_456_int = -2;
		return 8;
	}
	@DoDialog(var_463_object);
	object var_480_object; object var_481_object;
	var_457_object = var_480_object;
	var_463_object = var_481_object;
	TaskCall(8);
	func_1300(var_482_object, var_483_object, var_484_string, var_485_bool, var_480_object, var_481_object);
	TaskReturn();
	bool var_466_bool;
	var_463_object->IsDialogEnd(var_466_bool);
	
	for(;;) {
		var_521_bool = !var_466_bool; //@nz
		if(var_521_bool == 0) goto Label_1289;
		@sync();
		var_463_object->IsDialogEnd(var_466_bool);
	}
	
Label_1289:
	object var_522_object;
	var_457_object = var_522_object;
	func_3067();
	@StopDialog(var_463_object);
	var_463_object->GetReturnValue(-1);
	int var_465_int = var_456_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3525(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_3273(float var_195_float, float var_196_float, float var_197_float, float var_198_float)
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


void func_3786(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 746, 2, 539463);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_3838(var_128_bool, var_129_object, 740);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3531(void)
{
	@SetVariable("ook5Kapella1", 1);
}


void func_3537(void)
{
	@SetVariable("k5q04", 1);
	object var_48_object;
	func_3866(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_3388(var_59_float);
	var_45_object->AddMark("k5q04KapellaGotoMaria", "pt_map_maria", 0, 515282, var_59_float);
	func_3760();
	func_3773();
}
EMIT "Stack[-1] = 0";


void func_3284(int var_316_int, string var_317_string)
{
	int var_319_int;
	@GetVariable(var_317_string, var_319_int);
	var_319_int = var_316_int;
}


void func_3799(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 502, 2, 528768);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_3838(var_51_bool, var_52_object, 500);
}
EMIT "Stack[-1] = 0";


void func_3289(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_730(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_223_object, object var_224_object)
{
	var_0_object = var_224_object;
	var_1_object = var_223_object;
	var_3_string = false;
	if(1 != 0) {
		func_788(var_224_object, "Neutral");
		var_0_object->SetMessage(525489); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525490, 42621, 26846); //@t
		var_0_object->AddReply(529311, 30766, 30765); //@t
		goto Label_758;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2de";
	}
Label_758:
	bool var_249_bool;
	func_3440(var_249_bool);
	if(var_249_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3222(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_787;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_787:
		return 0;

	}
	
}


void func_3300(int var_157_int, int var_158_int)
{
	object var_160_object;
	@CreateIntVector(var_160_object);
	var_160_object->add(var_157_int);
	var_160_object->add(var_158_int);
	@SendWorldWndMessage(3, var_160_object);
}
EMIT "Stack[-1] = 0";


void func_3812(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 426, 1, 526225);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_3838(var_51_bool, var_52_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3563(void)
{
	func_3786();
	bool var_131_bool;
	func_3376(var_131_bool, "quest_k5_04", "completed");
}


// @pe
void func_2539(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_672_object, object var_673_object)
{
	var_0_object = var_673_object;
	var_1_object = var_672_object;
	var_3_string = false;
	if(1 != 0) {
		func_2597(var_673_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2567;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9ef";
	}
Label_2567:
	bool var_694_bool;
	func_3440(var_694_bool);
	if(var_694_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3222(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2596;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2596:
		return 0;

	}
	
}


// @pe
void func_2031(object var_2_object, string var_404_string)
{
	bool var_405_bool;
	func_3440(var_405_bool);
	if(!var_405_bool) //@nz
		return 0;
	if(var_404_string == var_2_object)
		return 0;
	string var_408_string; bool var_409_bool;
	var_404_string = var_408_string;
	if(var_404_string == "")
		var_409_bool = false;
	else
		var_409_bool = true;
	func_3229(var_408_string, var_409_bool);
	var_2_object = var_404_string;
	
}


void func_3312(object var_144_object, int var_145_int)
{
	int var_147_int;
	object var_148_object;
	var_144_object = var_148_object;
	int var_150_int;
	func_2968(var_148_object, "money", var_150_int);
	if(var_150_int > 0) {
		@GetInvItemByName(var_147_int, "Money");
		int var_157_int; int var_158_int;
		var_147_int = var_157_int;
		var_145_int = var_158_int;
		func_3300(var_157_int, var_158_int);
	}
}


void func_3825(object var_76_object)
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
void func_3573(void)
{
	@SetVariable("k5Kapellavisit", 1);
}


// @pe
void func_3579(object var_213_object)
{
	object var_216_object;
	var_213_object = var_216_object;
	bool var_215_bool;
	func_3331(var_215_bool, var_216_object, 0.02);
}


// @pe
void func_1020(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_549_object, object var_550_object)
{
	var_0_object = var_550_object;
	var_3_string = false;
	if(1 != 0) {
		func_1083(var_550_object, "Neutral");
		var_0_object->SetMessage(526198); //@t
		var_0_object->ClearReplies(); //@t
		bool var_565_bool;
		func_3637(var_549_object);
		if(var_565_bool != 0)
			var_0_object->AddReply(526199, 30173, 27480); //@t
		var_0_object->AddReply(526202, -1, 27483); //@t
		goto Label_1053;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x400";
	}
Label_1053:
	bool var_577_bool;
	func_3440(var_577_bool);
	if(var_577_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3222(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1082;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1082:
		return 0;

	}
	
}


void func_3838(bool var_67_bool, object var_68_object, int var_69_int)
{
	object var_76_object;
	func_3825(var_76_object);
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


