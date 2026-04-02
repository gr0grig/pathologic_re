GlobalVarCount = 2
	G_VAR_0 bool 
	G_VAR_1 object 

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	W:player
	W:@GetAttackDistance
	A:GetAttackDistance
	W:attack
	A:GetPFPosition
	W:attack_on
	W:attack_stay
	W:fjump
	W:attack_off
	W:attack_begin
	W:bjump
	W:attack_middle
	W:_
	W:attack_end
	W:IsAttacking
	A:IsAttacking
	W:head
	A:GetPosition
	W:walk
	W:run
	W:fdie
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:kill_player
	W:fire
	W:bullet
	W:phys
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	W:health
	W:armor
	W:armor_
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	W:fhit
	W:bhit
	W:hit_react
	W:1
	W:2
	A:add
	A:size
	A:get
	W:scripted
	W:blood_dir.xml
	W:voice_common
	W:c
	W:m
	W:reputation
	W:battle
	W:branch
	A:SetItemName
	W:Organ
	A:GetItemID
	W:liver
	W:kidney
	W:heart
	W:blood
	W:quest_d2_02
	W:player_attack
	W:patrol2_unload
	W:revolver_ammo
	W:alpha_pills
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c00610079006500720000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e636500610074007400610063006b0000004765745046506f736974696f6e00610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f006f00660066000000610074007400610063006b005f0062006500670069006e00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c00650000005f000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e670068006500610064000000476574506f736974696f6e00770061006c006b000000720075006e0000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f70657274790040004700650074004500790065007300480065006900670068007400000047657445796573486569676874006b0069006c006c005f0070006c006100790065007200000066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479006800650061006c00740068000000610072006d006f0072000000610072006d006f0072005f0000004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c00000076006f006900630065005f0063006f006d006d006f006e000000630000006d000000720065007000750074006100740069006f006e00000062006100740074006c00650000006200720061006e006300680000005365744974656d4e616d65004f007200670061006e0000004765744974656d4944006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f0064000000710075006500730074005f00640032005f0030003200000070006c0061007900650072005f00610074007400610063006b00000070006100740072006f006c0032005f0075006e006c006f006100640000007200650076006f006c007600650072005f0061006d006d006f00000061006c007000680061005f00700069006c006c0073000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	StopGroup0 (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x510
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x3a7 Vars = (int)
		EVENT_1 Op = 0x3c2 Vars = (object)
		EVENT_2 Op = 0x3d1 Vars = (object)
		EVENT_10 Op = 0x457 Vars = (object)
		EVENT_41 Op = 0x462 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x483 Vars = (object)
		EVENT_22 Op = 0x502 Vars = (object, int, float, float)
		EVENT_16 Op = 0x504 Vars = (object, string)
		EVENT_41 Op = 0x506 Vars = (object)
	GTASK_5 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x518 Vars = (object)
		EVENT_26 Op = 0x525 Vars = (string)

Events:
EVENT_17 Op = 0x8e3 Vars = (object)
EVENT_6 Op = 0x8f4 Vars = ()
EVENT_22 Op = 0x919 Vars = (object, int, float, float)
EVENT_43 Op = 0x921 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x92b Vars = (object, string)
EVENT_41 Op = 0x938 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x810

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x72f

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x6da

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x940

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x93e

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x942

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x944

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x896

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x71e

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral" // @poff=89
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 507526)
0x5c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d: Pop(1)
0x5e: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f: Pop(0)
0x60: Push((int) 507527)
0x61: Push((int) -1)
0x62: Push((int) 8309)
0x63: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64: Pop(3)
0x65: Push((int) 533979)
0x66: Push((int) -1)
0x67: Push((int) 35550)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x946

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x7b9

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all") // @poff=138
0x7d: Push("idle") // @poff=146
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all") // @poff=138
0x86: Push("idle") // @poff=146
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x946

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-3] = Stack[-2]
0x97: Push("") // @poff=102
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x7c0

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x7e0

0xa6: Pop(0)
0xa7: Push((int) 8308)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral" // @poff=89
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 507526)
0xaf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb0: Pop(1)
0xb1: @@@ ClearReplies(); Obj=0 // @poff=116
0xb2: Pop(0)
0xb3: Push((int) 507527)
0xb4: Push((int) -1)
0xb5: Push((int) 8309)
0xb6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb7: Pop(3)
0xb8: Push((int) 533979)
0xb9: Push((int) -1)
0xba: Push((int) 35550)
0xbb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0x946

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: @ lshStopAnimation()
0xc4: Pop(0)
0xc5: GOTO 0xc8

0xc6: @ StopAnimation()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: GOTO 0xa2

0xca: Return(); Pop(0)

0xcb: PushEmpty(object, object)
0xcc: Push("player") // @poff=156
0xcd: @ FindActor(Stack[-2], Stack[-1])
0xce: Pop(1)
0xcf: Pop(0); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(2)

0xd2: PushEmpty(object, bool, float)
0xd3: Stack[-4] = Stack[-3]
0xd4: Stack[-2] = (bool) 1
0xd5: Stack[-1] = (float) 180.0
0xd6: Call2 0xe0

0xd7: Pop(3)
0xd8: Return(); Pop(2)

0xd9: Stack[-1] = 0
0xda: PushEmpty()
0xdb: Stack[-3] = (float) 0.30000001192092896
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: Stack[-3] = (int) 0
0xdf: Return(); Pop(0)

0xe0: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xe1: PushEmpty()
0xe2: Call2 0x1c5

0xe3: Pop(0)
0xe4: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xe5: Push("@GetAttackDistance") // @poff=170
0xe6: Push((int) 1)
0xe7: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=208
0xea: Pop(0)
0xeb: Push((int) 50)
0xec: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xed: GOTO 0xef

0xee: Stack[-23] = Stack[-11]
0xef: Push((int) 150)
0xf0: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Stack[-11] = (int) 150
0xf3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf4: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xf5: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0xf6: Pop(0)
0xf7: Push(Stack[-8])
0xf8: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf9: Push("attack") // @poff=226
0xfa: @ PlayGlobalMusic(Stack[-1])
0xfb: Pop(1)
0xfc: PushEmpty(object)
0xfd: Call2 0x810

0xfe: Pop(0)
0xff: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x100: Pop(1)
0x101: Push(Stack[-24])
0x102: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x103: Stack[-7] = (bool) 0
0x104: GOTO 0x106

0x105: Stack[-7] = (bool) 1
0x106: Push((float)400.0)
0x107: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x108: PushEmpty(bool)
0x109: Stack[-1] = (bool) 0
0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x639

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Stack[-1] = (bool) 1
0x112: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x113: PushEmpty()
0x114: Call2 0x362

0x115: Pop(0)
0x116: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=240
0x117: Pop(0)
0x118: @ GetPFPosition(Stack[-9])
0x119: Pop(0)
0x11a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x11b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x11c: Pop(0); Push(Stack[-6] * Stack[-6]);
0x11d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(bool, object, float, float, bool, bool)
0x120: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x121: Stack[-17] = Stack[-4]
0x122: Stack[-3] = (float) 10000.0
0x123: Stack[-2] = (bool) 1
0x124: Stack[-1] = (bool) 0
0x125: Push(-6, 3); TaskCall(3)
0x126: Call2 0x376

0x127: Pop(-6, 3); TaskReturn
0x128: Pop(5)
0x129: Pop(1); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: GOTO 0x1b4

0x12c: Stack[-7] = (bool) 0
0x12d: GOTO 0x1b3

