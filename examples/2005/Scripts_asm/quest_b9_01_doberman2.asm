GlobalVarCount = 1
	G_VAR_0 object 

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
	W:quest_b9_01
	W:doberman_dead
	W:fdie
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:factory_fight
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
	W:2
	A:add
	A:size
	A:get
	W:scripted
	W:blood_dir.xml
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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c00610079006500720000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e636500610074007400610063006b0000004765745046506f736974696f6e00610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f006f00660066000000610074007400610063006b005f0062006500670069006e00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c00650000005f000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e670068006500610064000000476574506f736974696f6e00770061006c006b000000720075006e000000710075006500730074005f00620039005f0030003100000064006f006200650072006d0061006e005f00640065006100640000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006100630074006f00720079005f0066006900670068007400000066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479006800650061006c00740068000000610072006d006f0072000000610072006d006f0072005f0000004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f00720065006100630074000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c000000720065007000750074006100740069006f006e00000062006100740074006c00650000006200720061006e006300680000005365744974656d4e616d65004f007200670061006e0000004765744974656d4944006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f0064000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	RemoveActor (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x551
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x3ce Vars = (int)
		EVENT_1 Op = 0x3e9 Vars = (object)
		EVENT_2 Op = 0x3f8 Vars = (object)
		EVENT_10 Op = 0x47e Vars = (object)
		EVENT_41 Op = 0x489 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x4bc Vars = (object)
		EVENT_6 Op = 0x4c6 Vars = ()
		EVENT_22 Op = 0x543 Vars = (object, int, float, float)
		EVENT_16 Op = 0x545 Vars = (object, string)
		EVENT_41 Op = 0x547 Vars = (object)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x555 Vars = (object)
		EVENT_17 Op = 0x561 Vars = (object)
		EVENT_26 Op = 0x56c Vars = (string)

Events:
EVENT_22 Op = 0x828 Vars = (object, int, float, float)
EVENT_43 Op = 0x830 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x83a Vars = (object, string)
EVENT_41 Op = 0x847 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x6c5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x84f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x84d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x851

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x853

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7db

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x709

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 531091)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 531090)
0x5a: Push((int) 22761)
0x5b: Push((int) 32407)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 531094)
0x5f: Push((int) 32409)
0x60: Push((int) 32411)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x855

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x71a

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x855

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x721

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x732

0x9f: Pop(0)
0xa0: Push((int) 32408)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 531091)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 531090)
0xad: Push((int) 22761)
0xae: Push((int) 32407)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: Push((int) 531094)
0xb2: Push((int) 32409)
0xb3: Push((int) 32411)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 32409)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral" // @poff=89
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 531092)
0xbf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc0: Pop(1)
0xc1: @@@ ClearReplies(); Obj=0 // @poff=116
0xc2: Pop(0)
0xc3: Push((int) 531093)
0xc4: Push((int) 22761)
0xc5: Push((int) 32410)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Push((int) 531095)
0xc9: Push((int) -1)
0xca: Push((int) 32412)
0xcb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 22761)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral" // @poff=89
0xd3: Call2 0x84

0xd4: Pop(1)
0xd5: Push((int) 521598)
0xd6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd7: Pop(1)
0xd8: @@@ ClearReplies(); Obj=0 // @poff=116
0xd9: Pop(0)
0xda: Push((int) 521599)
0xdb: Push((int) -1)
0xdc: Push((int) 22762)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Push((int) 522256)
0xe0: Push((int) -1)
0xe1: Push((int) 23408)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe6: PushEmpty(bool)
0xe7: Call2 0x855

0xe8: Pop(0)
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: @ lshStopAnimation()
0xeb: Pop(0)
0xec: GOTO 0xef

0xed: @ StopAnimation()
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: GOTO 0x9b

0xf1: Return(); Pop(0)

0xf2: PushEmpty(object, object)
0xf3: Push("player") // @poff=156
0xf4: @ FindActor(Stack[-2], Stack[-1])
0xf5: Pop(1)
0xf6: Pop(0); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: Return(); Pop(2)

0xf9: PushEmpty(object, bool, float)
0xfa: Stack[-4] = Stack[-3]
0xfb: Stack[-2] = (bool) 1
0xfc: Stack[-1] = (float) 180.0
0xfd: Call2 0x107

0xfe: Pop(3)
0xff: Return(); Pop(2)

0x100: Stack[-1] = 0
0x101: PushEmpty()
0x102: Stack[-3] = (float) 0.30000001192092896
0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: Stack[-3] = (int) 0
0x106: Return(); Pop(0)

0x107: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x108: PushEmpty()
0x109: Call2 0x1ec

0x10a: Pop(0)
0x10b: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x10c: Push("@GetAttackDistance") // @poff=170
0x10d: Push((int) 1)
0x10e: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=208
0x111: Pop(0)
0x112: Push((int) 50)
0x113: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x114: GOTO 0x116

0x115: Stack[-23] = Stack[-11]
0x116: Push((int) 150)
0x117: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: Stack[-11] = (int) 150
0x11a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x11b: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x11c: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0x11d: Pop(0)
0x11e: Push(Stack[-8])
0x11f: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x120: Push("attack") // @poff=226
0x121: @ PlayGlobalMusic(Stack[-1])
0x122: Pop(1)
0x123: PushEmpty(object)
0x124: Call2 0x762

0x125: Pop(0)
0x126: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x127: Pop(1)
0x128: Push(Stack[-24])
0x129: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12a: Stack[-7] = (bool) 0
0x12b: GOTO 0x12d

0x12c: Stack[-7] = (bool) 1
0x12d: Push((float)400.0)
0x12e: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x12f: PushEmpty(bool)
0x130: Stack[-1] = (bool) 0
0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x133: Call2 0x624

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x136: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Stack[-1] = (bool) 1
0x139: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x13a: PushEmpty()
0x13b: Call2 0x389

0x13c: Pop(0)
0x13d: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=240
0x13e: Pop(0)
0x13f: @ GetPFPosition(Stack[-9])
0x140: Pop(0)
0x141: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x142: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x143: Pop(0); Push(Stack[-6] * Stack[-6]);
0x144: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(bool, object, float, float, bool, bool)
0x147: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x148: Stack[-17] = Stack[-4]
0x149: Stack[-3] = (float) 10000.0
0x14a: Stack[-2] = (bool) 1
0x14b: Stack[-1] = (bool) 0
0x14c: Push(-6, 3); TaskCall(3)
0x14d: Call2 0x39d