0x12e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x12f: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x131: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=240
0x132: Pop(0)
0x133: @ CanReachByPF(Stack[-2], Stack[-3])
0x134: Pop(0)
0x135: Pop(0); Push((bool) Stack[-2] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x137: PushEmpty(bool, object, float, float, bool, bool)
0x138: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x139: Stack[-17] = Stack[-4]
0x13a: Stack[-3] = (float) 10000.0
0x13b: Stack[-2] = (bool) 1
0x13c: Stack[-1] = (bool) 0
0x13d: Push(-6, 3); TaskCall(3)
0x13e: Call2 0x376

0x13f: Pop(-6, 3); TaskReturn
0x140: Pop(5)
0x141: Pop(1); Push((bool) Stack[-1] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: GOTO 0x1b4

0x144: Stack[-7] = (bool) 0
0x145: GOTO 0x108

0x146: Pop(0); Push((bool) Stack[-7] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x148: PushEmpty(object)
0x149: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14a: Call2 0x6cf

0x14b: Pop(1)
0x14c: Push("all") // @poff=138
0x14d: Push("attack_on") // @poff=254
0x14e: @ PlayAnimation(Stack[-2], Stack[-1])
0x14f: Pop(2)
0x150: @ WaitForAnimEnd()
0x151: Pop(0)
0x152: PushEmpty()
0x153: Call2 0x362

0x154: Pop(0)
0x155: @ StopAsync()
0x156: Pop(0)
0x157: Stack[-7] = (bool) 1
0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Call2 0x639

0x15b: Pop(1)
0x15c: Pop(1); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: GOTO 0x1b4

0x15f: @ rand(Stack[-1])
0x160: Pop(0)
0x161: PushEmpty(bool)
0x162: Stack[-1] = (bool) 1
0x163: Push((float)0.25)
0x164: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x165: IF (Stack[-1] == 1) GOTO 0x16b; Pop(1)

0x166: PushEmpty(bool)
0x167: Call2 0x337

0x168: Pop(0)
0x169: IF (Stack[-1] == 1) GOTO 0x16b; Pop(1)

0x16a: Stack[-1] = (bool) 0
0x16b: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16c: @ Face(Stack[-0]T)
0x16d: Pop(0)
0x16e: PushEmpty()
0x16f: Call2 0x369

0x170: Pop(0)
0x171: Push("all") // @poff=138
0x172: Push("attack_stay") // @poff=274
0x173: @ PlayAnimation(Stack[-2], Stack[-1])
0x174: Pop(2)
0x175: PushEmpty(bool, float)
0x176: Stack[-25] = Stack[-1]
0x177: Call2 0x2b3

0x178: Pop(2)
0x179: @ StopAsync()
0x17a: Pop(0)
0x17b: GOTO 0x1aa

0x17c: @ Face(Stack[-0]T)
0x17d: Pop(0)
0x17e: Push("all") // @poff=138
0x17f: Push("fjump") // @poff=298
0x180: @ PlayAnimation(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: @ WaitForAnimEnd()
0x183: Pop(0)
0x184: PushEmpty()
0x185: Call2 0x362

0x186: Pop(0)
0x187: Push([0.0, 0.0, 0.0])
0x188: @ SetSpeed(Stack[-1])
0x189: Pop(1)
0x18a: @ Stop()
0x18b: Pop(0)
0x18c: @ StopAsync()
0x18d: Pop(0)
0x18e: PushEmpty(bool)
0x18f: Call2 0x337

0x190: Pop(0)
0x191: Pop(1); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x195: Call2 0x639

0x196: Pop(1)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x1b4

0x19a: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=240
0x19b: Pop(0)
0x19c: @ GetPFPosition(Stack[-9])
0x19d: Pop(0)
0x19e: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x19f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1a0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1a1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a3: PushEmpty(bool, float)
0x1a4: Stack[-25] = Stack[-1]
0x1a5: Call2 0x20f

0x1a6: Pop(1)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1b4

0x1aa: GOTO 0x1b3

0x1ab: PushEmpty(bool, float)
0x1ac: Stack[-25] = Stack[-1]
0x1ad: Call2 0x20f

0x1ae: Pop(1)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: GOTO 0x1b4

0x1b2: Stack[-7] = (bool) 1
0x1b3: GOTO 0x108

0x1b4: @ WaitForAnimEnd()
0x1b5: Pop(0)
0x1b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Return(); Pop(22)

0x1b9: Push("all") // @poff=138
0x1ba: Push("attack_off") // @poff=310
0x1bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: @ WaitForAnimEnd()
0x1be: Pop(0)
0x1bf: Push(Stack[-8])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: Push((float)2.0)
0x1c2: @ Sleep(Stack[-1])
0x1c3: Pop(1)
0x1c4: Return(); Pop(22)

0x1c5: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1c6: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1c7: Push("all") // @poff=138
0x1c8: Push("attack_begin") // @poff=332
0x1c9: Push((int) 1)
0x1ca: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x1cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1cc: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Pop(0); Push((bool) Stack[-3] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: GOTO 0x1d4

0x1d1: Push((int) 1)
0x1d2: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1d3: GOTO 0x1c7

0x1d4: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1d5: Push("attack") // @poff=226
0x1d6: Push((int) 1)
0x1d7: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x1d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d9: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1da: Pop(1)
0x1db: Pop(0); Push((bool) Stack[-2] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: GOTO 0x1e1

0x1de: Push((int) 1)
0x1df: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1e0: GOTO 0x1d5

0x1e1: Push("all") // @poff=138
0x1e2: Push("bjump") // @poff=358
0x1e3: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: Push(CvectorIndex(Stack[-1], 2))
0x1e6: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1e7: Return(); Pop(6)

0x1e8: PushEmpty(object, float, float, object, float, float)
0x1e9: Push((float)0.8999999761581421)
0x1ea: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1eb: @ GetVictim(Stack[-1], Stack[-4])
0x1ec: Pop(1)
0x1ed: @ ReportAttack(Stack[-0]T)
0x1ee: Pop(0)
0x1ef: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1f0: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1f1: PushEmpty(float, object, int)
0x1f2: Stack[-6] = Stack[-2]
0x1f3: Stack[-10] = Stack[-1]
0x1f4: Call2 0xda

0x1f5: Stack[-3] = Stack[-5]
0x1f6: Pop(3)
0x1f7: PushEmpty(float, object, float, int)
0x1f8: Stack[-7] = Stack[-3]
0x1f9: Stack[-6] = Stack[-2]
0x1fa: PushEmpty(int, object, int)
0x1fb: Stack[-10] = Stack[-2]
0x1fc: Stack[-14] = Stack[-1]
0x1fd: Call2 0xdd

0x1fe: Stack[-3] = Stack[-4]
0x1ff: Pop(3)
0x200: Call2 0x5c7

0x201: Stack[-4] = Stack[-5]
0x202: Pop(4)
0x203: PushEmpty(int)
0x204: Call2 0x367

0x205: Pop(0)
0x206: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x207: Pop(1)
0x208: PushEmpty(object, float)
0x209: Stack[-5] = Stack[-2]
0x20a: Stack[-3] = Stack[-1]
0x20b: Call2 0x36e

0x20c: Pop(2)
0x20d: Return(); Pop(6)

0x20e: Stack[-3] = 0
0x20f: PushEmpty(int, bool, int, string, int, bool, int, string)
0x210: PushEmpty()
0x211: Call2 0x362

0x212: Pop(0)
0x213: @ irand(Stack[-4], Stack[-1]T)
0x214: Pop(0)
0x215: Push((int) 1)
0x216: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x217: @ Face(Stack[-0]T)
0x218: Pop(0)
0x219: Push((bool) 1)
0x21a: @ SetAttackState(Stack[-1])
0x21b: Pop(1)
0x21c: PushEmpty()
0x21d: Call2 0x88b

0x21e: Pop(0)
0x21f: Push("all") // @poff=138
0x220: Push("attack_begin") // @poff=332
0x221: Pop(1); Push(Stack[-1] + Stack[-6]);
0x222: @ PlayAnimation(Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: @ WaitForAnimEnd()
0x225: Pop(0)
0x226: PushEmpty()
0x227: Call2 0x342

0x228: Pop(0)
0x229: PushEmpty(bool, object)
0x22a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22b: Call2 0x639

0x22c: Pop(1)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22f: @ StopAsync()
0x230: Pop(0)
0x231: Stack[-10] = (bool) 0
0x232: Return(); Pop(8)

0x233: PushEmpty(float, int)
0x234: Stack[-11] = Stack[-2]
0x235: Stack[-6] = Stack[-1]
0x236: Call2 0x1e8

0x237: Pop(2)
0x238: Push("all") // @poff=138
0x239: Push("attack_middle") // @poff=370
0x23a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x23b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: Push(Stack[-3])
0x23e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x23f: PushEmpty()
0x240: Call2 0x88b

0x241: Pop(0)
0x242: Push("all") // @poff=138
0x243: Push("attack_middle") // @poff=370
0x244: Pop(1); Push(Stack[-1] + Stack[-6]);
0x245: @ PlayAnimation(Stack[-2], Stack[-1])
0x246: Pop(2)
0x247: @ WaitForAnimEnd()
0x248: Pop(0)
0x249: PushEmpty()
0x24a: Call2 0x362

0x24b: Pop(0)
0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24e: Call2 0x639

0x24f: Pop(1)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x252: @ StopAsync()
0x253: Pop(0)
0x254: Stack[-10] = (bool) 0
0x255: Return(); Pop(8)

0x256: PushEmpty(float, int)
0x257: Stack[-11] = Stack[-2]
0x258: Stack[-6] = Stack[-1]
0x259: Call2 0x1e8

0x25a: Pop(2)
0x25b: Stack[-2] = (int) 1
0x25c: Push("attack_middle") // @poff=370
0x25d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x25e: Push("_") // @poff=398
0x25f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x260: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x261: Push("all") // @poff=138
0x262: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x263: Pop(1)
0x264: Pop(0); Push((bool) Stack[-3] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x284

0x267: PushEmpty()
0x268: Call2 0x88b

0x269: Pop(0)
0x26a: Push("all") // @poff=138
0x26b: @ PlayAnimation(Stack[-1], Stack[-2])
0x26c: Pop(1)
0x26d: @ WaitForAnimEnd()
0x26e: Pop(0)
0x26f: PushEmpty()
0x270: Call2 0x362

0x271: Pop(0)
0x272: PushEmpty(bool, object)
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call2 0x639

0x275: Pop(1)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x278: @ StopAsync()
0x279: Pop(0)
0x27a: Stack[-10] = (bool) 0
0x27b: Return(); Pop(8)

0x27c: PushEmpty(float, int)
0x27d: Stack[-11] = Stack[-2]
0x27e: Stack[-6] = Stack[-1]
0x27f: Call2 0x1e8

0x280: Pop(2)
0x281: Push((int) 1)
0x282: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x283: GOTO 0x25c

0x284: Push((bool) 0)
0x285: @ SetAttackState(Stack[-1])
0x286: Pop(1)
0x287: Push("all") // @poff=138
0x288: Push("attack_end") // @poff=402
0x289: Pop(1); Push(Stack[-1] + Stack[-6]);
0x28a: @ PlayAnimation(Stack[-2], Stack[-1])
0x28b: Pop(2)
0x28c: PushEmpty(bool)
0x28d: Call2 0x370

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x290: PushEmpty(bool, float)
0x291: Stack[-1] = (float) 0.75
0x292: Call2 0x298

0x293: Pop(2)
0x294: @ StopAsync()
0x295: Pop(0)
0x296: Stack[-10] = (bool) 1
0x297: Return(); Pop(8)

0x298: PushEmpty(float, bool, float, bool)
0x299: @ rand(Stack[-2])
0x29a: Pop(0)
0x29b: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x29c: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x29d: @ IsAnimationPlaying(Stack[-1])
0x29e: Pop(0)
0x29f: Pop(0); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2ab

0x2a2: PushEmpty(bool)
0x2a3: Call2 0x2fa

0x2a4: Pop(0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-6] = (bool) 1
0x2a7: Return(); Pop(4)

0x2a8: @ sync()
0x2a9: Pop(0)
0x2aa: GOTO 0x29d

0x2ab: GOTO 0x2b1

0x2ac: @ WaitForAnimEnd()
0x2ad: Pop(0)
0x2ae: PushEmpty()
0x2af: Call2 0x362

0x2b0: Pop(0)
0x2b1: Stack[-6] = (bool) 0
0x2b2: Return(); Pop(4)

0x2b3: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2b4: @ IsAnimationPlaying(Stack[-5])
0x2b5: Pop(0)
0x2b6: Pop(0); Push((bool) Stack[-5] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2d9

0x2b9: PushEmpty(bool)
0x2ba: Call2 0x2fa

0x2bb: Pop(0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: Stack[-12] = (bool) 1
0x2be: Return(); Pop(10)

0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call2 0x639

0x2c2: Pop(1)
0x2c3: Pop(1); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-12] = (bool) 0
0x2c6: Return(); Pop(10)

0x2c7: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=240
0x2c8: Pop(0)
0x2c9: @ GetPFPosition(Stack[-3])
0x2ca: Pop(0)
0x2cb: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2cc: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2cd: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2ce: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d0: PushEmpty(bool, float)
0x2d1: Stack[-13] = Stack[-1]
0x2d2: Call2 0x20f

0x2d3: Pop(2)
0x2d4: Stack[-12] = (bool) 1
0x2d5: Return(); Pop(10)

0x2d6: @ sync()
0x2d7: Pop(0)
0x2d8: GOTO 0x2b4

0x2d9: PushEmpty()
0x2da: Call2 0x362

0x2db: Pop(0)
0x2dc: Stack[-12] = (bool) 0
0x2dd: Return(); Pop(10)

0x2de: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2df: PushEmpty(bool, object)
0x2e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e1: Call2 0x639

0x2e2: Pop(1)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-11] = (bool) 0
0x2e6: Return(); Pop(10)

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x337

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2eb: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=240
0x2ec: Pop(0)
0x2ed: @ GetPFPosition(Stack[-4])
0x2ee: Pop(0)
0x2ef: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2f0: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2f1: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=208
0x2f2: Pop(0)
0x2f3: Push((int) 50)
0x2f4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2f5: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2f6: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2f7: Return(); Pop(10)

0x2f8: Stack[-11] = (bool) 0
0x2f9: Return(); Pop(10)

0x2fa: PushEmpty(bool)
0x2fb: Stack[-1] = (bool) 0
0x2fc: PushEmpty(bool)
0x2fd: Call2 0x2de

0x2fe: Pop(0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: PushEmpty(bool)
0x301: Call2 0x30a

0x302: Pop(0)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Stack[-1] = (bool) 1
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: Stack[-1] = (bool) 1
0x307: Return(); Pop(0)

0x308: Stack[-1] = (bool) 0
0x309: Return(); Pop(0)

0x30a: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x30b: @ GetScene(Stack[-5])
0x30c: Pop(0)
0x30d: Stack[-4] = (bool) 0
0x30e: PushEmpty(cvector, object)
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x599

0x311: Pop(1)
0x312: Pop(1); Push(( -Stack[-1])
0x313: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x314: Pop(1)
0x315: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: GOTO 0x334

0x318: @ Face(Stack[-0]T)
0x319: Pop(0)
0x31a: Push("all") // @poff=138
0x31b: Push("bjump") // @poff=358
0x31c: @ PlayAnimation(Stack[-2], Stack[-1])
0x31d: Pop(2)
0x31e: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=240
0x31f: Pop(0)
0x320: @ GetPFPosition(Stack[-1])
0x321: Pop(0)
0x322: @ WaitForAnimEnd()
0x323: Pop(0)
0x324: PushEmpty()
0x325: Call2 0x362

0x326: Pop(0)
0x327: @ StopAsync()
0x328: Pop(0)
0x329: Push([0.0, 0.0, 0.0])
0x32a: @ SetSpeed(Stack[-1])
0x32b: Pop(1)
0x32c: Stack[-4] = (bool) 1
0x32d: PushEmpty(bool)
0x32e: Call2 0x2de

0x32f: Pop(0)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x334

0x333: GOTO 0x30e

0x334: Stack[-4] = Stack[-11]
0x335: Return(); Pop(10)

0x336: Stack[-5] = 0
0x337: PushEmpty(bool, bool)
0x338: Push("IsAttacking") // @poff=424
0x339: Push((int) 1)
0x33a: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x33b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33c: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=448
0x33d: Pop(0)
0x33e: Stack[-1] = Stack[-3]
0x33f: Return(); Pop(2)

0x340: Stack[-3] = (bool) 0
0x341: Return(); Pop(2)

0x342: PushEmpty(float, int, float, int)
0x343: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: Return(); Pop(4)

0x346: Push( Stack[5 + Tasks[-1].StackPointer] )
0x347: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x348: Push((int) -1)
0x349: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x34a: Push((int) 0)
0x34b: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: Return(); Pop(4)

0x34e: @ rand(Stack[-2])
0x34f: Pop(0)
0x350: PushEmpty(float)
0x351: Call2 0x374

0x352: Pop(0)
0x353: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x355: @ irand(Stack[-1], Stack[-2]T)
0x356: Pop(0)
0x357: Push((int) 1)
0x358: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x359: Push("attack") // @poff=226
0x35a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x35b: @ Speak(Stack[-1])
0x35c: Pop(1)
0x35d: PushEmpty(int)
0x35e: Call2 0x372

0x35f: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x360: Pop(1)
0x361: Return(); Pop(4)

0x362: PushEmpty(object)
0x363: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x364: Call2 0x882

0x365: Pop(1)
0x366: Return(); Pop(0)

0x367: Stack[-1] = (int) 0
0x368: Return(); Pop(0)

0x369: PushEmpty(string)
0x36a: Stack[-1] = "attack_stay" // @poff=274
0x36b: Call2 0x7e7

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty()
0x36f: Return(); Pop(0)

0x370: Stack[-1] = (bool) 1
0x371: Return(); Pop(0)

0x372: Stack[-1] = (int) 1
0x373: Return(); Pop(0)

0x374: Stack[-1] = (float) 0.5
0x375: Return(); Pop(0)

0x376: PushEmpty(bool, bool, bool, bool)
0x377: PushEmpty(object)
0x378: Stack[-10] = Stack[-1]
0x379: Call2 0x882

0x37a: Pop(1)
0x37b: Push((int) 1)
0x37c: Push((int) 5)
0x37d: @ SetTimer(Stack[-2], Stack[-1])
0x37e: Pop(2)
0x37f: @ CanSee(Stack[-2], Stack[-9])
0x380: Pop(0)
0x381: Push(Stack[-2])
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x384: PushEmpty(object)
0x385: Stack[-10] = Stack[-1]
0x386: Call2 0x7c6

0x387: Pop(1)
0x388: GOTO 0x38a

0x389: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38a: PushEmpty(bool, object)
0x38b: Stack[-11] = Stack[-1]
0x38c: Call2 0x5a0

0x38d: Pop(1)
0x38e: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38f: PushEmpty(object)
0x390: Call2 0x810

0x391: Pop(0)
0x392: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x393: Pop(1)
0x394: PushEmpty(bool, object, float, float, bool, bool)
0x395: Stack[-15] = Stack[-5]
0x396: Stack[-14] = Stack[-4]
0x397: Stack[-13] = Stack[-3]
0x398: Stack[-12] = Stack[-2]
0x399: Stack[-11] = Stack[-1]
0x39a: Call2 0x3df

0x39b: Stack[-6] = Stack[-7]
0x39c: Pop(6)
0x39d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x39e: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39f: Push("head") // @poff=460
0x3a0: @ UnlookAsync(Stack[-1])
0x3a1: Pop(1)
0x3a2: Push((int) 1)
0x3a3: @ KillTimer(Stack[-1])
0x3a4: Pop(1)
0x3a5: Stack[-1] = Stack[-10]
0x3a6: Return(); Pop(4)

0x3a7: PushEmpty()
0x3a8: Push((int) 1)
0x3a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: PushEmpty(object)
0x3ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ad: Call2 0x882

0x3ae: Pop(1)
0x3af: GOTO 0x3b4

0x3b0: PushEmpty(int)
0x3b1: Stack[-2] = Stack[-1]
0x3b2: Call2 0x445

0x3b3: Pop(1)
0x3b4: Return(); Pop(0)

0x3b5: Push((int) 1)
0x3b6: @ KillTimer(Stack[-1])
0x3b7: Pop(1)
0x3b8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3b9: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3ba: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3bb: Push("head") // @poff=460
0x3bc: @ UnlookAsync(Stack[-1])
0x3bd: Pop(1)
0x3be: PushEmpty()
0x3bf: Call2 0x45b

0x3c0: Pop(0)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: PushEmpty(bool)
0x3c4: Stack[-1] = (bool) 0
0x3c5: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: Stack[-1] = (bool) 1
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3cc: PushEmpty(object)
0x3cd: Stack[-2] = Stack[-1]
0x3ce: Call2 0x7c6

0x3cf: Pop(1)
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: PushEmpty(bool)
0x3d3: Stack[-1] = (bool) 0
0x3d4: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: Stack[-1] = (bool) 1
0x3d9: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3db: Push("head") // @poff=460
0x3dc: @ UnlookAsync(Stack[-1])
0x3dd: Pop(1)
0x3de: Return(); Pop(0)

0x3df: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3e0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3e2: Stack[-17] = Stack[-7]
0x3e3: PushEmpty(bool, object)
0x3e4: Stack[-23] = Stack[-1]
0x3e5: Call2 0x46b

0x3e6: Pop(1)
0x3e7: Pop(1); Push((bool) Stack[-1] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: Stack[-22] = (bool) 0
0x3ea: Return(); Pop(16)

0x3eb: @@ GetPosition(Stack[-5]); Obj=21 // @poff=470
0x3ec: Pop(0)
0x3ed: @ GetPosition(Stack[-4])
0x3ee: Pop(0)
0x3ef: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f0: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3f1: PushEmpty(bool)
0x3f2: Stack[-1] = (bool) 0
0x3f3: Push((int) 0)
0x3f4: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f6: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f7: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: Stack[-1] = (bool) 1
0x3fa: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fb: @ Stop()
0x3fc: Pop(0)
0x3fd: Stack[-22] = (bool) 0
0x3fe: Return(); Pop(16)

0x3ff: Pop(0); Push(Stack[-20] * Stack[-20]);
0x400: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x402: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=240
0x403: Pop(0)
0x404: @ FindPathTo(Stack[-1], Stack[-5])
0x405: Pop(0)
0x406: Pop(0); Push(( Stack[-1] != 0 )
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: Stack[-1] = Stack[-6]
0x409: Stack[-1] = 0
0x40a: Pop(0); Push(( Stack[-6] != 0 )
0x40b: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x40c: Push(Stack[-7])
0x40d: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40e: Stack[-7] = (bool) 0
0x40f: @ RotatePath(Stack[-6], Stack[-8])
0x410: Pop(0)
0x411: Pop(0); Push((bool) Stack[-8] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: GOTO 0x443

0x414: Push((int) 0)
0x415: Push((float)0.30000001192092896)
0x416: @ SetTimer(Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: PushEmpty(string)
0x419: Call2 0x472

0x41a: Pop(0)
0x41b: PushEmpty(string)
0x41c: Call2 0x474

0x41d: Pop(0)
0x41e: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x41f: Pop(2)
0x420: Pop(0); Push((bool) Stack[-8] == 0)
0x421: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x422: Push( Stack[0 + Tasks[-1].StackPointer] )
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: Stack[-6] = 0
0x425: GOTO 0x443

0x426: GOTO 0x428

0x427: GOTO 0x442

0x428: GOTO 0x42a

0x429: Stack[-6] = 0
0x42a: GOTO 0x43b

0x42b: Push((int) 0)
0x42c: @ KillTimer(Stack[-1])
0x42d: Pop(1)
0x42e: Push((float)0.5)
0x42f: @ Sleep(Stack[-1], Stack[-9])
0x430: Pop(1)
0x431: Pop(0); Push((bool) Stack[-8] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x433: Push( Stack[0 + Tasks[-1].StackPointer] )
0x434: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x435: Stack[-6] = 0
0x436: GOTO 0x443

0x437: Push((int) 0)
0x438: Push((float)0.30000001192092896)
0x439: @ SetTimer(Stack[-2], Stack[-1])
0x43a: Pop(2)
0x43b: Stack[-1] = 0
0x43c: GOTO 0x441

0x43d: Push((int) 0)
0x43e: @ KillTimer(Stack[-1])
0x43f: Pop(1)
0x440: GOTO 0x443

0x441: Stack[-6] = 0
0x442: GOTO 0x3e3

0x443: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x444: Return(); Pop(16)

0x445: PushEmpty()
0x446: Push((int) 0)
0x447: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x448: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x449: Return(); Pop(0)

0x44a: PushEmpty(bool, object)
0x44b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44c: Call2 0x46b

0x44d: Pop(1)
0x44e: Pop(1); Push((bool) Stack[-1] == 0)
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x451: Push((int) 0)
0x452: @ KillTimer(Stack[-1])
0x453: Pop(1)
0x454: @ Stop()
0x455: Pop(0)
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: @ RequestClearPath(Stack[-1])
0x459: Pop(0)
0x45a: Return(); Pop(0)

0x45b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45c: Push((int) 0)
0x45d: @ KillTimer(Stack[-1])
0x45e: Pop(1)
0x45f: @ Stop()
0x460: Pop(0)
0x461: Return(); Pop(0)

0x462: PushEmpty()
0x463: PushEmpty()
0x464: Call2 0x3b5

0x465: Pop(0)
0x466: PushEmpty(object)
0x467: Stack[-2] = Stack[-1]
0x468: Call2 0x938

0x469: Pop(1)
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty(bool, object)
0x46d: Stack[-3] = Stack[-1]
0x46e: Call2 0x639

0x46f: Stack[-2] = Stack[-4]
0x470: Pop(2)
0x471: Return(); Pop(0)

0x472: Stack[-1] = "walk" // @poff=482
0x473: Return(); Pop(0)

0x474: Stack[-1] = "run" // @poff=492
0x475: Return(); Pop(0)

0x476: PushEmpty()
0x477: PushEmpty(object)
0x478: Stack[-2] = Stack[-1]
0x479: Call2 0x48d

0x47a: Pop(1)
0x47b: Push((int) 50)
0x47c: Push((int) 40)
0x47d: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: @ Hold()
0x480: Pop(0)
0x481: GOTO 0x47f

0x482: Return(); Pop(0)

0x483: PushEmpty(bool, bool)
0x484: @ IsOverrideActive(Stack[-1])
0x485: Pop(0)
0x486: Pop(0); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x488: PushEmpty(object)
0x489: Stack[-4] = Stack[-1]
0x48a: Call2 0x8ad

0x48b: Pop(1)
0x48c: Return(); Pop(2)

0x48d: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x48e: Pop(0); PushNull((bool) Stack[-21] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x490: PushEmpty(string)
0x491: Stack[-1] = "fdie" // @poff=500
0x492: Call2 0x4e8

0x493: Pop(1)
0x494: GOTO 0x4e7

0x495: @@ GetPosition(Stack[-10]); Obj=21 // @poff=470
0x496: Pop(0)
0x497: @ GetPosition(Stack[-9])
0x498: Pop(0)
0x499: @ GetDirection(Stack[-8])
0x49a: Pop(0)
0x49b: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x49c: Push(CvectorIndex(Stack[-7], 0))
0x49d: Push(CvectorIndex(Stack[-9], 0))
0x49e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x49f: Push(CvectorIndex(Stack[-8], 2))
0x4a0: Push(CvectorIndex(Stack[-10], 2))
0x4a1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4a2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a3: Push((int) 0)
0x4a4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: Stack[-6] = "fdie" // @poff=500
0x4a7: GOTO 0x4a9

0x4a8: Stack[-6] = "bdie" // @poff=510
0x4a9: @ RemoveRTEnvelope()
0x4aa: Pop(0)
0x4ab: @ SetDeathState()
0x4ac: Pop(0)
0x4ad: @ Stop()
0x4ae: Pop(0)
0x4af: @ StopAsync()
0x4b0: Pop(0)
0x4b1: Stack[-21] = Stack[-5]
0x4b2: Push("GetScriptProperty") // @poff=520
0x4b3: Push((int) 2)
0x4b4: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4b5: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4b6: Push("Owner") // @poff=556
0x4b7: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=568
0x4b8: Pop(1)
0x4b9: Push(Stack[-4])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bb: Push("Owner") // @poff=556
0x4bc: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=586
0x4bd: Pop(1)
0x4be: Pop(0); PushNull((bool) Stack[-5] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4c0: Stack[-21] = Stack[-5]
0x4c1: Push("@GetEyesHeight") // @poff=604
0x4c2: Push((int) 1)
0x4c3: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c5: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=634
0x4c6: Pop(0)
0x4c7: Stack[-1] = [0.0, 0.0, 0.0]
0x4c8: Push(CvectorIndex(Stack[-1], 1))
0x4c9: Stack[-3] = Stack[-1]
0x4ca: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4cb: Push("head") // @poff=460
0x4cc: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4cd: Pop(1)
0x4ce: Stack[-3] = (bool) 1
0x4cf: GOTO 0x4d1

0x4d0: Stack[-3] = (bool) 0
0x4d1: PushEmpty(string)
0x4d2: Stack[-7] = Stack[-1]
0x4d3: Call2 0x7e7

0x4d4: Pop(1)
0x4d5: Push("all") // @poff=138
0x4d6: @ PlayAnimation(Stack[-1], Stack[-7])
0x4d7: Pop(1)
0x4d8: @ WaitForAnimEnd()
0x4d9: Pop(0)
0x4da: Push(Stack[-3])
0x4db: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4dc: @ StopAsync()
0x4dd: Pop(0)
0x4de: Push("head") // @poff=460
0x4df: @ UnlookAsync(Stack[-1])
0x4e0: Pop(1)
0x4e1: Push("all") // @poff=138
0x4e2: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4e3: Pop(1)
0x4e4: @ RemoveEnvelope()
0x4e5: Pop(0)
0x4e6: Stack[-5] = 0
0x4e7: Return(); Pop(20)

0x4e8: PushEmpty()
0x4e9: @ RemoveRTEnvelope()
0x4ea: Pop(0)
0x4eb: @ SetDeathState()
0x4ec: Pop(0)
0x4ed: @ Stop()
0x4ee: Pop(0)
0x4ef: @ StopAsync()
0x4f0: Pop(0)
0x4f1: @ StopSecondaryAnimation()
0x4f2: Pop(0)
0x4f3: PushEmpty(string)
0x4f4: Stack[-2] = Stack[-1]
0x4f5: Call2 0x7e7

0x4f6: Pop(1)
0x4f7: Push("all") // @poff=138
0x4f8: @ PlayAnimation(Stack[-1], Stack[-2])
0x4f9: Pop(1)
0x4fa: @ WaitForAnimEnd()
0x4fb: Pop(0)
0x4fc: Push("all") // @poff=138
0x4fd: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4fe: Pop(1)
0x4ff: @ RemoveEnvelope()
0x500: Pop(0)
0x501: Return(); Pop(0)

0x502: PushEmpty()
0x503: Return(); Pop(0)

0x504: PushEmpty()
0x505: Return(); Pop(0)

0x506: PushEmpty()
0x507: Return(); Pop(0)

0x508: PushEmpty()
0x509: PushEmpty(int, object)
0x50a: Stack[-3] = Stack[-1]
0x50b: Push(-2, 1); TaskCall(0)
0x50c: Call2 0x0

0x50d: Pop(-2, 1); TaskReturn
0x50e: Pop(2)
0x50f: Return(); Pop(0)

0x510: Push(GlobalVars[0])
0x511: Stack[-1] = (bool) 0
0x512: GlobalVars[0] = Stack[-1]; Pop(1)
0x513: PushEmpty()
0x514: Call2 0x531

0x515: Pop(0)
0x516: Return(); Pop(0)

0x517: Return(); Pop(0)

0x518: PushEmpty()
0x519: PushEmpty(bool)
0x51a: Call2 0x52f

0x51b: Pop(0)
0x51c: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x51d: PushEmpty()
0x51e: Call2 0x585

0x51f: Pop(0)
0x520: PushEmpty(object)
0x521: Stack[-2] = Stack[-1]
0x522: Call2 0x508

0x523: Pop(1)
0x524: Return(); Pop(0)

0x525: PushEmpty()
0x526: Push("kill_player") // @poff=648
0x527: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x529: PushEmpty()
0x52a: Push(-0, 6); TaskCall(2)
0x52b: Call2 0xcb

0x52c: Pop(-0, 6); TaskReturn
0x52d: Pop(0)
0x52e: Return(); Pop(0)

0x52f: Stack[-1] = (bool) 1
0x530: Return(); Pop(0)

0x531: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x532: @ GetPFPosition(Stack[-1]T)
0x533: Pop(0)
0x534: @ GetDirection(Stack[-0]T)
0x535: Pop(0)
0x536: PushEmpty()
0x537: Call2 0x58a

0x538: Pop(0)
0x539: Push((int) 10)
0x53a: @ irand(Stack[-5], Stack[-1])
0x53b: Pop(1)
0x53c: Push((int) 5)
0x53d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x53e: @ Sleep(Stack[-1], Stack[-4])
0x53f: Pop(1)
0x540: Push(Stack[-3])
0x541: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x542: PushEmpty()
0x543: Call2 0x517

0x544: Pop(0)
0x545: GOTO 0x583

0x546: PushEmpty()
0x547: Call2 0x58a

0x548: Pop(0)
0x549: @ GetPFPosition(Stack[-2])
0x54a: Pop(0)
0x54b: PushEmpty(float, cvector, cvector)
0x54c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54d: Stack[-5] = Stack[-1]
0x54e: Call2 0x820

0x54f: Pop(2)
0x550: Push((int) 40000)
0x551: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x553: @ FindPathTo(Stack[-1], Stack[-1]T)
0x554: Pop(0)
0x555: Pop(0); Push(( Stack[-1] != 0 )
0x556: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x557: @ RotatePath(Stack[-1], Stack[-3])
0x558: Pop(0)
0x559: Pop(0); Push((bool) Stack[-3] == 0)
0x55a: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55b: GOTO 0x582

0x55c: Push((bool) 0)
0x55d: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x55e: Pop(1)
0x55f: Pop(0); Push((bool) Stack[-3] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: GOTO 0x582

0x562: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x563: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x564: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x565: Pop(2)
0x566: Pop(0); Push((bool) Stack[-3] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: GOTO 0x582

0x569: @ WaitForAnimEnd(Stack[-3])
0x56a: Pop(0)
0x56b: Pop(0); Push((bool) Stack[-3] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56d: GOTO 0x582

0x56e: GOTO 0x583

0x56f: GOTO 0x573

0x570: Push((int) 1)
0x571: @ Sleep(Stack[-1])
0x572: Pop(1)
0x573: Stack[-1] = 0
0x574: GOTO 0x582

0x575: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x576: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x577: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x578: Pop(2)
0x579: Pop(0); Push((bool) Stack[-3] == 0)
0x57a: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57b: GOTO 0x582

0x57c: @ WaitForAnimEnd(Stack[-3])
0x57d: Pop(0)
0x57e: Pop(0); Push((bool) Stack[-3] == 0)
0x57f: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x580: GOTO 0x582

0x581: GOTO 0x583

0x582: GOTO 0x546

0x583: GOTO 0x536

0x584: Return(); Pop(8)

0x585: @ StopGroup0()
0x586: Pop(0)
0x587: @ Stop()
0x588: Pop(0)
0x589: Return(); Pop(0)

0x58a: Return(); Pop(0)

0x58b: PushEmpty()
0x58c: Push((int) 2)
0x58d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58f: Stack[-2] = "fire" // @poff=672
0x590: Return(); Pop(0)

0x591: GOTO 0x597

0x592: Push((int) 1)
0x593: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-2] = "bullet" // @poff=682
0x596: Return(); Pop(0)

0x597: Stack[-2] = "phys" // @poff=696
0x598: Return(); Pop(0)

0x599: PushEmpty(cvector, cvector, cvector, cvector)
0x59a: @ GetPosition(Stack[-2])
0x59b: Pop(0)
0x59c: @@ GetPosition(Stack[-1]); Obj=5 // @poff=470
0x59d: Pop(0)
0x59e: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x59f: Return(); Pop(4)

0x5a0: PushEmpty(bool, bool)
0x5a1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5a2: Pop(0)
0x5a3: Stack[-1] = Stack[-4]
0x5a4: Return(); Pop(2)

0x5a5: PushEmpty(bool, bool)
0x5a6: Push("HasProperty") // @poff=706
0x5a7: Push((int) 2)
0x5a8: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5a9: Pop(1); Push((bool) Stack[-1] == 0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-5] = (bool) 0
0x5ac: Return(); Pop(2)

0x5ad: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=730
0x5ae: Pop(0)
0x5af: Stack[-1] = Stack[-5]
0x5b0: Return(); Pop(2)

0x5b1: PushEmpty(float, float)
0x5b2: PushEmpty(bool, object, string)
0x5b3: Stack[-10] = Stack[-2]
0x5b4: Stack[-9] = Stack[-1]
0x5b5: Call2 0x5a5

0x5b6: Pop(2)
0x5b7: Pop(1); Push((bool) Stack[-1] == 0)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b9: Stack[-8] = (bool) 0
0x5ba: Return(); Pop(2)

0x5bb: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=742
0x5bc: Pop(0)
0x5bd: PushEmpty(float, float, float, float)
0x5be: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x5bf: Stack[-8] = Stack[-2]
0x5c0: Stack[-7] = Stack[-1]
0x5c1: Call2 0x82b

0x5c2: Pop(3)
0x5c3: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=754
0x5c4: Pop(1)
0x5c5: Stack[-8] = (bool) 1
0x5c6: Return(); Pop(2)

0x5c7: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5c8: PushEmpty(bool, object, string)
0x5c9: Stack[-18] = Stack[-2]
0x5ca: Stack[-1] = "health" // @poff=766
0x5cb: Call2 0x5a5

0x5cc: Pop(2)
0x5cd: Pop(1); Push((bool) Stack[-1] == 0)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5cf: Stack[-16] = (float) 0.0
0x5d0: Return(); Pop(12)

0x5d1: PushEmpty(bool, object, string)
0x5d2: Stack[-18] = Stack[-2]
0x5d3: Stack[-1] = "armor" // @poff=780
0x5d4: Call2 0x5a5

0x5d5: Pop(2)
0x5d6: Pop(1); Push((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-6] = (int) 0
0x5d9: GOTO 0x5dd

0x5da: Push("armor") // @poff=780
0x5db: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=742
0x5dc: Pop(1)
0x5dd: Push("armor_") // @poff=792
0x5de: PushEmpty(string, int)
0x5df: Stack[-16] = Stack[-1]
0x5e0: Call2 0x58b

0x5e1: Pop(1)
0x5e2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5e3: PushEmpty(bool, object, string)
0x5e4: Stack[-18] = Stack[-2]
0x5e5: Stack[-8] = Stack[-1]
0x5e6: Call2 0x5a5

0x5e7: Pop(2)
0x5e8: Pop(1); Push((bool) Stack[-1] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5ea: Stack[-4] = (int) 0
0x5eb: GOTO 0x5ee

0x5ec: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=742
0x5ed: Pop(0)
0x5ee: PushEmpty(float, float, float)
0x5ef: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5f0: Push((float)100.0)
0x5f1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5f2: Stack[-1] = (int) 1
0x5f3: Call2 0x824

0x5f4: Stack[-3] = Stack[-6]
0x5f5: Pop(3)
0x5f6: Push("health") // @poff=766
0x5f7: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=742
0x5f8: Pop(1)
0x5f9: Push((int) 1)
0x5fa: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5fb: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5fc: Push("health") // @poff=766
0x5fd: PushEmpty(float, float, float, float)
0x5fe: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5ff: Stack[-2] = (int) 0
0x600: Stack[-1] = (int) 1
0x601: Call2 0x82b

0x602: Pop(3)
0x603: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=754
0x604: Pop(2)
0x605: PushEmpty(bool, object)
0x606: Stack[-17] = Stack[-1]
0x607: Call2 0x5a0

0x608: Pop(1)
0x609: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60a: PushEmpty(float)
0x60b: Stack[-1] = -Stack[-2]; Pop(0);
0x60c: Call2 0x859

0x60d: Pop(1)
0x60e: Stack[-1] = Stack[-16]
0x60f: Return(); Pop(12)

0x610: PushEmpty(bool, bool)
0x611: @@ IsDead(Stack[-1]); Obj=3 // @poff=806
0x612: Pop(0)
0x613: Stack[-1] = Stack[-4]
0x614: Return(); Pop(2)

0x615: PushEmpty(object, object, object, object)
0x616: Pop(0); PushNull((bool) Stack[-5] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x618: Stack[-6] = (bool) 0
0x619: Return(); Pop(4)

0x61a: PushEmpty(bool)
0x61b: Stack[-1] = (bool) 0
0x61c: Push("IsDead") // @poff=813
0x61d: Push((int) 1)
0x61e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x61f: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x620: PushEmpty(bool, object)
0x621: Stack[-8] = Stack[-1]
0x622: Call2 0x610

0x623: Pop(1)
0x624: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x625: Stack[-1] = (bool) 1
0x626: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x627: Stack[-6] = (bool) 0
0x628: Return(); Pop(4)

0x629: @ GetScene(Stack[-2])
0x62a: Pop(0)
0x62b: Pop(0); PushNull((bool) Stack[-2] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62d: Stack[-6] = (bool) 0
0x62e: Return(); Pop(4)

0x62f: @@ GetScene(Stack[-1]); Obj=5 // @poff=827
0x630: Pop(0)
0x631: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-6] = (bool) 0
0x634: Return(); Pop(4)

0x635: Stack[-6] = (bool) 1
0x636: Return(); Pop(4)

0x637: Stack[-1] = 0
0x638: Stack[-2] = 0
0x639: PushEmpty(int, int)
0x63a: PushEmpty(bool, object)
0x63b: Stack[-5] = Stack[-1]
0x63c: Call2 0x615

0x63d: Pop(1)
0x63e: Pop(1); Push((bool) Stack[-1] == 0)
0x63f: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x640: Stack[-4] = (bool) 0
0x641: Return(); Pop(2)

0x642: PushEmpty(bool, object, string)
0x643: Stack[-6] = Stack[-2]
0x644: Stack[-1] = "noaccess" // @poff=836
0x645: Call2 0x5a5

0x646: Pop(2)
0x647: Pop(1); Push((bool) Stack[-1] == 0)
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-4] = (bool) 1
0x64a: Return(); Pop(2)

0x64b: Push("noaccess") // @poff=836
0x64c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=742
0x64d: Pop(1)
0x64e: Push((int) 0)
0x64f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x650: Return(); Pop(2)

0x651: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x652: Pop(0); PushNull((bool) Stack[-15] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x654: Return(); Pop(14)

0x655: @ IsDead(Stack[-7])
0x656: Pop(0)
0x657: Push(Stack[-7])
0x658: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x659: Return(); Pop(14)

0x65a: @ GetSecondaryAnimationType(Stack[-6])
0x65b: Pop(0)
0x65c: Push((int) 0)
0x65d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65f: Return(); Pop(14)

0x660: @@ GetPosition(Stack[-5]); Obj=15 // @poff=470
0x661: Pop(0)
0x662: @ GetPosition(Stack[-4])
0x663: Pop(0)
0x664: @ GetDirection(Stack[-3])
0x665: Pop(0)
0x666: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x667: Push(CvectorIndex(Stack[-2], 0))
0x668: Push(CvectorIndex(Stack[-4], 0))
0x669: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66a: Push(CvectorIndex(Stack[-3], 2))
0x66b: Push(CvectorIndex(Stack[-5], 2))
0x66c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x66e: Push((int) 0)
0x66f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x671: Stack[-1] = "fhit" // @poff=854
0x672: GOTO 0x674

0x673: Stack[-1] = "bhit" // @poff=864
0x674: Push("hit_react") // @poff=874
0x675: Push("1") // @poff=894
0x676: Pop(1); Push(Stack[-3] + Stack[-1]);
0x677: Push("2") // @poff=898
0x678: Pop(1); Push(Stack[-4] + Stack[-1]);
0x679: Push((int) -10)
0x67a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(4)
0x67c: Return(); Pop(14)

0x67d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x67e: PushEmpty(bool)
0x67f: Stack[-1] = (bool) 0
0x680: PushEmpty(bool)
0x681: Stack[-1] = (bool) 0
0x682: Push(Stack[-23])
0x683: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x684: Push((int) 4)
0x685: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x687: Stack[-1] = (bool) 1
0x688: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x689: Push((int) 5)
0x68a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68c: Stack[-1] = (bool) 1
0x68d: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x68e: PushEmpty(cvector, cvector)
0x68f: PushEmpty(cvector, object)
0x690: Stack[-25] = Stack[-1]
0x691: Call2 0x599

0x692: Stack[-2] = Stack[-3]
0x693: Pop(2)
0x694: Call2 0x816

0x695: Stack[-2] = Stack[-11]
0x696: Pop(2)
0x697: @ CreateVectorVector(Stack[-8])
0x698: Pop(0)
0x699: Stack[-7] = (int) 1
0x69a: Push("hit") // @poff=856
0x69b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x69c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x69d: Pop(1)
0x69e: Pop(0); Push((bool) Stack[-6] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: GOTO 0x6aa

0x6a1: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6a2: Push((float)0.7071067690849304)
0x6a3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a5: @@ add(Stack[-5]); Obj=8 // @poff=902
0x6a6: Pop(0)
0x6a7: Push((int) 1)
0x6a8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6a9: GOTO 0x69a

0x6aa: @@ size(Stack[-3]); Obj=8 // @poff=906
0x6ab: Pop(0)
0x6ac: Push(Stack[-3])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6ae: @ irand(Stack[-2], Stack[-3])
0x6af: Pop(0)
0x6b0: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=911
0x6b1: Pop(0)
0x6b2: PushEmpty(object, int, float, cvector, cvector)
0x6b3: Stack[-26] = Stack[-5]
0x6b4: Stack[-25] = Stack[-4]
0x6b5: Stack[-24] = Stack[-3]
0x6b6: Stack[-6] = Stack[-2]
0x6b7: Stack[-1] = -Stack[-14]; Pop(0);
0x6b8: Call2 0x6c1

0x6b9: Pop(5)
0x6ba: Return(); Pop(18)

0x6bb: Stack[-8] = 0
0x6bc: PushEmpty(object)
0x6bd: Stack[-22] = Stack[-1]
0x6be: Call2 0x651

0x6bf: Pop(1)
0x6c0: Return(); Pop(18)

0x6c1: PushEmpty(object, object, object, object)
0x6c2: @ GetScene(Stack[-2])
0x6c3: Pop(0)
0x6c4: Push("scripted") // @poff=915
0x6c5: Push("blood_dir.xml") // @poff=933
0x6c6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6c7: Pop(2)
0x6c8: PushEmpty(object)
0x6c9: Stack[-10] = Stack[-1]
0x6ca: Call2 0x651

0x6cb: Pop(1)
0x6cc: Return(); Pop(4)

0x6cd: Stack[-1] = 0
0x6ce: Stack[-2] = 0
0x6cf: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6d0: @@ GetPosition(Stack[-3]); Obj=7 // @poff=470
0x6d1: Pop(0)
0x6d2: @ GetPosition(Stack[-2])
0x6d3: Pop(0)
0x6d4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6d5: Push(CvectorIndex(Stack[-1], 0))
0x6d6: Push(CvectorIndex(Stack[-2], 2))
0x6d7: @ RotateAsync(Stack[-2], Stack[-1])
0x6d8: Pop(2)
0x6d9: Return(); Pop(6)

0x6da: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6db: @@ GetPosition(Stack[-8]); Obj=20 // @poff=470
0x6dc: Pop(0)
0x6dd: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=634
0x6de: Pop(0)
0x6df: Push(CvectorIndex(Stack[-8], 1))
0x6e0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6e1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6e2: @ GetPosition(Stack[-7])
0x6e3: Pop(0)
0x6e4: @ GetEyesHeight(Stack[-9])
0x6e5: Pop(0)
0x6e6: Push(CvectorIndex(Stack[-7], 1))
0x6e7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6e8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6e9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6ea: Push(CvectorIndex(Stack[-6], 1))
0x6eb: Stack[-1] = (int) 0
0x6ec: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6ed: Pop(0); Push(Stack[-6] | Stack[-6]);
0x6ee: Pop(1); Push(Sqrt(Stack[-1]))
0x6ef: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x6f0: Stack[-5] = -Stack[-6]; Pop(0);
0x6f1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x6f2: PushEmpty(cvector, cvector)
0x6f3: Push([0.0, 1.0, 0.0])
0x6f4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x6f5: Call2 0x816

0x6f6: Pop(1)
0x6f7: Push((int) 25)
0x6f8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6f9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6fa: Push([0.0, 10.0, 0.0])
0x6fb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x6fc: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x6fd: @ IsOverrideActive(Stack[-2])
0x6fe: Pop(0)
0x6ff: Push(Stack[-2])
0x700: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x701: Stack[-21] = (bool) 0
0x702: Return(); Pop(18)

0x703: @ StopWorld()
0x704: Pop(0)
0x705: @ CameraTransit(Stack[-3], Stack[-5])
0x706: Pop(0)
0x707: Push(CvectorIndex(Stack[-4], 0))
0x708: Push(CvectorIndex(Stack[-5], 2))
0x709: @ Rotate(Stack[-2], Stack[-1])
0x70a: Pop(2)
0x70b: PushEmpty(bool)
0x70c: Call2 0x946

0x70d: Pop(0)
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: GOTO 0x718

0x710: Push("head") // @poff=460
0x711: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x712: Pop(1)
0x713: Push(Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x715: Push("head") // @poff=460
0x716: @ LookAsyncCamera(Stack[-1])
0x717: Pop(1)
0x718: @ CameraWaitForPlayFinish()
0x719: Pop(0)
0x71a: @ ResumeWorld()
0x71b: Pop(0)
0x71c: Stack[-21] = (bool) 1
0x71d: Return(); Pop(18)

0x71e: PushEmpty(bool, bool)
0x71f: @ CameraSwitchToNormal()
0x720: Pop(0)
0x721: PushEmpty(bool)
0x722: Call2 0x946

0x723: Pop(0)
0x724: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x725: GOTO 0x72e

0x726: Push("head") // @poff=460
0x727: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x728: Pop(1)
0x729: Push(Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72b: Push("head") // @poff=460
0x72c: @ UnlookAsync(Stack[-1])
0x72d: Pop(1)
0x72e: Return(); Pop(2)

0x72f: PushEmpty(int, int, int, int)
0x730: Push("voice_common") // @poff=961
0x731: @ GetVariable(Stack[-1], Stack[-3])
0x732: Pop(1)
0x733: Push(Stack[-2])
0x734: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x735: PushEmpty(bool, object)
0x736: Stack[-7] = Stack[-1]
0x737: Call2 0x769

0x738: Pop(1)
0x739: Pop(1); Push((bool) Stack[-1] == 0)
0x73a: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73b: PushEmpty(bool, object)
0x73c: Stack[-7] = Stack[-1]
0x73d: Call2 0x78e

0x73e: Pop(1)
0x73f: Pop(1); Push((bool) Stack[-1] == 0)
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-6] = (bool) 0
0x742: Return(); Pop(4)

0x743: Push((int) 2)
0x744: @ irand(Stack[-2], Stack[-1])
0x745: Pop(1)
0x746: Push(Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x748: Push("voice_common") // @poff=961
0x749: Push((int) 1)
0x74a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x74b: Push((int) 3)
0x74c: Pop(2); Push(Stack[-2] % Stack[-1]);
0x74d: @ SetVariable(Stack[-2], Stack[-1])
0x74e: Pop(2)
0x74f: GOTO 0x754

0x750: Push("voice_common") // @poff=961
0x751: Push((int) 0)
0x752: @ SetVariable(Stack[-2], Stack[-1])
0x753: Pop(2)
0x754: GOTO 0x767

0x755: PushEmpty(bool, object)
0x756: Stack[-7] = Stack[-1]
0x757: Call2 0x78e

0x758: Pop(1)
0x759: Pop(1); Push((bool) Stack[-1] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x75b: PushEmpty(bool, object)
0x75c: Stack[-7] = Stack[-1]
0x75d: Call2 0x769

0x75e: Pop(1)
0x75f: Pop(1); Push((bool) Stack[-1] == 0)
0x760: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x761: Stack[-6] = (bool) 0
0x762: Return(); Pop(4)

0x763: Push("voice_common") // @poff=961
0x764: Push((int) 1)
0x765: @ SetVariable(Stack[-2], Stack[-1])
0x766: Pop(2)
0x767: Stack[-6] = (bool) 1
0x768: Return(); Pop(4)

0x769: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x76a: Stack[-5] = "c" // @poff=987
0x76b: Stack[-4] = (int) 0
0x76c: Push((int) 1)
0x76d: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x76e: Push((int) 1)
0x76f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x770: Pop(1); Push(Stack[-6] + Stack[-1]);
0x771: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=730
0x772: Pop(1)
0x773: Pop(0); Push((bool) Stack[-3] == 0)
0x774: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x775: GOTO 0x779

0x776: Push((int) 1)
0x777: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x778: GOTO 0x76c

0x779: Pop(0); Push((bool) Stack[-4] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77b: Stack[-12] = (bool) 0
0x77c: Return(); Pop(10)

0x77d: Stack[-2] = (int) 0
0x77e: Push((int) 1)
0x77f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x781: @ irand(Stack[-2], Stack[-4])
0x782: Pop(0)
0x783: Push((int) 1)
0x784: Pop(1); Push(Stack[-3] + Stack[-1]);
0x785: Pop(1); Push(Stack[-6] + Stack[-1]);
0x786: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=742
0x787: Pop(1)
0x788: PushEmpty(bool, string)
0x789: Stack[-3] = Stack[-1]
0x78a: Call2 0x7d1

0x78b: Stack[-2] = Stack[-14]
0x78c: Pop(2)
0x78d: Return(); Pop(10)

0x78e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x78f: Push("d") // @poff=420
0x790: PushEmpty(int)
0x791: Call2 0x879

0x792: Pop(0)
0x793: Pop(2); Push(Stack[-2] + Stack[-1]);
0x794: Push("m") // @poff=991
0x795: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x796: Stack[-4] = (int) 0
0x797: Push((int) 1)
0x798: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x799: Push((int) 1)
0x79a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x79b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x79c: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=730
0x79d: Pop(1)
0x79e: Pop(0); Push((bool) Stack[-3] == 0)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: GOTO 0x7a4

0x7a1: Push((int) 1)
0x7a2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7a3: GOTO 0x797

0x7a4: Pop(0); Push((bool) Stack[-4] == 0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a6: Stack[-12] = (bool) 0
0x7a7: Return(); Pop(10)

0x7a8: Stack[-2] = (int) 0
0x7a9: Push((int) 1)
0x7aa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: @ irand(Stack[-2], Stack[-4])
0x7ad: Pop(0)
0x7ae: Push((int) 1)
0x7af: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7b0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7b1: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=742
0x7b2: Pop(1)
0x7b3: PushEmpty(bool, string)
0x7b4: Stack[-3] = Stack[-1]
0x7b5: Call2 0x7d1

0x7b6: Stack[-2] = Stack[-14]
0x7b7: Pop(2)
0x7b8: Return(); Pop(10)

0x7b9: PushEmpty(float, float, float, float)
0x7ba: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x7bb: Pop(0)
0x7bc: Push((bool) 0)
0x7bd: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(1)
0x7bf: Return(); Pop(4)

0x7c0: PushEmpty(float, float, float, float)
0x7c1: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x7c2: Pop(0)
0x7c3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x7c4: Pop(0)
0x7c5: Return(); Pop(4)

0x7c6: PushEmpty(float, cvector, float, cvector)
0x7c7: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=634
0x7c8: Pop(0)
0x7c9: Stack[-1] = [0.0, 0.0, 0.0]
0x7ca: Push(CvectorIndex(Stack[-1], 1))
0x7cb: Stack[-3] = Stack[-1]
0x7cc: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7cd: Push("head") // @poff=460
0x7ce: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7cf: Pop(1)
0x7d0: Return(); Pop(4)

0x7d1: PushEmpty(bool, bool)
0x7d2: PushEmpty(bool)
0x7d3: Call2 0x946

0x7d4: Pop(0)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7d6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x7d7: Pop(0)
0x7d8: Push(Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7da: @ lshPlaySpeech(Stack[-3])
0x7db: Pop(0)
0x7dc: Stack[-4] = (bool) 1
0x7dd: Return(); Pop(2)

0x7de: Stack[-4] = (bool) 0
0x7df: Return(); Pop(2)

0x7e0: PushEmpty(bool)
0x7e1: Call2 0x946

0x7e2: Pop(0)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: @ lshStopSpeech()
0x7e5: Pop(0)
0x7e6: Return(); Pop(0)

0x7e7: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7e8: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7e9: Pop(0)
0x7ea: Pop(0); Push((bool) Stack[-8] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7ec: Stack[-7] = (int) 0
0x7ed: Push((int) 1)
0x7ee: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7ef: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7f0: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7f1: Pop(1)
0x7f2: Pop(0); Push((bool) Stack[-6] == 0)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f4: GOTO 0x7f8

0x7f5: Push((int) 1)
0x7f6: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7f7: GOTO 0x7ed

0x7f8: Pop(0); Push((bool) Stack[-7] == 0)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: Return(); Pop(16)

0x7fb: @ irand(Stack[-5], Stack[-7])
0x7fc: Pop(0)
0x7fd: Push((int) 1)
0x7fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7ff: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x800: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x801: Pop(0)
0x802: Push(Stack[-4])
0x803: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x804: @ GetEyesHeight(Stack[-3])
0x805: Pop(0)
0x806: @ GetDirection(Stack[-2])
0x807: Pop(0)
0x808: Push((int) 50)
0x809: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x80a: Push(CvectorIndex(Stack[-1], 1))
0x80b: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x80c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x80d: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x80e: Pop(0)
0x80f: Return(); Pop(16)

0x810: PushEmpty(object, object)
0x811: @ self(Stack[-1])
0x812: Pop(0)
0x813: Stack[-1] = Stack[-3]
0x814: Return(); Pop(2)

0x815: Stack[-1] = 0
0x816: PushEmpty(float, float)
0x817: Pop(0); Push(Stack[-3] | Stack[-3]);
0x818: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x819: Push((float)9.999999974752427e-07)
0x81a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81c: Stack[-4] = [0.0, 0.0, 0.0]
0x81d: Return(); Pop(2)

0x81e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x81f: Return(); Pop(2)

0x820: PushEmpty(cvector, cvector)
0x821: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x822: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x823: Return(); Pop(2)

0x824: PushEmpty()
0x825: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x826: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x827: Stack[-2] = Stack[-3]
0x828: GOTO 0x82a

0x829: Stack[-1] = Stack[-3]
0x82a: Return(); Pop(0)

0x82b: PushEmpty()
0x82c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x82d: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82e: Stack[-2] = Stack[-4]
0x82f: Return(); Pop(0)

0x830: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x831: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x832: Stack[-1] = Stack[-4]
0x833: Return(); Pop(0)

0x834: Stack[-3] = Stack[-4]
0x835: Return(); Pop(0)

0x836: PushEmpty()
0x837: Pop(0); Push((bool) Stack[-2] == 0)
0x838: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x839: Stack[-3] = (bool) 0
0x83a: Return(); Pop(0)

0x83b: Push((int) 0)
0x83c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x83e: Push((int) 8)
0x83f: @ SendWorldWndMessage(Stack[-1])
0x840: Pop(1)
0x841: GOTO 0x84b

0x842: Push((int) 0)
0x843: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x845: Push((int) 9)
0x846: @ SendWorldWndMessage(Stack[-1])
0x847: Pop(1)
0x848: GOTO 0x84b

0x849: Stack[-3] = (bool) 0
0x84a: Return(); Pop(0)

0x84b: PushEmpty(float)
0x84c: Stack[-2] = Stack[-1]
0x84d: Call2 0x863

0x84e: Pop(1)
0x84f: PushEmpty(bool, object, string, float, float, float)
0x850: Stack[-8] = Stack[-5]
0x851: Stack[-4] = "reputation" // @poff=995
0x852: Stack[-7] = Stack[-3]
0x853: Stack[-2] = (int) 0
0x854: Stack[-1] = (int) 1
0x855: Call2 0x5b1

0x856: Pop(6)
0x857: Stack[-3] = (bool) 1
0x858: Return(); Pop(0)

0x859: PushEmpty(object, object)
0x85a: @ CreateFloatVector(Stack[-1])
0x85b: Pop(0)
0x85c: @@ add(Stack[-3]); Obj=1 // @poff=902
0x85d: Pop(0)
0x85e: Push((int) 15)
0x85f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x860: Pop(1)
0x861: Return(); Pop(2)

0x862: Stack[-1] = 0
0x863: PushEmpty(object, object)
0x864: @ CreateFloatVector(Stack[-1])
0x865: Pop(0)
0x866: @@ add(Stack[-3]); Obj=1 // @poff=902
0x867: Pop(0)
0x868: Push((int) 16)
0x869: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x86a: Pop(1)
0x86b: Return(); Pop(2)

0x86c: Stack[-1] = 0
0x86d: PushEmpty(object, object)
0x86e: @ FindActor(Stack[-1], Stack[-4])
0x86f: Pop(0)
0x870: Pop(0); PushNull((bool) Stack[-1] == 0)
0x871: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x872: Stack[-5] = (bool) 0
0x873: Return(); Pop(2)

0x874: @ Trigger(Stack[-1], Stack[-3])
0x875: Pop(0)
0x876: Stack[-5] = (bool) 1
0x877: Return(); Pop(2)

0x878: Stack[-1] = 0
0x879: PushEmpty(float, float)
0x87a: @ GetGameTime(Stack[-1])
0x87b: Pop(0)
0x87c: Push((int) 1)
0x87d: PushEmpty(int)
0x87e: Push((int) 24)
0x87f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x880: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x881: Return(); Pop(2)

0x882: PushEmpty(bool, bool)
0x883: @ IsPlayerActor(Stack[-3], Stack[-1])
0x884: Pop(0)
0x885: Push(Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x887: Push("attack") // @poff=226
0x888: @ PlayGlobalMusic(Stack[-1])
0x889: Pop(1)
0x88a: Return(); Pop(2)

0x88b: PushEmpty(object, object)
0x88c: @ GetScene(Stack[-1])
0x88d: Pop(0)
0x88e: Push("battle") // @poff=1017
0x88f: PushEmpty(object)
0x890: Call2 0x810

0x891: Pop(0)
0x892: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x893: Pop(2)
0x894: Return(); Pop(2)

0x895: Stack[-1] = 0
0x896: PushEmpty(int, int)
0x897: Push("branch") // @poff=1031
0x898: @ GetVariable(Stack[-1], Stack[-2])
0x899: Pop(1)
0x89a: Push((int) 0)
0x89b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89c: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89d: Stack[-3] = (int) 1
0x89e: Return(); Pop(2)

0x89f: GOTO 0x8a5

0x8a0: Push((int) 1)
0x8a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a3: Stack[-3] = (int) 2
0x8a4: Return(); Pop(2)

0x8a5: Stack[-3] = (int) 3
0x8a6: Return(); Pop(2)

0x8a7: PushEmpty(int, int)
0x8a8: Push("branch") // @poff=1031
0x8a9: @ GetVariable(Stack[-1], Stack[-2])
0x8aa: Pop(1)
0x8ab: Stack[-1] = Stack[-3]
0x8ac: Return(); Pop(2)

0x8ad: PushEmpty()
0x8ae: PushEmpty(int)
0x8af: Call2 0x8a7

0x8b0: Pop(0)
0x8b1: Push((int) 1)
0x8b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b4: @ WorkWithCorpse(Stack[-1])
0x8b5: Pop(0)
0x8b6: GOTO 0x8b9

0x8b7: @ Barter(Stack[-1])
0x8b8: Pop(0)
0x8b9: Return(); Pop(0)

0x8ba: PushEmpty(object, int, bool, object, int, bool)
0x8bb: @ CreateInvItem(Stack[-3])
0x8bc: Pop(0)
0x8bd: @@ SetItemName(Stack[-7]); Obj=3 // @poff=1045
0x8be: Pop(0)
0x8bf: Push("Organ") // @poff=1057
0x8c0: Push((int) 1)
0x8c1: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=754
0x8c2: Pop(2)
0x8c3: @@ GetItemID(Stack[-2]); Obj=3 // @poff=1069
0x8c4: Pop(0)
0x8c5: Push((int) 0)
0x8c6: Push((int) 1)
0x8c7: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8c8: Pop(2)
0x8c9: Return(); Pop(6)

0x8ca: Stack[-3] = 0
0x8cb: PushEmpty(int)
0x8cc: Call2 0x8a7

0x8cd: Pop(0)
0x8ce: Push((int) 1)
0x8cf: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8d1: Return(); Pop(0)

0x8d2: PushEmpty(string)
0x8d3: Stack[-1] = "liver" // @poff=1079
0x8d4: Call2 0x8ba

0x8d5: Pop(1)
0x8d6: PushEmpty(string)
0x8d7: Stack[-1] = "kidney" // @poff=1091
0x8d8: Call2 0x8ba

0x8d9: Pop(1)
0x8da: PushEmpty(string)
0x8db: Stack[-1] = "heart" // @poff=1105
0x8dc: Call2 0x8ba

0x8dd: Pop(1)
0x8de: PushEmpty(string)
0x8df: Stack[-1] = "blood" // @poff=1117
0x8e0: Call2 0x8ba

0x8e1: Pop(1)
0x8e2: Return(); Pop(0)

0x8e3: PushEmpty(bool, bool)
0x8e4: Push(GlobalVars[0])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e6: Return(); Pop(2)

0x8e7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8e8: Pop(0)
0x8e9: Push(Stack[-1])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8eb: Push(GlobalVars[0])
0x8ec: Stack[-1] = (bool) 1
0x8ed: GlobalVars[0] = Stack[-1]; Pop(1)
0x8ee: PushEmpty(bool, string, string)
0x8ef: Stack[-2] = "quest_d2_02" // @poff=1129
0x8f0: Stack[-1] = "player_attack" // @poff=1153
0x8f1: Call2 0x86d

0x8f2: Pop(3)
0x8f3: Return(); Pop(2)

0x8f4: PushEmpty(bool, string, string)
0x8f5: Stack[-2] = "quest_d2_02" // @poff=1129
0x8f6: Stack[-1] = "patrol2_unload" // @poff=1181
0x8f7: Call2 0x86d

0x8f8: Pop(3)
0x8f9: Return(); Pop(0)

0x8fa: PushEmpty(bool, bool)
0x8fb: Push("revolver_ammo") // @poff=1211
0x8fc: Push((int) 0)
0x8fd: Push((int) 2)
0x8fe: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8ff: Pop(3)
0x900: Push("alpha_pills") // @poff=1239
0x901: Push((int) 0)
0x902: Push((int) 2)
0x903: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x904: Pop(3)
0x905: PushEmpty(bool, object)
0x906: Stack[-5] = Stack[-1]
0x907: Call2 0x5a0

0x908: Pop(1)
0x909: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90a: PushEmpty(bool, object, float)
0x90b: Stack[-6] = Stack[-2]
0x90c: Stack[-1] = (float) -0.15000000596046448
0x90d: Call2 0x836

0x90e: Pop(3)
0x90f: PushEmpty()
0x910: Call2 0x8cb

0x911: Pop(0)
0x912: PushEmpty(object)
0x913: Stack[-4] = Stack[-1]
0x914: Push(-1, 0); TaskCall(4)
0x915: Call2 0x476

0x916: Pop(-1, 0); TaskReturn
0x917: Pop(1)
0x918: Return(); Pop(2)

0x919: PushEmpty()
0x91a: PushEmpty(object, int, float)
0x91b: Stack[-7] = Stack[-3]
0x91c: Stack[-6] = Stack[-2]
0x91d: Stack[-5] = Stack[-1]
0x91e: Call2 0x67d

0x91f: Pop(3)
0x920: Return(); Pop(0)

0x921: PushEmpty()
0x922: PushEmpty(object, int, float, cvector, cvector)
0x923: Stack[-11] = Stack[-5]
0x924: Stack[-10] = Stack[-4]
0x925: Stack[-9] = Stack[-3]
0x926: Stack[-7] = Stack[-2]
0x927: Stack[-6] = Stack[-1]
0x928: Call2 0x6c1

0x929: Pop(5)
0x92a: Return(); Pop(0)

0x92b: PushEmpty(float, float)
0x92c: Push("health") // @poff=766
0x92d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x92f: Push("health") // @poff=766
0x930: @ GetProperty(Stack[-1], Stack[-2])
0x931: Pop(1)
0x932: Push((int) 0)
0x933: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x935: @ SignalDeath(Stack[-4])
0x936: Pop(0)
0x937: Return(); Pop(2)

0x938: PushEmpty()
0x939: PushEmpty(object)
0x93a: Stack[-2] = Stack[-1]
0x93b: Call2 0x8fa

0x93c: Pop(1)
0x93d: Return(); Pop(0)

0x93e: Stack[-1] = (int) 515572
0x93f: Return(); Pop(0)

0x940: Stack[-1] = (int) 504031
0x941: Return(); Pop(0)

0x942: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=1263
0x943: Return(); Pop(0)

0x944: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=1303
0x945: Return(); Pop(0)

0x946: Stack[-1] = (bool) 0
0x947: Return(); Pop(0)