0x14e: Pop(-6, 3); TaskReturn
0x14f: Pop(5)
0x150: Pop(1); Push((bool) Stack[-1] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: GOTO 0x1db

0x153: Stack[-7] = (bool) 0
0x154: GOTO 0x1da

0x155: Pop(0); Push(Stack[-23] * Stack[-23]);
0x156: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x158: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=240
0x159: Pop(0)
0x15a: @ CanReachByPF(Stack[-2], Stack[-3])
0x15b: Pop(0)
0x15c: Pop(0); Push((bool) Stack[-2] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(bool, object, float, float, bool, bool)
0x15f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x160: Stack[-17] = Stack[-4]
0x161: Stack[-3] = (float) 10000.0
0x162: Stack[-2] = (bool) 1
0x163: Stack[-1] = (bool) 0
0x164: Push(-6, 3); TaskCall(3)
0x165: Call2 0x39d

0x166: Pop(-6, 3); TaskReturn
0x167: Pop(5)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: GOTO 0x1db

0x16b: Stack[-7] = (bool) 0
0x16c: GOTO 0x12f

0x16d: Pop(0); Push((bool) Stack[-7] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x171: Call2 0x6ba

0x172: Pop(1)
0x173: Push("all") // @poff=138
0x174: Push("attack_on") // @poff=254
0x175: @ PlayAnimation(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: @ WaitForAnimEnd()
0x178: Pop(0)
0x179: PushEmpty()
0x17a: Call2 0x389

0x17b: Pop(0)
0x17c: @ StopAsync()
0x17d: Pop(0)
0x17e: Stack[-7] = (bool) 1
0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181: Call2 0x624

0x182: Pop(1)
0x183: Pop(1); Push((bool) Stack[-1] == 0)
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x1db

0x186: @ rand(Stack[-1])
0x187: Pop(0)
0x188: PushEmpty(bool)
0x189: Stack[-1] = (bool) 1
0x18a: Push((float)0.25)
0x18b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x18c: IF (Stack[-1] == 1) GOTO 0x192; Pop(1)

0x18d: PushEmpty(bool)
0x18e: Call2 0x35e

0x18f: Pop(0)
0x190: IF (Stack[-1] == 1) GOTO 0x192; Pop(1)

0x191: Stack[-1] = (bool) 0
0x192: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x193: @ Face(Stack[-0]T)
0x194: Pop(0)
0x195: PushEmpty()
0x196: Call2 0x390

0x197: Pop(0)
0x198: Push("all") // @poff=138
0x199: Push("attack_stay") // @poff=274
0x19a: @ PlayAnimation(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: PushEmpty(bool, float)
0x19d: Stack[-25] = Stack[-1]
0x19e: Call2 0x2da

0x19f: Pop(2)
0x1a0: @ StopAsync()
0x1a1: Pop(0)
0x1a2: GOTO 0x1d1

0x1a3: @ Face(Stack[-0]T)
0x1a4: Pop(0)
0x1a5: Push("all") // @poff=138
0x1a6: Push("fjump") // @poff=298
0x1a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: @ WaitForAnimEnd()
0x1aa: Pop(0)
0x1ab: PushEmpty()
0x1ac: Call2 0x389

0x1ad: Pop(0)
0x1ae: Push([0.0, 0.0, 0.0])
0x1af: @ SetSpeed(Stack[-1])
0x1b0: Pop(1)
0x1b1: @ Stop()
0x1b2: Pop(0)
0x1b3: @ StopAsync()
0x1b4: Pop(0)
0x1b5: PushEmpty(bool)
0x1b6: Call2 0x35e

0x1b7: Pop(0)
0x1b8: Pop(1); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0x624

0x1bd: Pop(1)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1db

0x1c1: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=240
0x1c2: Pop(0)
0x1c3: @ GetPFPosition(Stack[-9])
0x1c4: Pop(0)
0x1c5: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1c6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1c7: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1c8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1ca: PushEmpty(bool, float)
0x1cb: Stack[-25] = Stack[-1]
0x1cc: Call2 0x236

0x1cd: Pop(1)
0x1ce: Pop(1); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: GOTO 0x1db

0x1d1: GOTO 0x1da

0x1d2: PushEmpty(bool, float)
0x1d3: Stack[-25] = Stack[-1]
0x1d4: Call2 0x236

0x1d5: Pop(1)
0x1d6: Pop(1); Push((bool) Stack[-1] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: GOTO 0x1db

0x1d9: Stack[-7] = (bool) 1
0x1da: GOTO 0x12f

0x1db: @ WaitForAnimEnd()
0x1dc: Pop(0)
0x1dd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Return(); Pop(22)

0x1e0: Push("all") // @poff=138
0x1e1: Push("attack_off") // @poff=310
0x1e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e3: Pop(2)
0x1e4: @ WaitForAnimEnd()
0x1e5: Pop(0)
0x1e6: Push(Stack[-8])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: Push((float)2.0)
0x1e9: @ Sleep(Stack[-1])
0x1ea: Pop(1)
0x1eb: Return(); Pop(22)

0x1ec: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1ed: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1ee: Push("all") // @poff=138
0x1ef: Push("attack_begin") // @poff=332
0x1f0: Push((int) 1)
0x1f1: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x1f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f3: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Pop(0); Push((bool) Stack[-3] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: GOTO 0x1fb

0x1f8: Push((int) 1)
0x1f9: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1fa: GOTO 0x1ee

0x1fb: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1fc: Push("attack") // @poff=226
0x1fd: Push((int) 1)
0x1fe: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x1ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x200: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x201: Pop(1)
0x202: Pop(0); Push((bool) Stack[-2] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x208

0x205: Push((int) 1)
0x206: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x207: GOTO 0x1fc

0x208: Push("all") // @poff=138
0x209: Push("bjump") // @poff=358
0x20a: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: Push(CvectorIndex(Stack[-1], 2))
0x20d: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x20e: Return(); Pop(6)

0x20f: PushEmpty(object, float, float, object, float, float)
0x210: Push((float)0.8999999761581421)
0x211: Pop(1); Push(Stack[-9] * Stack[-1]);
0x212: @ GetVictim(Stack[-1], Stack[-4])
0x213: Pop(1)
0x214: @ ReportAttack(Stack[-0]T)
0x215: Pop(0)
0x216: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x217: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x218: PushEmpty(float, object, int)
0x219: Stack[-6] = Stack[-2]
0x21a: Stack[-10] = Stack[-1]
0x21b: Call2 0x101

0x21c: Stack[-3] = Stack[-5]
0x21d: Pop(3)
0x21e: PushEmpty(float, object, float, int)
0x21f: Stack[-7] = Stack[-3]
0x220: Stack[-6] = Stack[-2]
0x221: PushEmpty(int, object, int)
0x222: Stack[-10] = Stack[-2]
0x223: Stack[-14] = Stack[-1]
0x224: Call2 0x104

0x225: Stack[-3] = Stack[-4]
0x226: Pop(3)
0x227: Call2 0x5b2

0x228: Stack[-4] = Stack[-5]
0x229: Pop(4)
0x22a: PushEmpty(int)
0x22b: Call2 0x38e

0x22c: Pop(0)
0x22d: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x22e: Pop(1)
0x22f: PushEmpty(object, float)
0x230: Stack[-5] = Stack[-2]
0x231: Stack[-3] = Stack[-1]
0x232: Call2 0x395

0x233: Pop(2)
0x234: Return(); Pop(6)

0x235: Stack[-3] = 0
0x236: PushEmpty(int, bool, int, string, int, bool, int, string)
0x237: PushEmpty()
0x238: Call2 0x389

0x239: Pop(0)
0x23a: @ irand(Stack[-4], Stack[-1]T)
0x23b: Pop(0)
0x23c: Push((int) 1)
0x23d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x23e: @ Face(Stack[-0]T)
0x23f: Pop(0)
0x240: Push((bool) 1)
0x241: @ SetAttackState(Stack[-1])
0x242: Pop(1)
0x243: PushEmpty()
0x244: Call2 0x7d0

0x245: Pop(0)
0x246: Push("all") // @poff=138
0x247: Push("attack_begin") // @poff=332
0x248: Pop(1); Push(Stack[-1] + Stack[-6]);
0x249: @ PlayAnimation(Stack[-2], Stack[-1])
0x24a: Pop(2)
0x24b: @ WaitForAnimEnd()
0x24c: Pop(0)
0x24d: PushEmpty()
0x24e: Call2 0x369

0x24f: Pop(0)
0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call2 0x624

0x253: Pop(1)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x256: @ StopAsync()
0x257: Pop(0)
0x258: Stack[-10] = (bool) 0
0x259: Return(); Pop(8)

0x25a: PushEmpty(float, int)
0x25b: Stack[-11] = Stack[-2]
0x25c: Stack[-6] = Stack[-1]
0x25d: Call2 0x20f

0x25e: Pop(2)
0x25f: Push("all") // @poff=138
0x260: Push("attack_middle") // @poff=370
0x261: Pop(1); Push(Stack[-1] + Stack[-6]);
0x262: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: Push(Stack[-3])
0x265: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x266: PushEmpty()
0x267: Call2 0x7d0

0x268: Pop(0)
0x269: Push("all") // @poff=138
0x26a: Push("attack_middle") // @poff=370
0x26b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: @ WaitForAnimEnd()
0x26f: Pop(0)
0x270: PushEmpty()
0x271: Call2 0x389

0x272: Pop(0)
0x273: PushEmpty(bool, object)
0x274: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x275: Call2 0x624

0x276: Pop(1)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x279: @ StopAsync()
0x27a: Pop(0)
0x27b: Stack[-10] = (bool) 0
0x27c: Return(); Pop(8)

0x27d: PushEmpty(float, int)
0x27e: Stack[-11] = Stack[-2]
0x27f: Stack[-6] = Stack[-1]
0x280: Call2 0x20f

0x281: Pop(2)
0x282: Stack[-2] = (int) 1
0x283: Push("attack_middle") // @poff=370
0x284: Pop(1); Push(Stack[-1] + Stack[-5]);
0x285: Push("_") // @poff=398
0x286: Pop(2); Push(Stack[-2] + Stack[-1]);
0x287: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x288: Push("all") // @poff=138
0x289: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x28a: Pop(1)
0x28b: Pop(0); Push((bool) Stack[-3] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x2ab

0x28e: PushEmpty()
0x28f: Call2 0x7d0

0x290: Pop(0)
0x291: Push("all") // @poff=138
0x292: @ PlayAnimation(Stack[-1], Stack[-2])
0x293: Pop(1)
0x294: @ WaitForAnimEnd()
0x295: Pop(0)
0x296: PushEmpty()
0x297: Call2 0x389

0x298: Pop(0)
0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0x624

0x29c: Pop(1)
0x29d: Pop(1); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29f: @ StopAsync()
0x2a0: Pop(0)
0x2a1: Stack[-10] = (bool) 0
0x2a2: Return(); Pop(8)

0x2a3: PushEmpty(float, int)
0x2a4: Stack[-11] = Stack[-2]
0x2a5: Stack[-6] = Stack[-1]
0x2a6: Call2 0x20f

0x2a7: Pop(2)
0x2a8: Push((int) 1)
0x2a9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2aa: GOTO 0x283

0x2ab: Push((bool) 0)
0x2ac: @ SetAttackState(Stack[-1])
0x2ad: Pop(1)
0x2ae: Push("all") // @poff=138
0x2af: Push("attack_end") // @poff=402
0x2b0: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b2: Pop(2)
0x2b3: PushEmpty(bool)
0x2b4: Call2 0x397

0x2b5: Pop(0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b7: PushEmpty(bool, float)
0x2b8: Stack[-1] = (float) 0.75
0x2b9: Call2 0x2bf

0x2ba: Pop(2)
0x2bb: @ StopAsync()
0x2bc: Pop(0)
0x2bd: Stack[-10] = (bool) 1
0x2be: Return(); Pop(8)

0x2bf: PushEmpty(float, bool, float, bool)
0x2c0: @ rand(Stack[-2])
0x2c1: Pop(0)
0x2c2: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2c4: @ IsAnimationPlaying(Stack[-1])
0x2c5: Pop(0)
0x2c6: Pop(0); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2d2

0x2c9: PushEmpty(bool)
0x2ca: Call2 0x321

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: Stack[-6] = (bool) 1
0x2ce: Return(); Pop(4)

0x2cf: @ sync()
0x2d0: Pop(0)
0x2d1: GOTO 0x2c4

0x2d2: GOTO 0x2d8

0x2d3: @ WaitForAnimEnd()
0x2d4: Pop(0)
0x2d5: PushEmpty()
0x2d6: Call2 0x389

0x2d7: Pop(0)
0x2d8: Stack[-6] = (bool) 0
0x2d9: Return(); Pop(4)

0x2da: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2db: @ IsAnimationPlaying(Stack[-5])
0x2dc: Pop(0)
0x2dd: Pop(0); Push((bool) Stack[-5] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x300

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x321

0x2e2: Pop(0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-12] = (bool) 1
0x2e5: Return(); Pop(10)

0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e8: Call2 0x624

0x2e9: Pop(1)
0x2ea: Pop(1); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-12] = (bool) 0
0x2ed: Return(); Pop(10)

0x2ee: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=240
0x2ef: Pop(0)
0x2f0: @ GetPFPosition(Stack[-3])
0x2f1: Pop(0)
0x2f2: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2f3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2f4: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f7: PushEmpty(bool, float)
0x2f8: Stack[-13] = Stack[-1]
0x2f9: Call2 0x236

0x2fa: Pop(2)
0x2fb: Stack[-12] = (bool) 1
0x2fc: Return(); Pop(10)

0x2fd: @ sync()
0x2fe: Pop(0)
0x2ff: GOTO 0x2db

0x300: PushEmpty()
0x301: Call2 0x389

0x302: Pop(0)
0x303: Stack[-12] = (bool) 0
0x304: Return(); Pop(10)

0x305: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call2 0x624

0x309: Pop(1)
0x30a: Pop(1); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-11] = (bool) 0
0x30d: Return(); Pop(10)

0x30e: PushEmpty(bool)
0x30f: Call2 0x35e

0x310: Pop(0)
0x311: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x312: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=240
0x313: Pop(0)
0x314: @ GetPFPosition(Stack[-4])
0x315: Pop(0)
0x316: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x317: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x318: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=208
0x319: Pop(0)
0x31a: Push((int) 50)
0x31b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x31c: Pop(0); Push(Stack[-1] * Stack[-1]);
0x31d: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x31e: Return(); Pop(10)

0x31f: Stack[-11] = (bool) 0
0x320: Return(); Pop(10)

0x321: PushEmpty(bool)
0x322: Stack[-1] = (bool) 0
0x323: PushEmpty(bool)
0x324: Call2 0x305

0x325: Pop(0)
0x326: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x327: PushEmpty(bool)
0x328: Call2 0x331

0x329: Pop(0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Stack[-1] = (bool) 1
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-1] = (bool) 1
0x32e: Return(); Pop(0)

0x32f: Stack[-1] = (bool) 0
0x330: Return(); Pop(0)

0x331: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x332: @ GetScene(Stack[-5])
0x333: Pop(0)
0x334: Stack[-4] = (bool) 0
0x335: PushEmpty(cvector, object)
0x336: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x337: Call2 0x584

0x338: Pop(1)
0x339: Pop(1); Push(( -Stack[-1])
0x33a: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x33b: Pop(1)
0x33c: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: GOTO 0x35b

0x33f: @ Face(Stack[-0]T)
0x340: Pop(0)
0x341: Push("all") // @poff=138
0x342: Push("bjump") // @poff=358
0x343: @ PlayAnimation(Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=240
0x346: Pop(0)
0x347: @ GetPFPosition(Stack[-1])
0x348: Pop(0)
0x349: @ WaitForAnimEnd()
0x34a: Pop(0)
0x34b: PushEmpty()
0x34c: Call2 0x389

0x34d: Pop(0)
0x34e: @ StopAsync()
0x34f: Pop(0)
0x350: Push([0.0, 0.0, 0.0])
0x351: @ SetSpeed(Stack[-1])
0x352: Pop(1)
0x353: Stack[-4] = (bool) 1
0x354: PushEmpty(bool)
0x355: Call2 0x305

0x356: Pop(0)
0x357: Pop(1); Push((bool) Stack[-1] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x35b

0x35a: GOTO 0x335

0x35b: Stack[-4] = Stack[-11]
0x35c: Return(); Pop(10)

0x35d: Stack[-5] = 0
0x35e: PushEmpty(bool, bool)
0x35f: Push("IsAttacking") // @poff=424
0x360: Push((int) 1)
0x361: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x362: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x363: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=448
0x364: Pop(0)
0x365: Stack[-1] = Stack[-3]
0x366: Return(); Pop(2)

0x367: Stack[-3] = (bool) 0
0x368: Return(); Pop(2)

0x369: PushEmpty(float, int, float, int)
0x36a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: Return(); Pop(4)

0x36d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x36e: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36f: Push((int) -1)
0x370: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x371: Push((int) 0)
0x372: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: Return(); Pop(4)

0x375: @ rand(Stack[-2])
0x376: Pop(0)
0x377: PushEmpty(float)
0x378: Call2 0x39b

0x379: Pop(0)
0x37a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x37c: @ irand(Stack[-1], Stack[-2]T)
0x37d: Pop(0)
0x37e: Push((int) 1)
0x37f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x380: Push("attack") // @poff=226
0x381: Pop(1); Push(Stack[-1] + Stack[-2]);
0x382: @ Speak(Stack[-1])
0x383: Pop(1)
0x384: PushEmpty(int)
0x385: Call2 0x399

0x386: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x387: Pop(1)
0x388: Return(); Pop(4)

0x389: PushEmpty(object)
0x38a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38b: Call2 0x7c7

0x38c: Pop(1)
0x38d: Return(); Pop(0)

0x38e: Stack[-1] = (int) 0
0x38f: Return(); Pop(0)

0x390: PushEmpty(string)
0x391: Stack[-1] = "attack_stay" // @poff=274
0x392: Call2 0x739

0x393: Pop(1)
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: Return(); Pop(0)

0x397: Stack[-1] = (bool) 1
0x398: Return(); Pop(0)

0x399: Stack[-1] = (int) 1
0x39a: Return(); Pop(0)

0x39b: Stack[-1] = (float) 0.5
0x39c: Return(); Pop(0)

0x39d: PushEmpty(bool, bool, bool, bool)
0x39e: PushEmpty(object)
0x39f: Stack[-10] = Stack[-1]
0x3a0: Call2 0x7c7

0x3a1: Pop(1)
0x3a2: Push((int) 1)
0x3a3: Push((int) 5)
0x3a4: @ SetTimer(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: @ CanSee(Stack[-2], Stack[-9])
0x3a7: Pop(0)
0x3a8: Push(Stack[-2])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3aa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3ab: PushEmpty(object)
0x3ac: Stack[-10] = Stack[-1]
0x3ad: Call2 0x727

0x3ae: Pop(1)
0x3af: GOTO 0x3b1

0x3b0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-11] = Stack[-1]
0x3b3: Call2 0x58b

0x3b4: Pop(1)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b6: PushEmpty(object)
0x3b7: Call2 0x762

0x3b8: Pop(0)
0x3b9: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3ba: Pop(1)
0x3bb: PushEmpty(bool, object, float, float, bool, bool)
0x3bc: Stack[-15] = Stack[-5]
0x3bd: Stack[-14] = Stack[-4]
0x3be: Stack[-13] = Stack[-3]
0x3bf: Stack[-12] = Stack[-2]
0x3c0: Stack[-11] = Stack[-1]
0x3c1: Call2 0x406

0x3c2: Stack[-6] = Stack[-7]
0x3c3: Pop(6)
0x3c4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c6: Push("head") // @poff=460
0x3c7: @ UnlookAsync(Stack[-1])
0x3c8: Pop(1)
0x3c9: Push((int) 1)
0x3ca: @ KillTimer(Stack[-1])
0x3cb: Pop(1)
0x3cc: Stack[-1] = Stack[-10]
0x3cd: Return(); Pop(4)

0x3ce: PushEmpty()
0x3cf: Push((int) 1)
0x3d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d2: PushEmpty(object)
0x3d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d4: Call2 0x7c7

0x3d5: Pop(1)
0x3d6: GOTO 0x3db

0x3d7: PushEmpty(int)
0x3d8: Stack[-2] = Stack[-1]
0x3d9: Call2 0x46c

0x3da: Pop(1)
0x3db: Return(); Pop(0)

0x3dc: Push((int) 1)
0x3dd: @ KillTimer(Stack[-1])
0x3de: Pop(1)
0x3df: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e2: Push("head") // @poff=460
0x3e3: @ UnlookAsync(Stack[-1])
0x3e4: Pop(1)
0x3e5: PushEmpty()
0x3e6: Call2 0x482

0x3e7: Pop(0)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: PushEmpty(bool)
0x3eb: Stack[-1] = (bool) 0
0x3ec: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ee: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3f0: Stack[-1] = (bool) 1
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3f3: PushEmpty(object)
0x3f4: Stack[-2] = Stack[-1]
0x3f5: Call2 0x727

0x3f6: Pop(1)
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty()
0x3f9: PushEmpty(bool)
0x3fa: Stack[-1] = (bool) 0
0x3fb: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3fc: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: Stack[-1] = (bool) 1
0x400: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x401: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x402: Push("head") // @poff=460
0x403: @ UnlookAsync(Stack[-1])
0x404: Pop(1)
0x405: Return(); Pop(0)

0x406: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x407: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x408: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x409: Stack[-17] = Stack[-7]
0x40a: PushEmpty(bool, object)
0x40b: Stack[-23] = Stack[-1]
0x40c: Call2 0x492

0x40d: Pop(1)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-22] = (bool) 0
0x411: Return(); Pop(16)

0x412: @@ GetPosition(Stack[-5]); Obj=21 // @poff=470
0x413: Pop(0)
0x414: @ GetPosition(Stack[-4])
0x415: Pop(0)
0x416: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x417: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x418: PushEmpty(bool)
0x419: Stack[-1] = (bool) 0
0x41a: Push((int) 0)
0x41b: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41d: Pop(0); Push(Stack[-20] * Stack[-20]);
0x41e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: Stack[-1] = (bool) 1
0x421: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x422: @ Stop()
0x423: Pop(0)
0x424: Stack[-22] = (bool) 0
0x425: Return(); Pop(16)

0x426: Pop(0); Push(Stack[-20] * Stack[-20]);
0x427: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x429: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=240
0x42a: Pop(0)
0x42b: @ FindPathTo(Stack[-1], Stack[-5])
0x42c: Pop(0)
0x42d: Pop(0); Push(( Stack[-1] != 0 )
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-1] = Stack[-6]
0x430: Stack[-1] = 0
0x431: Pop(0); Push(( Stack[-6] != 0 )
0x432: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x433: Push(Stack[-7])
0x434: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x435: Stack[-7] = (bool) 0
0x436: @ RotatePath(Stack[-6], Stack[-8])
0x437: Pop(0)
0x438: Pop(0); Push((bool) Stack[-8] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: GOTO 0x46a

0x43b: Push((int) 0)
0x43c: Push((float)0.30000001192092896)
0x43d: @ SetTimer(Stack[-2], Stack[-1])
0x43e: Pop(2)
0x43f: PushEmpty(string)
0x440: Call2 0x499

0x441: Pop(0)
0x442: PushEmpty(string)
0x443: Call2 0x49b

0x444: Pop(0)
0x445: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x446: Pop(2)
0x447: Pop(0); Push((bool) Stack[-8] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x449: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44a: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44b: Stack[-6] = 0
0x44c: GOTO 0x46a

0x44d: GOTO 0x44f

0x44e: GOTO 0x469

0x44f: GOTO 0x451

0x450: Stack[-6] = 0
0x451: GOTO 0x462

0x452: Push((int) 0)
0x453: @ KillTimer(Stack[-1])
0x454: Pop(1)
0x455: Push((float)0.5)
0x456: @ Sleep(Stack[-1], Stack[-9])
0x457: Pop(1)
0x458: Pop(0); Push((bool) Stack[-8] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-6] = 0
0x45d: GOTO 0x46a

0x45e: Push((int) 0)
0x45f: Push((float)0.30000001192092896)
0x460: @ SetTimer(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: Stack[-1] = 0
0x463: GOTO 0x468

0x464: Push((int) 0)
0x465: @ KillTimer(Stack[-1])
0x466: Pop(1)
0x467: GOTO 0x46a

0x468: Stack[-6] = 0
0x469: GOTO 0x40a

0x46a: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x46b: Return(); Pop(16)

0x46c: PushEmpty()
0x46d: Push((int) 0)
0x46e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: Return(); Pop(0)

0x471: PushEmpty(bool, object)
0x472: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x473: Call2 0x492

0x474: Pop(1)
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x478: Push((int) 0)
0x479: @ KillTimer(Stack[-1])
0x47a: Pop(1)
0x47b: @ Stop()
0x47c: Pop(0)
0x47d: Return(); Pop(0)

0x47e: PushEmpty()
0x47f: @ RequestClearPath(Stack[-1])
0x480: Pop(0)
0x481: Return(); Pop(0)

0x482: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x483: Push((int) 0)
0x484: @ KillTimer(Stack[-1])
0x485: Pop(1)
0x486: @ Stop()
0x487: Pop(0)
0x488: Return(); Pop(0)

0x489: PushEmpty()
0x48a: PushEmpty()
0x48b: Call2 0x3dc

0x48c: Pop(0)
0x48d: PushEmpty(object)
0x48e: Stack[-2] = Stack[-1]
0x48f: Call2 0x847

0x490: Pop(1)
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: PushEmpty(bool, object)
0x494: Stack[-3] = Stack[-1]
0x495: Call2 0x624

0x496: Stack[-2] = Stack[-4]
0x497: Pop(2)
0x498: Return(); Pop(0)

0x499: Stack[-1] = "walk" // @poff=482
0x49a: Return(); Pop(0)

0x49b: Stack[-1] = "run" // @poff=492
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: PushEmpty(bool, string, string)
0x49f: Stack[-2] = "quest_b9_01" // @poff=500
0x4a0: Stack[-1] = "doberman_dead" // @poff=524
0x4a1: Call2 0x7bb

0x4a2: Pop(3)
0x4a3: PushEmpty(object)
0x4a4: Stack[-2] = Stack[-1]
0x4a5: Call2 0x4ce

0x4a6: Pop(1)
0x4a7: Push((int) 50)
0x4a8: Push((int) 40)
0x4a9: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x4aa: Pop(2)
0x4ab: PushEmpty()
0x4ac: Call2 0x810

0x4ad: Pop(0)
0x4ae: PushEmpty(bool, object)
0x4af: Stack[-3] = Stack[-1]
0x4b0: Call2 0x58b

0x4b1: Pop(1)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b3: PushEmpty(bool, object, float)
0x4b4: Stack[-4] = Stack[-2]
0x4b5: Stack[-1] = (float) -0.029999999329447746
0x4b6: Call2 0x784

0x4b7: Pop(3)
0x4b8: @ Hold()
0x4b9: Pop(0)
0x4ba: GOTO 0x4b8

0x4bb: Return(); Pop(0)

0x4bc: PushEmpty(bool, bool)
0x4bd: @ IsOverrideActive(Stack[-1])
0x4be: Pop(0)
0x4bf: Pop(0); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c1: PushEmpty(object)
0x4c2: Stack[-4] = Stack[-1]
0x4c3: Call2 0x7f2

0x4c4: Pop(1)
0x4c5: Return(); Pop(2)

0x4c6: PushEmpty(object)
0x4c7: Call2 0x762

0x4c8: Pop(0)
0x4c9: @ RemoveActor(Stack[-1])
0x4ca: Pop(1)
0x4cb: @ Hold()
0x4cc: Pop(0)
0x4cd: Return(); Pop(0)

0x4ce: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4cf: Pop(0); PushNull((bool) Stack[-21] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d1: PushEmpty(string)
0x4d2: Stack[-1] = "fdie" // @poff=552
0x4d3: Call2 0x529

0x4d4: Pop(1)
0x4d5: GOTO 0x528

0x4d6: @@ GetPosition(Stack[-10]); Obj=21 // @poff=470
0x4d7: Pop(0)
0x4d8: @ GetPosition(Stack[-9])
0x4d9: Pop(0)
0x4da: @ GetDirection(Stack[-8])
0x4db: Pop(0)
0x4dc: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4dd: Push(CvectorIndex(Stack[-7], 0))
0x4de: Push(CvectorIndex(Stack[-9], 0))
0x4df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e0: Push(CvectorIndex(Stack[-8], 2))
0x4e1: Push(CvectorIndex(Stack[-10], 2))
0x4e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e4: Push((int) 0)
0x4e5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-6] = "fdie" // @poff=552
0x4e8: GOTO 0x4ea

0x4e9: Stack[-6] = "bdie" // @poff=562
0x4ea: @ RemoveRTEnvelope()
0x4eb: Pop(0)
0x4ec: @ SetDeathState()
0x4ed: Pop(0)
0x4ee: @ Stop()
0x4ef: Pop(0)
0x4f0: @ StopAsync()
0x4f1: Pop(0)
0x4f2: Stack[-21] = Stack[-5]
0x4f3: Push("GetScriptProperty") // @poff=572
0x4f4: Push((int) 2)
0x4f5: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4f6: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f7: Push("Owner") // @poff=608
0x4f8: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=620
0x4f9: Pop(1)
0x4fa: Push(Stack[-4])
0x4fb: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fc: Push("Owner") // @poff=608
0x4fd: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=638
0x4fe: Pop(1)
0x4ff: Pop(0); PushNull((bool) Stack[-5] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: Stack[-21] = Stack[-5]
0x502: Push("@GetEyesHeight") // @poff=656
0x503: Push((int) 1)
0x504: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x505: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x506: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=686
0x507: Pop(0)
0x508: Stack[-1] = [0.0, 0.0, 0.0]
0x509: Push(CvectorIndex(Stack[-1], 1))
0x50a: Stack[-3] = Stack[-1]
0x50b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x50c: Push("head") // @poff=460
0x50d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x50e: Pop(1)
0x50f: Stack[-3] = (bool) 1
0x510: GOTO 0x512

0x511: Stack[-3] = (bool) 0
0x512: PushEmpty(string)
0x513: Stack[-7] = Stack[-1]
0x514: Call2 0x739

0x515: Pop(1)
0x516: Push("all") // @poff=138
0x517: @ PlayAnimation(Stack[-1], Stack[-7])
0x518: Pop(1)
0x519: @ WaitForAnimEnd()
0x51a: Pop(0)
0x51b: Push(Stack[-3])
0x51c: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x51d: @ StopAsync()
0x51e: Pop(0)
0x51f: Push("head") // @poff=460
0x520: @ UnlookAsync(Stack[-1])
0x521: Pop(1)
0x522: Push("all") // @poff=138
0x523: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x524: Pop(1)
0x525: @ RemoveEnvelope()
0x526: Pop(0)
0x527: Stack[-5] = 0
0x528: Return(); Pop(20)

0x529: PushEmpty()
0x52a: @ RemoveRTEnvelope()
0x52b: Pop(0)
0x52c: @ SetDeathState()
0x52d: Pop(0)
0x52e: @ Stop()
0x52f: Pop(0)
0x530: @ StopAsync()
0x531: Pop(0)
0x532: @ StopSecondaryAnimation()
0x533: Pop(0)
0x534: PushEmpty(string)
0x535: Stack[-2] = Stack[-1]
0x536: Call2 0x739

0x537: Pop(1)
0x538: Push("all") // @poff=138
0x539: @ PlayAnimation(Stack[-1], Stack[-2])
0x53a: Pop(1)
0x53b: @ WaitForAnimEnd()
0x53c: Pop(0)
0x53d: Push("all") // @poff=138
0x53e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x53f: Pop(1)
0x540: @ RemoveEnvelope()
0x541: Pop(0)
0x542: Return(); Pop(0)

0x543: PushEmpty()
0x544: Return(); Pop(0)

0x545: PushEmpty()
0x546: Return(); Pop(0)

0x547: PushEmpty()
0x548: Return(); Pop(0)

0x549: PushEmpty()
0x54a: PushEmpty(int, object)
0x54b: Stack[-3] = Stack[-1]
0x54c: Push(-2, 1); TaskCall(0)
0x54d: Call2 0x0

0x54e: Pop(-2, 1); TaskReturn
0x54f: Pop(2)
0x550: Return(); Pop(0)

0x551: @ Hold()
0x552: Pop(0)
0x553: GOTO 0x551

0x554: Return(); Pop(0)

0x555: PushEmpty()
0x556: PushEmpty(bool)
0x557: Call2 0x55f

0x558: Pop(0)
0x559: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55a: PushEmpty(object)
0x55b: Stack[-2] = Stack[-1]
0x55c: Call2 0x549

0x55d: Pop(1)
0x55e: Return(); Pop(0)

0x55f: Stack[-1] = (bool) 1
0x560: Return(); Pop(0)

0x561: PushEmpty(bool, bool)
0x562: @ IsPlayerActor(Stack[-3], Stack[-1])
0x563: Pop(0)
0x564: Push(Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x566: PushEmpty(bool, string, string)
0x567: Stack[-2] = "quest_b9_01" // @poff=500
0x568: Stack[-1] = "factory_fight" // @poff=700
0x569: Call2 0x7bb

0x56a: Pop(3)
0x56b: Return(); Pop(2)

0x56c: PushEmpty()
0x56d: Push("attack") // @poff=226
0x56e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x570: PushEmpty()
0x571: Push(-0, 6); TaskCall(2)
0x572: Call2 0xf2

0x573: Pop(-0, 6); TaskReturn
0x574: Pop(0)
0x575: Return(); Pop(0)

0x576: PushEmpty()
0x577: Push((int) 2)
0x578: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57a: Stack[-2] = "fire" // @poff=728
0x57b: Return(); Pop(0)

0x57c: GOTO 0x582

0x57d: Push((int) 1)
0x57e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x580: Stack[-2] = "bullet" // @poff=738
0x581: Return(); Pop(0)

0x582: Stack[-2] = "phys" // @poff=752
0x583: Return(); Pop(0)

0x584: PushEmpty(cvector, cvector, cvector, cvector)
0x585: @ GetPosition(Stack[-2])
0x586: Pop(0)
0x587: @@ GetPosition(Stack[-1]); Obj=5 // @poff=470
0x588: Pop(0)
0x589: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x58a: Return(); Pop(4)

0x58b: PushEmpty(bool, bool)
0x58c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x58d: Pop(0)
0x58e: Stack[-1] = Stack[-4]
0x58f: Return(); Pop(2)

0x590: PushEmpty(bool, bool)
0x591: Push("HasProperty") // @poff=762
0x592: Push((int) 2)
0x593: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x594: Pop(1); Push((bool) Stack[-1] == 0)
0x595: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x596: Stack[-5] = (bool) 0
0x597: Return(); Pop(2)

0x598: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=786
0x599: Pop(0)
0x59a: Stack[-1] = Stack[-5]
0x59b: Return(); Pop(2)

0x59c: PushEmpty(float, float)
0x59d: PushEmpty(bool, object, string)
0x59e: Stack[-10] = Stack[-2]
0x59f: Stack[-9] = Stack[-1]
0x5a0: Call2 0x590

0x5a1: Pop(2)
0x5a2: Pop(1); Push((bool) Stack[-1] == 0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-8] = (bool) 0
0x5a5: Return(); Pop(2)

0x5a6: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=798
0x5a7: Pop(0)
0x5a8: PushEmpty(float, float, float, float)
0x5a9: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x5aa: Stack[-8] = Stack[-2]
0x5ab: Stack[-7] = Stack[-1]
0x5ac: Call2 0x779

0x5ad: Pop(3)
0x5ae: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=810
0x5af: Pop(1)
0x5b0: Stack[-8] = (bool) 1
0x5b1: Return(); Pop(2)

0x5b2: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5b3: PushEmpty(bool, object, string)
0x5b4: Stack[-18] = Stack[-2]
0x5b5: Stack[-1] = "health" // @poff=822
0x5b6: Call2 0x590

0x5b7: Pop(2)
0x5b8: Pop(1); Push((bool) Stack[-1] == 0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: Stack[-16] = (float) 0.0
0x5bb: Return(); Pop(12)

0x5bc: PushEmpty(bool, object, string)
0x5bd: Stack[-18] = Stack[-2]
0x5be: Stack[-1] = "armor" // @poff=836
0x5bf: Call2 0x590

0x5c0: Pop(2)
0x5c1: Pop(1); Push((bool) Stack[-1] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c3: Stack[-6] = (int) 0
0x5c4: GOTO 0x5c8

0x5c5: Push("armor") // @poff=836
0x5c6: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=798
0x5c7: Pop(1)
0x5c8: Push("armor_") // @poff=848
0x5c9: PushEmpty(string, int)
0x5ca: Stack[-16] = Stack[-1]
0x5cb: Call2 0x576

0x5cc: Pop(1)
0x5cd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5ce: PushEmpty(bool, object, string)
0x5cf: Stack[-18] = Stack[-2]
0x5d0: Stack[-8] = Stack[-1]
0x5d1: Call2 0x590

0x5d2: Pop(2)
0x5d3: Pop(1); Push((bool) Stack[-1] == 0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d5: Stack[-4] = (int) 0
0x5d6: GOTO 0x5d9

0x5d7: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=798
0x5d8: Pop(0)
0x5d9: PushEmpty(float, float, float)
0x5da: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5db: Push((float)100.0)
0x5dc: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5dd: Stack[-1] = (int) 1
0x5de: Call2 0x772

0x5df: Stack[-3] = Stack[-6]
0x5e0: Pop(3)
0x5e1: Push("health") // @poff=822
0x5e2: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=798
0x5e3: Pop(1)
0x5e4: Push((int) 1)
0x5e5: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5e6: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5e7: Push("health") // @poff=822
0x5e8: PushEmpty(float, float, float, float)
0x5e9: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5ea: Stack[-2] = (int) 0
0x5eb: Stack[-1] = (int) 1
0x5ec: Call2 0x779

0x5ed: Pop(3)
0x5ee: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=810
0x5ef: Pop(2)
0x5f0: PushEmpty(bool, object)
0x5f1: Stack[-17] = Stack[-1]
0x5f2: Call2 0x58b

0x5f3: Pop(1)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f5: PushEmpty(float)
0x5f6: Stack[-1] = -Stack[-2]; Pop(0);
0x5f7: Call2 0x7a7

0x5f8: Pop(1)
0x5f9: Stack[-1] = Stack[-16]
0x5fa: Return(); Pop(12)

0x5fb: PushEmpty(bool, bool)
0x5fc: @@ IsDead(Stack[-1]); Obj=3 // @poff=862
0x5fd: Pop(0)
0x5fe: Stack[-1] = Stack[-4]
0x5ff: Return(); Pop(2)

0x600: PushEmpty(object, object, object, object)
0x601: Pop(0); PushNull((bool) Stack[-5] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-6] = (bool) 0
0x604: Return(); Pop(4)

0x605: PushEmpty(bool)
0x606: Stack[-1] = (bool) 0
0x607: Push("IsDead") // @poff=869
0x608: Push((int) 1)
0x609: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x60a: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60b: PushEmpty(bool, object)
0x60c: Stack[-8] = Stack[-1]
0x60d: Call2 0x5fb

0x60e: Pop(1)
0x60f: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x610: Stack[-1] = (bool) 1
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: Stack[-6] = (bool) 0
0x613: Return(); Pop(4)

0x614: @ GetScene(Stack[-2])
0x615: Pop(0)
0x616: Pop(0); PushNull((bool) Stack[-2] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x618: Stack[-6] = (bool) 0
0x619: Return(); Pop(4)

0x61a: @@ GetScene(Stack[-1]); Obj=5 // @poff=883
0x61b: Pop(0)
0x61c: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61e: Stack[-6] = (bool) 0
0x61f: Return(); Pop(4)

0x620: Stack[-6] = (bool) 1
0x621: Return(); Pop(4)

0x622: Stack[-1] = 0
0x623: Stack[-2] = 0
0x624: PushEmpty(int, int)
0x625: PushEmpty(bool, object)
0x626: Stack[-5] = Stack[-1]
0x627: Call2 0x600

0x628: Pop(1)
0x629: Pop(1); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: Stack[-4] = (bool) 0
0x62c: Return(); Pop(2)

0x62d: PushEmpty(bool, object, string)
0x62e: Stack[-6] = Stack[-2]
0x62f: Stack[-1] = "noaccess" // @poff=892
0x630: Call2 0x590

0x631: Pop(2)
0x632: Pop(1); Push((bool) Stack[-1] == 0)
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-4] = (bool) 1
0x635: Return(); Pop(2)

0x636: Push("noaccess") // @poff=892
0x637: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=798
0x638: Pop(1)
0x639: Push((int) 0)
0x63a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x63b: Return(); Pop(2)

0x63c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x63d: Pop(0); PushNull((bool) Stack[-15] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: Return(); Pop(14)

0x640: @ IsDead(Stack[-7])
0x641: Pop(0)
0x642: Push(Stack[-7])
0x643: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x644: Return(); Pop(14)

0x645: @ GetSecondaryAnimationType(Stack[-6])
0x646: Pop(0)
0x647: Push((int) 0)
0x648: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: Return(); Pop(14)

0x64b: @@ GetPosition(Stack[-5]); Obj=15 // @poff=470
0x64c: Pop(0)
0x64d: @ GetPosition(Stack[-4])
0x64e: Pop(0)
0x64f: @ GetDirection(Stack[-3])
0x650: Pop(0)
0x651: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x652: Push(CvectorIndex(Stack[-2], 0))
0x653: Push(CvectorIndex(Stack[-4], 0))
0x654: Pop(2); Push(Stack[-2] * Stack[-1]);
0x655: Push(CvectorIndex(Stack[-3], 2))
0x656: Push(CvectorIndex(Stack[-5], 2))
0x657: Pop(2); Push(Stack[-2] * Stack[-1]);
0x658: Pop(2); Push(Stack[-2] + Stack[-1]);
0x659: Push((int) 0)
0x65a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65c: Stack[-1] = "fhit" // @poff=910
0x65d: GOTO 0x65f

0x65e: Stack[-1] = "bhit" // @poff=920
0x65f: Push("hit_react") // @poff=930
0x660: Push("1") // @poff=520
0x661: Pop(1); Push(Stack[-3] + Stack[-1]);
0x662: Push("2") // @poff=950
0x663: Pop(1); Push(Stack[-4] + Stack[-1]);
0x664: Push((int) -10)
0x665: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(4)
0x667: Return(); Pop(14)

0x668: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x669: PushEmpty(bool)
0x66a: Stack[-1] = (bool) 0
0x66b: PushEmpty(bool)
0x66c: Stack[-1] = (bool) 0
0x66d: Push(Stack[-23])
0x66e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66f: Push((int) 4)
0x670: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: Stack[-1] = (bool) 1
0x673: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x674: Push((int) 5)
0x675: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: Stack[-1] = (bool) 1
0x678: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x679: PushEmpty(cvector, cvector)
0x67a: PushEmpty(cvector, object)
0x67b: Stack[-25] = Stack[-1]
0x67c: Call2 0x584

0x67d: Stack[-2] = Stack[-3]
0x67e: Pop(2)
0x67f: Call2 0x768

0x680: Stack[-2] = Stack[-11]
0x681: Pop(2)
0x682: @ CreateVectorVector(Stack[-8])
0x683: Pop(0)
0x684: Stack[-7] = (int) 1
0x685: Push("hit") // @poff=912
0x686: Pop(1); Push(Stack[-1] + Stack[-8]);
0x687: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x688: Pop(1)
0x689: Pop(0); Push((bool) Stack[-6] == 0)
0x68a: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68b: GOTO 0x695

0x68c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x68d: Push((float)0.7071067690849304)
0x68e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: @@ add(Stack[-5]); Obj=8 // @poff=954
0x691: Pop(0)
0x692: Push((int) 1)
0x693: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x694: GOTO 0x685

0x695: @@ size(Stack[-3]); Obj=8 // @poff=958
0x696: Pop(0)
0x697: Push(Stack[-3])
0x698: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x699: @ irand(Stack[-2], Stack[-3])
0x69a: Pop(0)
0x69b: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=963
0x69c: Pop(0)
0x69d: PushEmpty(object, int, float, cvector, cvector)
0x69e: Stack[-26] = Stack[-5]
0x69f: Stack[-25] = Stack[-4]
0x6a0: Stack[-24] = Stack[-3]
0x6a1: Stack[-6] = Stack[-2]
0x6a2: Stack[-1] = -Stack[-14]; Pop(0);
0x6a3: Call2 0x6ac

0x6a4: Pop(5)
0x6a5: Return(); Pop(18)

0x6a6: Stack[-8] = 0
0x6a7: PushEmpty(object)
0x6a8: Stack[-22] = Stack[-1]
0x6a9: Call2 0x63c

0x6aa: Pop(1)
0x6ab: Return(); Pop(18)

0x6ac: PushEmpty(object, object, object, object)
0x6ad: @ GetScene(Stack[-2])
0x6ae: Pop(0)
0x6af: Push("scripted") // @poff=967
0x6b0: Push("blood_dir.xml") // @poff=985
0x6b1: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6b2: Pop(2)
0x6b3: PushEmpty(object)
0x6b4: Stack[-10] = Stack[-1]
0x6b5: Call2 0x63c

0x6b6: Pop(1)
0x6b7: Return(); Pop(4)

0x6b8: Stack[-1] = 0
0x6b9: Stack[-2] = 0
0x6ba: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6bb: @@ GetPosition(Stack[-3]); Obj=7 // @poff=470
0x6bc: Pop(0)
0x6bd: @ GetPosition(Stack[-2])
0x6be: Pop(0)
0x6bf: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6c0: Push(CvectorIndex(Stack[-1], 0))
0x6c1: Push(CvectorIndex(Stack[-2], 2))
0x6c2: @ RotateAsync(Stack[-2], Stack[-1])
0x6c3: Pop(2)
0x6c4: Return(); Pop(6)

0x6c5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6c6: @@ GetPosition(Stack[-8]); Obj=20 // @poff=470
0x6c7: Pop(0)
0x6c8: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=686
0x6c9: Pop(0)
0x6ca: Push(CvectorIndex(Stack[-8], 1))
0x6cb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6cc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6cd: @ GetPosition(Stack[-7])
0x6ce: Pop(0)
0x6cf: @ GetEyesHeight(Stack[-9])
0x6d0: Pop(0)
0x6d1: Push(CvectorIndex(Stack[-7], 1))
0x6d2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6d3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6d4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6d5: Push(CvectorIndex(Stack[-6], 1))
0x6d6: Stack[-1] = (int) 0
0x6d7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6d8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x6d9: Pop(1); Push(Sqrt(Stack[-1]))
0x6da: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x6db: Stack[-5] = -Stack[-6]; Pop(0);
0x6dc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x6dd: PushEmpty(cvector, cvector)
0x6de: Push([0.0, 1.0, 0.0])
0x6df: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x6e0: Call2 0x768

0x6e1: Pop(1)
0x6e2: Push((int) 25)
0x6e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e5: Push([0.0, 10.0, 0.0])
0x6e6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x6e7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x6e8: @ IsOverrideActive(Stack[-2])
0x6e9: Pop(0)
0x6ea: Push(Stack[-2])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ec: Stack[-21] = (bool) 0
0x6ed: Return(); Pop(18)

0x6ee: @ StopWorld()
0x6ef: Pop(0)
0x6f0: @ CameraTransit(Stack[-3], Stack[-5])
0x6f1: Pop(0)
0x6f2: Push(CvectorIndex(Stack[-4], 0))
0x6f3: Push(CvectorIndex(Stack[-5], 2))
0x6f4: @ Rotate(Stack[-2], Stack[-1])
0x6f5: Pop(2)
0x6f6: PushEmpty(bool)
0x6f7: Call2 0x855

0x6f8: Pop(0)
0x6f9: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6fa: GOTO 0x703

0x6fb: Push("head") // @poff=460
0x6fc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6fd: Pop(1)
0x6fe: Push(Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x700: Push("head") // @poff=460
0x701: @ LookAsyncCamera(Stack[-1])
0x702: Pop(1)
0x703: @ CameraWaitForPlayFinish()
0x704: Pop(0)
0x705: @ ResumeWorld()
0x706: Pop(0)
0x707: Stack[-21] = (bool) 1
0x708: Return(); Pop(18)

0x709: PushEmpty(bool, bool)
0x70a: @ CameraSwitchToNormal()
0x70b: Pop(0)
0x70c: PushEmpty(bool)
0x70d: Call2 0x855

0x70e: Pop(0)
0x70f: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x710: GOTO 0x719

0x711: Push("head") // @poff=460
0x712: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x713: Pop(1)
0x714: Push(Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x716: Push("head") // @poff=460
0x717: @ UnlookAsync(Stack[-1])
0x718: Pop(1)
0x719: Return(); Pop(2)

0x71a: PushEmpty(float, float, float, float)
0x71b: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x71c: Pop(0)
0x71d: Push((bool) 0)
0x71e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x71f: Pop(1)
0x720: Return(); Pop(4)

0x721: PushEmpty(float, float, float, float)
0x722: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x723: Pop(0)
0x724: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x725: Pop(0)
0x726: Return(); Pop(4)

0x727: PushEmpty(float, cvector, float, cvector)
0x728: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=686
0x729: Pop(0)
0x72a: Stack[-1] = [0.0, 0.0, 0.0]
0x72b: Push(CvectorIndex(Stack[-1], 1))
0x72c: Stack[-3] = Stack[-1]
0x72d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x72e: Push("head") // @poff=460
0x72f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x730: Pop(1)
0x731: Return(); Pop(4)

0x732: PushEmpty(bool)
0x733: Call2 0x855

0x734: Pop(0)
0x735: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x736: @ lshStopSpeech()
0x737: Pop(0)
0x738: Return(); Pop(0)

0x739: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x73a: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x73b: Pop(0)
0x73c: Pop(0); Push((bool) Stack[-8] == 0)
0x73d: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x73e: Stack[-7] = (int) 0
0x73f: Push((int) 1)
0x740: Pop(1); Push(Stack[-8] + Stack[-1]);
0x741: Pop(1); Push(Stack[-18] + Stack[-1]);
0x742: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x743: Pop(1)
0x744: Pop(0); Push((bool) Stack[-6] == 0)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: GOTO 0x74a

0x747: Push((int) 1)
0x748: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x749: GOTO 0x73f

0x74a: Pop(0); Push((bool) Stack[-7] == 0)
0x74b: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74c: Return(); Pop(16)

0x74d: @ irand(Stack[-5], Stack[-7])
0x74e: Pop(0)
0x74f: Push((int) 1)
0x750: Pop(1); Push(Stack[-6] + Stack[-1]);
0x751: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x752: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x753: Pop(0)
0x754: Push(Stack[-4])
0x755: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x756: @ GetEyesHeight(Stack[-3])
0x757: Pop(0)
0x758: @ GetDirection(Stack[-2])
0x759: Pop(0)
0x75a: Push((int) 50)
0x75b: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x75c: Push(CvectorIndex(Stack[-1], 1))
0x75d: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x75e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x75f: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x760: Pop(0)
0x761: Return(); Pop(16)

0x762: PushEmpty(object, object)
0x763: @ self(Stack[-1])
0x764: Pop(0)
0x765: Stack[-1] = Stack[-3]
0x766: Return(); Pop(2)

0x767: Stack[-1] = 0
0x768: PushEmpty(float, float)
0x769: Pop(0); Push(Stack[-3] | Stack[-3]);
0x76a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x76b: Push((float)9.999999974752427e-07)
0x76c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-4] = [0.0, 0.0, 0.0]
0x76f: Return(); Pop(2)

0x770: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x771: Return(); Pop(2)

0x772: PushEmpty()
0x773: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-2] = Stack[-3]
0x776: GOTO 0x778

0x777: Stack[-1] = Stack[-3]
0x778: Return(); Pop(0)

0x779: PushEmpty()
0x77a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x77b: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77c: Stack[-2] = Stack[-4]
0x77d: Return(); Pop(0)

0x77e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x780: Stack[-1] = Stack[-4]
0x781: Return(); Pop(0)

0x782: Stack[-3] = Stack[-4]
0x783: Return(); Pop(0)

0x784: PushEmpty()
0x785: Pop(0); Push((bool) Stack[-2] == 0)
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-3] = (bool) 0
0x788: Return(); Pop(0)

0x789: Push((int) 0)
0x78a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78c: Push((int) 8)
0x78d: @ SendWorldWndMessage(Stack[-1])
0x78e: Pop(1)
0x78f: GOTO 0x799

0x790: Push((int) 0)
0x791: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x793: Push((int) 9)
0x794: @ SendWorldWndMessage(Stack[-1])
0x795: Pop(1)
0x796: GOTO 0x799

0x797: Stack[-3] = (bool) 0
0x798: Return(); Pop(0)

0x799: PushEmpty(float)
0x79a: Stack[-2] = Stack[-1]
0x79b: Call2 0x7b1

0x79c: Pop(1)
0x79d: PushEmpty(bool, object, string, float, float, float)
0x79e: Stack[-8] = Stack[-5]
0x79f: Stack[-4] = "reputation" // @poff=1013
0x7a0: Stack[-7] = Stack[-3]
0x7a1: Stack[-2] = (int) 0
0x7a2: Stack[-1] = (int) 1
0x7a3: Call2 0x59c

0x7a4: Pop(6)
0x7a5: Stack[-3] = (bool) 1
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty(object, object)
0x7a8: @ CreateFloatVector(Stack[-1])
0x7a9: Pop(0)
0x7aa: @@ add(Stack[-3]); Obj=1 // @poff=954
0x7ab: Pop(0)
0x7ac: Push((int) 15)
0x7ad: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7ae: Pop(1)
0x7af: Return(); Pop(2)

0x7b0: Stack[-1] = 0
0x7b1: PushEmpty(object, object)
0x7b2: @ CreateFloatVector(Stack[-1])
0x7b3: Pop(0)
0x7b4: @@ add(Stack[-3]); Obj=1 // @poff=954
0x7b5: Pop(0)
0x7b6: Push((int) 16)
0x7b7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7b8: Pop(1)
0x7b9: Return(); Pop(2)

0x7ba: Stack[-1] = 0
0x7bb: PushEmpty(object, object)
0x7bc: @ FindActor(Stack[-1], Stack[-4])
0x7bd: Pop(0)
0x7be: Pop(0); PushNull((bool) Stack[-1] == 0)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-5] = (bool) 0
0x7c1: Return(); Pop(2)

0x7c2: @ Trigger(Stack[-1], Stack[-3])
0x7c3: Pop(0)
0x7c4: Stack[-5] = (bool) 1
0x7c5: Return(); Pop(2)

0x7c6: Stack[-1] = 0
0x7c7: PushEmpty(bool, bool)
0x7c8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7c9: Pop(0)
0x7ca: Push(Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cc: Push("attack") // @poff=226
0x7cd: @ PlayGlobalMusic(Stack[-1])
0x7ce: Pop(1)
0x7cf: Return(); Pop(2)

0x7d0: PushEmpty(object, object)
0x7d1: @ GetScene(Stack[-1])
0x7d2: Pop(0)
0x7d3: Push("battle") // @poff=1035
0x7d4: PushEmpty(object)
0x7d5: Call2 0x762

0x7d6: Pop(0)
0x7d7: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x7d8: Pop(2)
0x7d9: Return(); Pop(2)

0x7da: Stack[-1] = 0
0x7db: PushEmpty(int, int)
0x7dc: Push("branch") // @poff=1049
0x7dd: @ GetVariable(Stack[-1], Stack[-2])
0x7de: Pop(1)
0x7df: Push((int) 0)
0x7e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e2: Stack[-3] = (int) 1
0x7e3: Return(); Pop(2)

0x7e4: GOTO 0x7ea

0x7e5: Push((int) 1)
0x7e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-3] = (int) 2
0x7e9: Return(); Pop(2)

0x7ea: Stack[-3] = (int) 3
0x7eb: Return(); Pop(2)

0x7ec: PushEmpty(int, int)
0x7ed: Push("branch") // @poff=1049
0x7ee: @ GetVariable(Stack[-1], Stack[-2])
0x7ef: Pop(1)
0x7f0: Stack[-1] = Stack[-3]
0x7f1: Return(); Pop(2)

0x7f2: PushEmpty()
0x7f3: PushEmpty(int)
0x7f4: Call2 0x7ec

0x7f5: Pop(0)
0x7f6: Push((int) 1)
0x7f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f9: @ WorkWithCorpse(Stack[-1])
0x7fa: Pop(0)
0x7fb: GOTO 0x7fe

0x7fc: @ Barter(Stack[-1])
0x7fd: Pop(0)
0x7fe: Return(); Pop(0)

0x7ff: PushEmpty(object, int, bool, object, int, bool)
0x800: @ CreateInvItem(Stack[-3])
0x801: Pop(0)
0x802: @@ SetItemName(Stack[-7]); Obj=3 // @poff=1063
0x803: Pop(0)
0x804: Push("Organ") // @poff=1075
0x805: Push((int) 1)
0x806: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=810
0x807: Pop(2)
0x808: @@ GetItemID(Stack[-2]); Obj=3 // @poff=1087
0x809: Pop(0)
0x80a: Push((int) 0)
0x80b: Push((int) 1)
0x80c: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x80d: Pop(2)
0x80e: Return(); Pop(6)

0x80f: Stack[-3] = 0
0x810: PushEmpty(int)
0x811: Call2 0x7ec

0x812: Pop(0)
0x813: Push((int) 1)
0x814: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x816: Return(); Pop(0)

0x817: PushEmpty(string)
0x818: Stack[-1] = "liver" // @poff=1097
0x819: Call2 0x7ff

0x81a: Pop(1)
0x81b: PushEmpty(string)
0x81c: Stack[-1] = "kidney" // @poff=1109
0x81d: Call2 0x7ff

0x81e: Pop(1)
0x81f: PushEmpty(string)
0x820: Stack[-1] = "heart" // @poff=1123
0x821: Call2 0x7ff

0x822: Pop(1)
0x823: PushEmpty(string)
0x824: Stack[-1] = "blood" // @poff=1135
0x825: Call2 0x7ff

0x826: Pop(1)
0x827: Return(); Pop(0)

0x828: PushEmpty()
0x829: PushEmpty(object, int, float)
0x82a: Stack[-7] = Stack[-3]
0x82b: Stack[-6] = Stack[-2]
0x82c: Stack[-5] = Stack[-1]
0x82d: Call2 0x668

0x82e: Pop(3)
0x82f: Return(); Pop(0)

0x830: PushEmpty()
0x831: PushEmpty(object, int, float, cvector, cvector)
0x832: Stack[-11] = Stack[-5]
0x833: Stack[-10] = Stack[-4]
0x834: Stack[-9] = Stack[-3]
0x835: Stack[-7] = Stack[-2]
0x836: Stack[-6] = Stack[-1]
0x837: Call2 0x6ac

0x838: Pop(5)
0x839: Return(); Pop(0)

0x83a: PushEmpty(float, float)
0x83b: Push("health") // @poff=822
0x83c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x83e: Push("health") // @poff=822
0x83f: @ GetProperty(Stack[-1], Stack[-2])
0x840: Pop(1)
0x841: Push((int) 0)
0x842: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: @ SignalDeath(Stack[-4])
0x845: Pop(0)
0x846: Return(); Pop(2)

0x847: PushEmpty()
0x848: PushEmpty(object)
0x849: Stack[-2] = Stack[-1]
0x84a: Call2 0x857

0x84b: Pop(1)
0x84c: Return(); Pop(0)

0x84d: Stack[-1] = (int) 518097
0x84e: Return(); Pop(0)

0x84f: Stack[-1] = (int) 518096
0x850: Return(); Pop(0)

0x851: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=1147
0x852: Return(); Pop(0)

0x853: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=1187
0x854: Return(); Pop(0)

0x855: Stack[-1] = (bool) 0
0x856: Return(); Pop(0)

0x857: PushEmpty()
0x858: PushEmpty(object)
0x859: Stack[-2] = Stack[-1]
0x85a: Push(-1, 0); TaskCall(4)
0x85b: Call2 0x49d

0x85c: Pop(-1, 0); TaskReturn
0x85d: Pop(1)
0x85e: Return(); Pop(0)

