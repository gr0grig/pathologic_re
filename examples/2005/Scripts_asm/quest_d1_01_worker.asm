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
	W:quest_d1_01
	W:attack
	W:@GetAttackDistance
	A:GetAttackDistance
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
	W:fire
	W:bullet
	W:phys
	W:player
	W:HasProperty
	A:HasProperty
	W:health
	W:armor
	A:GetProperty
	W:armor_
	A:SetProperty
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
	W:battle
	W:branch
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f00640031005f00300031000000610074007400610063006b0000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e6365004765745046506f736974696f6e00610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f006f00660066000000610074007400610063006b005f0062006500670069006e00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c00650000005f000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e670068006500610064000000476574506f736974696f6e00770061006c006b000000720075006e0000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006900720065000000620075006c006c006500740000007000680079007300000070006c0061007900650072000000480061007300500072006f0070006500720074007900000048617350726f7065727479006800650061006c00740068000000610072006d006f007200000047657450726f706572747900610072006d006f0072005f00000053657450726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f00720065006100630074000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c00000062006100740074006c00650000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e0067000000
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
	IsPlayerActor (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
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
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FindActor (2 args)
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
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x124
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xfa Vars = (object)
		EVENT_17 Op = 0x105 Vars = (object)
		EVENT_26 Op = 0x110 Vars = (string)
		EVENT_5 Op = 0x14d Vars = ()
		EVENT_6 Op = 0x152 Vars = ()
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x493 Vars = (int)
		EVENT_1 Op = 0x4ae Vars = (object)
		EVENT_2 Op = 0x4bd Vars = (object)
		EVENT_10 Op = 0x543 Vars = (object)
		EVENT_41 Op = 0x54e Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x571 Vars = (object)
		EVENT_22 Op = 0x5f0 Vars = (object, int, float, float)
		EVENT_16 Op = 0x5f2 Vars = (object, string)
		EVENT_41 Op = 0x5f4 Vars = (object)

Events:
EVENT_22 Op = 0x879 Vars = (object, int, float, float)
EVENT_43 Op = 0x881 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x88b Vars = (object, string)
EVENT_41 Op = 0x898 Vars = (object)
EVENT_6 Op = 0x89e Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x73b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x869

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x867

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x86b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x86d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x843

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
0x41: Call2 0x77f

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
0x54: Push((int) 521496)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 521497)
0x5a: Push((int) 34596)
0x5b: Push((int) 22658)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 533084)
0x5f: Push((int) -1)
0x60: Push((int) 34595)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x86f

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x790

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
0x86: Call2 0x86f

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
0x96: Call2 0x797

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x7a8

0x9f: Pop(0)
0xa0: Push((int) 22775)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x83c

0xa7: Pop(2)
0xa8: Push((int) 22657)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 521496)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 521497)
0xb5: Push((int) 34596)
0xb6: Push((int) 22658)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: Push((int) 533084)
0xba: Push((int) -1)
0xbb: Push((int) 34595)
0xbc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Push((int) 34596)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral" // @poff=89
0xc4: Call2 0x84

0xc5: Pop(1)
0xc6: Push((int) 533085)
0xc7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc8: Pop(1)
0xc9: @@@ ClearReplies(); Obj=0 // @poff=116
0xca: Pop(0)
0xcb: Push((int) 533086)
0xcc: Push((int) 34598)
0xcd: Push((int) 34597)
0xce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcf: Pop(3)
0xd0: Push((int) 533088)
0xd1: Push((int) -1)
0xd2: Push((int) 34599)
0xd3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Push((int) 34598)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral" // @poff=89
0xdb: Call2 0x84

0xdc: Pop(1)
0xdd: Push((int) 533087)
0xde: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdf: Pop(1)
0xe0: @@@ ClearReplies(); Obj=0 // @poff=116
0xe1: Pop(0)
0xe2: Push((int) 521608)
0xe3: Push((int) -1)
0xe4: Push((int) 22775)
0xe5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe6: Pop(3)
0xe7: Push((int) 533089)
0xe8: Push((int) -1)
0xe9: Push((int) 34600)
0xea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xee: PushEmpty(bool)
0xef: Call2 0x86f

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: @ lshStopAnimation()
0xf3: Pop(0)
0xf4: GOTO 0xf7

0xf5: @ StopAnimation()
0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: GOTO 0x9b

0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: PushEmpty()
0xfc: Call2 0x1b5

0xfd: Pop(0)
0xfe: PushEmpty(int, object)
0xff: Stack[-3] = Stack[-1]
0x100: Push(-2, 1); TaskCall(0)
0x101: Call2 0x0

0x102: Pop(-2, 1); TaskReturn
0x103: Pop(2)
0x104: Return(); Pop(0)

0x105: PushEmpty(bool, bool)
0x106: @ IsPlayerActor(Stack[-3], Stack[-1])
0x107: Pop(0)
0x108: Push(Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(bool, string, string)
0x10b: Stack[-2] = "quest_d1_01" // @poff=156
0x10c: Stack[-1] = "attack" // @poff=180
0x10d: Call2 0x804

0x10e: Pop(3)
0x10f: Return(); Pop(2)

0x110: PushEmpty()
0x111: Push("attack") // @poff=180
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x114: PushEmpty()
0x115: Call2 0x1b5

0x116: Pop(0)
0x117: PushEmpty()
0x118: Call2 0x139

0x119: Pop(0)
0x11a: PushEmpty(object)
0x11b: PushEmpty(object)
0x11c: Call2 0x60b

0x11d: Stack[-1] = Stack[-2]
0x11e: Pop(1)
0x11f: Push(-1, 6); TaskCall(3)
0x120: Call2 0x1ba

0x121: Pop(-1, 6); TaskReturn
0x122: Pop(1)
0x123: Return(); Pop(0)

0x124: PushEmpty(float, float)
0x125: PushEmpty(bool)
0x126: Call2 0x736

0x127: Pop(0)
0x128: Pop(1); Push((bool) Stack[-1] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12a: @ Hold()
0x12b: Pop(0)
0x12c: GOTO 0x125

0x12d: Push((int) 3)
0x12e: @ rand(Stack[-2], Stack[-1])
0x12f: Pop(1)
0x130: Push((int) 3)
0x131: Pop(1); Push(Stack[-2] + Stack[-1]);
0x132: @ Sleep(Stack[-1])
0x133: Pop(1)
0x134: PushEmpty()
0x135: Call2 0x164

0x136: Pop(0)
0x137: GOTO 0x125

0x138: Return(); Pop(2)

0x139: PushEmpty(bool, bool)
0x13a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13b: @ IsLoaded(Stack[-1])
0x13c: Pop(0)
0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: Pop(0); Push((bool) Stack[-2] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: PushEmpty(bool)
0x142: Call2 0x162

0x143: Pop(0)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Stack[-1] = (bool) 1
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: PushEmpty(object)
0x148: Call2 0x7d8

0x149: Pop(0)
0x14a: @ RemoveActor(Stack[-1])
0x14b: Pop(1)
0x14c: Return(); Pop(2)

0x14d: @ StopGroup0()
0x14e: Pop(0)
0x14f: @ sync()
0x150: Pop(0)
0x151: Return(); Pop(0)

0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 0
0x154: Push( Stack[0 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x156: PushEmpty(bool)
0x157: Call2 0x162

0x158: Pop(0)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Stack[-1] = (bool) 1
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: PushEmpty(object)
0x15d: Call2 0x7d8

0x15e: Pop(0)
0x15f: @ RemoveActor(Stack[-1])
0x160: Pop(1)
0x161: Return(); Pop(0)

0x162: Stack[-1] = (bool) 1
0x163: Return(); Pop(0)

0x164: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x165: @ WaitForAnimEnd()
0x166: Pop(0)
0x167: PushEmpty(bool)
0x168: Call2 0x736

0x169: Pop(0)
0x16a: Pop(1); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: Return(); Pop(14)

0x16d: PushEmpty(int)
0x16e: Call2 0x82b

0x16f: Stack[-1] = Stack[-8]
0x170: Pop(1)
0x171: Stack[-6] = (int) 0
0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 0
0x174: Push((int) 5)
0x175: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: PushEmpty(bool)
0x178: Call2 0x736

0x179: Pop(0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Stack[-1] = (bool) 1
0x17c: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x17d: Push((int) 3)
0x17e: @ irand(Stack[-6], Stack[-1])
0x17f: Pop(1)
0x180: Push((int) 0)
0x181: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x183: Push(Stack[-7])
0x184: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x185: @ irand(Stack[-4], Stack[-7])
0x186: Pop(0)
0x187: Push("all") // @poff=138
0x188: PushEmpty(string, int)
0x189: Stack[-7] = Stack[-1]
0x18a: Call2 0x824

0x18b: Pop(1)
0x18c: @ PlayAnimation(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: @ WaitForAnimEnd(Stack[-3])
0x18f: Pop(0)
0x190: Pop(0); Push((bool) Stack[-3] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: GOTO 0x1b0

0x193: GOTO 0x1a5

0x194: Push((int) 1)
0x195: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x197: Push((int) 4)
0x198: @ rand(Stack[-3], Stack[-1])
0x199: Pop(1)
0x19a: Push((int) 1)
0x19b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x19c: @ Sleep(Stack[-1], Stack[-2])
0x19d: Pop(1)
0x19e: Pop(0); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1b0

0x1a1: GOTO 0x1a5

0x1a2: Push(Stack[-6])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1b0

0x1a5: PushEmpty(bool)
0x1a6: Call2 0x1b3

0x1a7: Pop(0)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: GOTO 0x1b0

0x1ab: @ ResetAAS()
0x1ac: Pop(0)
0x1ad: Push((int) 1)
0x1ae: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1af: GOTO 0x172

0x1b0: @ ResetAAS()
0x1b1: Pop(0)
0x1b2: Return(); Pop(14)

0x1b3: Stack[-1] = (bool) 1
0x1b4: Return(); Pop(0)

0x1b5: @ StopAnimation()
0x1b6: Pop(0)
0x1b7: @ StopGroup0()
0x1b8: Pop(0)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty(object, bool, float)
0x1bc: Stack[-4] = Stack[-3]
0x1bd: Stack[-2] = (bool) 1
0x1be: Stack[-1] = (float) 180.0
0x1bf: Call2 0x1cc

0x1c0: Pop(3)
0x1c1: Push((int) 1)
0x1c2: @ Sleep(Stack[-1])
0x1c3: Pop(1)
0x1c4: GOTO 0x1bb

0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: Stack[-3] = (float) 0.10000000149011612
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty()
0x1ca: Stack[-3] = (int) 0
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1cd: PushEmpty()
0x1ce: Call2 0x2b1

0x1cf: Pop(0)
0x1d0: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1d1: Push("@GetAttackDistance") // @poff=194
0x1d2: Push((int) 1)
0x1d3: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=232
0x1d6: Pop(0)
0x1d7: Push((int) 50)
0x1d8: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1d9: GOTO 0x1db

0x1da: Stack[-23] = Stack[-11]
0x1db: Push((int) 150)
0x1dc: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-11] = (int) 150
0x1df: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1e1: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0x1e2: Pop(0)
0x1e3: Push(Stack[-8])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e5: Push("attack") // @poff=180
0x1e6: @ PlayGlobalMusic(Stack[-1])
0x1e7: Pop(1)
0x1e8: PushEmpty(object)
0x1e9: Call2 0x7d8

0x1ea: Pop(0)
0x1eb: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1ec: Pop(1)
0x1ed: Push(Stack[-24])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ef: Stack[-7] = (bool) 0
0x1f0: GOTO 0x1f2

0x1f1: Stack[-7] = (bool) 1
0x1f2: Push((float)400.0)
0x1f3: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 0
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f8: Call2 0x695

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fb: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = (bool) 1
0x1fe: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x1ff: PushEmpty()
0x200: Call2 0x44e

0x201: Pop(0)
0x202: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=250
0x203: Pop(0)
0x204: @ GetPFPosition(Stack[-9])
0x205: Pop(0)
0x206: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x207: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x208: Pop(0); Push(Stack[-6] * Stack[-6]);
0x209: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x20b: PushEmpty(bool, object, float, float, bool, bool)
0x20c: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x20d: Stack[-17] = Stack[-4]
0x20e: Stack[-3] = (float) 10000.0
0x20f: Stack[-2] = (bool) 1
0x210: Stack[-1] = (bool) 0
0x211: Push(-6, 3); TaskCall(4)
0x212: Call2 0x462

0x213: Pop(-6, 3); TaskReturn
0x214: Pop(5)
0x215: Pop(1); Push((bool) Stack[-1] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x2a0

0x218: Stack[-7] = (bool) 0
0x219: GOTO 0x29f

0x21a: Pop(0); Push(Stack[-23] * Stack[-23]);
0x21b: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x21d: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=250
0x21e: Pop(0)
0x21f: @ CanReachByPF(Stack[-2], Stack[-3])
0x220: Pop(0)
0x221: Pop(0); Push((bool) Stack[-2] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x223: PushEmpty(bool, object, float, float, bool, bool)
0x224: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x225: Stack[-17] = Stack[-4]
0x226: Stack[-3] = (float) 10000.0
0x227: Stack[-2] = (bool) 1
0x228: Stack[-1] = (bool) 0
0x229: Push(-6, 3); TaskCall(4)
0x22a: Call2 0x462

0x22b: Pop(-6, 3); TaskReturn
0x22c: Pop(5)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x2a0

0x230: Stack[-7] = (bool) 0
0x231: GOTO 0x1f4

0x232: Pop(0); Push((bool) Stack[-7] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x234: PushEmpty(object)
0x235: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x236: Call2 0x72b

0x237: Pop(1)
0x238: Push("all") // @poff=138
0x239: Push("attack_on") // @poff=264
0x23a: @ PlayAnimation(Stack[-2], Stack[-1])
0x23b: Pop(2)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty()
0x23f: Call2 0x44e

0x240: Pop(0)
0x241: @ StopAsync()
0x242: Pop(0)
0x243: Stack[-7] = (bool) 1
0x244: PushEmpty(bool, object)
0x245: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x246: Call2 0x695

0x247: Pop(1)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x2a0

0x24b: @ rand(Stack[-1])
0x24c: Pop(0)
0x24d: PushEmpty(bool)
0x24e: Stack[-1] = (bool) 1
0x24f: Push((float)0.25)
0x250: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x251: IF (Stack[-1] == 1) GOTO 0x257; Pop(1)

0x252: PushEmpty(bool)
0x253: Call2 0x423

0x254: Pop(0)
0x255: IF (Stack[-1] == 1) GOTO 0x257; Pop(1)

0x256: Stack[-1] = (bool) 0
0x257: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x258: @ Face(Stack[-0]T)
0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x455

0x25c: Pop(0)
0x25d: Push("all") // @poff=138
0x25e: Push("attack_stay") // @poff=284
0x25f: @ PlayAnimation(Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: PushEmpty(bool, float)
0x262: Stack[-25] = Stack[-1]
0x263: Call2 0x39f

0x264: Pop(2)
0x265: @ StopAsync()
0x266: Pop(0)
0x267: GOTO 0x296

0x268: @ Face(Stack[-0]T)
0x269: Pop(0)
0x26a: Push("all") // @poff=138
0x26b: Push("fjump") // @poff=308
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: @ WaitForAnimEnd()
0x26f: Pop(0)
0x270: PushEmpty()
0x271: Call2 0x44e

0x272: Pop(0)
0x273: Push([0.0, 0.0, 0.0])
0x274: @ SetSpeed(Stack[-1])
0x275: Pop(1)
0x276: @ Stop()
0x277: Pop(0)
0x278: @ StopAsync()
0x279: Pop(0)
0x27a: PushEmpty(bool)
0x27b: Call2 0x423

0x27c: Pop(0)
0x27d: Pop(1); Push((bool) Stack[-1] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x27f: PushEmpty(bool, object)
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call2 0x695

0x282: Pop(1)
0x283: Pop(1); Push((bool) Stack[-1] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: GOTO 0x2a0

0x286: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=250
0x287: Pop(0)
0x288: @ GetPFPosition(Stack[-9])
0x289: Pop(0)
0x28a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x28b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x28c: Pop(0); Push(Stack[-23] * Stack[-23]);
0x28d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x28f: PushEmpty(bool, float)
0x290: Stack[-25] = Stack[-1]
0x291: Call2 0x2fb

0x292: Pop(1)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x2a0

0x296: GOTO 0x29f

0x297: PushEmpty(bool, float)
0x298: Stack[-25] = Stack[-1]
0x299: Call2 0x2fb

0x29a: Pop(1)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a0

0x29e: Stack[-7] = (bool) 1
0x29f: GOTO 0x1f4

0x2a0: @ WaitForAnimEnd()
0x2a1: Pop(0)
0x2a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: Return(); Pop(22)

0x2a5: Push("all") // @poff=138
0x2a6: Push("attack_off") // @poff=320
0x2a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: @ WaitForAnimEnd()
0x2aa: Pop(0)
0x2ab: Push(Stack[-8])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ad: Push((float)2.0)
0x2ae: @ Sleep(Stack[-1])
0x2af: Pop(1)
0x2b0: Return(); Pop(22)

0x2b1: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2b2: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2b3: Push("all") // @poff=138
0x2b4: Push("attack_begin") // @poff=342
0x2b5: Push((int) 1)
0x2b6: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x2b7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b8: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: Pop(0); Push((bool) Stack[-3] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: GOTO 0x2c0

0x2bd: Push((int) 1)
0x2be: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2bf: GOTO 0x2b3

0x2c0: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2c1: Push("attack") // @poff=180
0x2c2: Push((int) 1)
0x2c3: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x2c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c5: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x2c6: Pop(1)
0x2c7: Pop(0); Push((bool) Stack[-2] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2cd

0x2ca: Push((int) 1)
0x2cb: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2cc: GOTO 0x2c1

0x2cd: Push("all") // @poff=138
0x2ce: Push("bjump") // @poff=368
0x2cf: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(2)
0x2d1: Push(CvectorIndex(Stack[-1], 2))
0x2d2: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2d3: Return(); Pop(6)

0x2d4: PushEmpty(object, float, float, object, float, float)
0x2d5: Push((float)0.8999999761581421)
0x2d6: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2d7: @ GetVictim(Stack[-1], Stack[-4])
0x2d8: Pop(1)
0x2d9: @ ReportAttack(Stack[-0]T)
0x2da: Pop(0)
0x2db: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2dd: PushEmpty(float, object, int)
0x2de: Stack[-6] = Stack[-2]
0x2df: Stack[-10] = Stack[-1]
0x2e0: Call2 0x1c6

0x2e1: Stack[-3] = Stack[-5]
0x2e2: Pop(3)
0x2e3: PushEmpty(float, object, float, int)
0x2e4: Stack[-7] = Stack[-3]
0x2e5: Stack[-6] = Stack[-2]
0x2e6: PushEmpty(int, object, int)
0x2e7: Stack[-10] = Stack[-2]
0x2e8: Stack[-14] = Stack[-1]
0x2e9: Call2 0x1c9

0x2ea: Stack[-3] = Stack[-4]
0x2eb: Pop(3)
0x2ec: Call2 0x623

0x2ed: Stack[-4] = Stack[-5]
0x2ee: Pop(4)
0x2ef: PushEmpty(int)
0x2f0: Call2 0x453

0x2f1: Pop(0)
0x2f2: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x2f3: Pop(1)
0x2f4: PushEmpty(object, float)
0x2f5: Stack[-5] = Stack[-2]
0x2f6: Stack[-3] = Stack[-1]
0x2f7: Call2 0x45a

0x2f8: Pop(2)
0x2f9: Return(); Pop(6)

0x2fa: Stack[-3] = 0
0x2fb: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2fc: PushEmpty()
0x2fd: Call2 0x44e

0x2fe: Pop(0)
0x2ff: @ irand(Stack[-4], Stack[-1]T)
0x300: Pop(0)
0x301: Push((int) 1)
0x302: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x303: @ Face(Stack[-0]T)
0x304: Pop(0)
0x305: Push((bool) 1)
0x306: @ SetAttackState(Stack[-1])
0x307: Pop(1)
0x308: PushEmpty()
0x309: Call2 0x819

0x30a: Pop(0)
0x30b: Push("all") // @poff=138
0x30c: Push("attack_begin") // @poff=342
0x30d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x30e: @ PlayAnimation(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: @ WaitForAnimEnd()
0x311: Pop(0)
0x312: PushEmpty()
0x313: Call2 0x42e

0x314: Pop(0)
0x315: PushEmpty(bool, object)
0x316: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x317: Call2 0x695

0x318: Pop(1)
0x319: Pop(1); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31b: @ StopAsync()
0x31c: Pop(0)
0x31d: Stack[-10] = (bool) 0
0x31e: Return(); Pop(8)

0x31f: PushEmpty(float, int)
0x320: Stack[-11] = Stack[-2]
0x321: Stack[-6] = Stack[-1]
0x322: Call2 0x2d4

0x323: Pop(2)
0x324: Push("all") // @poff=138
0x325: Push("attack_middle") // @poff=380
0x326: Pop(1); Push(Stack[-1] + Stack[-6]);
0x327: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x328: Pop(2)
0x329: Push(Stack[-3])
0x32a: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x32b: PushEmpty()
0x32c: Call2 0x819

0x32d: Pop(0)
0x32e: Push("all") // @poff=138
0x32f: Push("attack_middle") // @poff=380
0x330: Pop(1); Push(Stack[-1] + Stack[-6]);
0x331: @ PlayAnimation(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: @ WaitForAnimEnd()
0x334: Pop(0)
0x335: PushEmpty()
0x336: Call2 0x44e

0x337: Pop(0)
0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0x695

0x33b: Pop(1)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33e: @ StopAsync()
0x33f: Pop(0)
0x340: Stack[-10] = (bool) 0
0x341: Return(); Pop(8)

0x342: PushEmpty(float, int)
0x343: Stack[-11] = Stack[-2]
0x344: Stack[-6] = Stack[-1]
0x345: Call2 0x2d4

0x346: Pop(2)
0x347: Stack[-2] = (int) 1
0x348: Push("attack_middle") // @poff=380
0x349: Pop(1); Push(Stack[-1] + Stack[-5]);
0x34a: Push("_") // @poff=408
0x34b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34c: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x34d: Push("all") // @poff=138
0x34e: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x34f: Pop(1)
0x350: Pop(0); Push((bool) Stack[-3] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: GOTO 0x370

0x353: PushEmpty()
0x354: Call2 0x819

0x355: Pop(0)
0x356: Push("all") // @poff=138
0x357: @ PlayAnimation(Stack[-1], Stack[-2])
0x358: Pop(1)
0x359: @ WaitForAnimEnd()
0x35a: Pop(0)
0x35b: PushEmpty()
0x35c: Call2 0x44e

0x35d: Pop(0)
0x35e: PushEmpty(bool, object)
0x35f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x360: Call2 0x695

0x361: Pop(1)
0x362: Pop(1); Push((bool) Stack[-1] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x364: @ StopAsync()
0x365: Pop(0)
0x366: Stack[-10] = (bool) 0
0x367: Return(); Pop(8)

0x368: PushEmpty(float, int)
0x369: Stack[-11] = Stack[-2]
0x36a: Stack[-6] = Stack[-1]
0x36b: Call2 0x2d4

0x36c: Pop(2)
0x36d: Push((int) 1)
0x36e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36f: GOTO 0x348

0x370: Push((bool) 0)
0x371: @ SetAttackState(Stack[-1])
0x372: Pop(1)
0x373: Push("all") // @poff=138
0x374: Push("attack_end") // @poff=412
0x375: Pop(1); Push(Stack[-1] + Stack[-6]);
0x376: @ PlayAnimation(Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: PushEmpty(bool)
0x379: Call2 0x45c

0x37a: Pop(0)
0x37b: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37c: PushEmpty(bool, float)
0x37d: Stack[-1] = (float) 0.75
0x37e: Call2 0x384

0x37f: Pop(2)
0x380: @ StopAsync()
0x381: Pop(0)
0x382: Stack[-10] = (bool) 1
0x383: Return(); Pop(8)

0x384: PushEmpty(float, bool, float, bool)
0x385: @ rand(Stack[-2])
0x386: Pop(0)
0x387: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x388: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x389: @ IsAnimationPlaying(Stack[-1])
0x38a: Pop(0)
0x38b: Pop(0); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x397

0x38e: PushEmpty(bool)
0x38f: Call2 0x3e6

0x390: Pop(0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-6] = (bool) 1
0x393: Return(); Pop(4)

0x394: @ sync()
0x395: Pop(0)
0x396: GOTO 0x389

0x397: GOTO 0x39d

0x398: @ WaitForAnimEnd()
0x399: Pop(0)
0x39a: PushEmpty()
0x39b: Call2 0x44e

0x39c: Pop(0)
0x39d: Stack[-6] = (bool) 0
0x39e: Return(); Pop(4)

0x39f: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3a0: @ IsAnimationPlaying(Stack[-5])
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-5] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3c5

0x3a5: PushEmpty(bool)
0x3a6: Call2 0x3e6

0x3a7: Pop(0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a9: Stack[-12] = (bool) 1
0x3aa: Return(); Pop(10)

0x3ab: PushEmpty(bool, object)
0x3ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ad: Call2 0x695

0x3ae: Pop(1)
0x3af: Pop(1); Push((bool) Stack[-1] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: Stack[-12] = (bool) 0
0x3b2: Return(); Pop(10)

0x3b3: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=250
0x3b4: Pop(0)
0x3b5: @ GetPFPosition(Stack[-3])
0x3b6: Pop(0)
0x3b7: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3b8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3b9: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3ba: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bc: PushEmpty(bool, float)
0x3bd: Stack[-13] = Stack[-1]
0x3be: Call2 0x2fb

0x3bf: Pop(2)
0x3c0: Stack[-12] = (bool) 1
0x3c1: Return(); Pop(10)

0x3c2: @ sync()
0x3c3: Pop(0)
0x3c4: GOTO 0x3a0

0x3c5: PushEmpty()
0x3c6: Call2 0x44e

0x3c7: Pop(0)
0x3c8: Stack[-12] = (bool) 0
0x3c9: Return(); Pop(10)

0x3ca: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3cb: PushEmpty(bool, object)
0x3cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3cd: Call2 0x695

0x3ce: Pop(1)
0x3cf: Pop(1); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-11] = (bool) 0
0x3d2: Return(); Pop(10)

0x3d3: PushEmpty(bool)
0x3d4: Call2 0x423

0x3d5: Pop(0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d7: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=250
0x3d8: Pop(0)
0x3d9: @ GetPFPosition(Stack[-4])
0x3da: Pop(0)
0x3db: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3dc: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3dd: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=232
0x3de: Pop(0)
0x3df: Push((int) 50)
0x3e0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3e1: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3e2: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3e3: Return(); Pop(10)

0x3e4: Stack[-11] = (bool) 0
0x3e5: Return(); Pop(10)

0x3e6: PushEmpty(bool)
0x3e7: Stack[-1] = (bool) 0
0x3e8: PushEmpty(bool)
0x3e9: Call2 0x3ca

0x3ea: Pop(0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ec: PushEmpty(bool)
0x3ed: Call2 0x3f6

0x3ee: Pop(0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3f0: Stack[-1] = (bool) 1
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: Return(); Pop(0)

0x3f4: Stack[-1] = (bool) 0
0x3f5: Return(); Pop(0)

0x3f6: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3f7: @ GetScene(Stack[-5])
0x3f8: Pop(0)
0x3f9: Stack[-4] = (bool) 0
0x3fa: PushEmpty(cvector, object)
0x3fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fc: Call2 0x604

0x3fd: Pop(1)
0x3fe: Pop(1); Push(( -Stack[-1])
0x3ff: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x400: Pop(1)
0x401: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x402: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x403: GOTO 0x420

0x404: @ Face(Stack[-0]T)
0x405: Pop(0)
0x406: Push("all") // @poff=138
0x407: Push("bjump") // @poff=368
0x408: @ PlayAnimation(Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=250
0x40b: Pop(0)
0x40c: @ GetPFPosition(Stack[-1])
0x40d: Pop(0)
0x40e: @ WaitForAnimEnd()
0x40f: Pop(0)
0x410: PushEmpty()
0x411: Call2 0x44e

0x412: Pop(0)
0x413: @ StopAsync()
0x414: Pop(0)
0x415: Push([0.0, 0.0, 0.0])
0x416: @ SetSpeed(Stack[-1])
0x417: Pop(1)
0x418: Stack[-4] = (bool) 1
0x419: PushEmpty(bool)
0x41a: Call2 0x3ca

0x41b: Pop(0)
0x41c: Pop(1); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: GOTO 0x420

0x41f: GOTO 0x3fa

0x420: Stack[-4] = Stack[-11]
0x421: Return(); Pop(10)

0x422: Stack[-5] = 0
0x423: PushEmpty(bool, bool)
0x424: Push("IsAttacking") // @poff=434
0x425: Push((int) 1)
0x426: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x427: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x428: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=458
0x429: Pop(0)
0x42a: Stack[-1] = Stack[-3]
0x42b: Return(); Pop(2)

0x42c: Stack[-3] = (bool) 0
0x42d: Return(); Pop(2)

0x42e: PushEmpty(float, int, float, int)
0x42f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Return(); Pop(4)

0x432: Push( Stack[5 + Tasks[-1].StackPointer] )
0x433: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x434: Push((int) -1)
0x435: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x436: Push((int) 0)
0x437: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: Return(); Pop(4)

0x43a: @ rand(Stack[-2])
0x43b: Pop(0)
0x43c: PushEmpty(float)
0x43d: Call2 0x460

0x43e: Pop(0)
0x43f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x441: @ irand(Stack[-1], Stack[-2]T)
0x442: Pop(0)
0x443: Push((int) 1)
0x444: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x445: Push("attack") // @poff=180
0x446: Pop(1); Push(Stack[-1] + Stack[-2]);
0x447: @ Speak(Stack[-1])
0x448: Pop(1)
0x449: PushEmpty(int)
0x44a: Call2 0x45e

0x44b: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x44c: Pop(1)
0x44d: Return(); Pop(4)

0x44e: PushEmpty(object)
0x44f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x450: Call2 0x810

0x451: Pop(1)
0x452: Return(); Pop(0)

0x453: Stack[-1] = (int) 0
0x454: Return(); Pop(0)

0x455: PushEmpty(string)
0x456: Stack[-1] = "attack_stay" // @poff=284
0x457: Call2 0x7af

0x458: Pop(1)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: Return(); Pop(0)

0x45c: Stack[-1] = (bool) 1
0x45d: Return(); Pop(0)

0x45e: Stack[-1] = (int) 1
0x45f: Return(); Pop(0)

0x460: Stack[-1] = (float) 0.5
0x461: Return(); Pop(0)

0x462: PushEmpty(bool, bool, bool, bool)
0x463: PushEmpty(object)
0x464: Stack[-10] = Stack[-1]
0x465: Call2 0x810

0x466: Pop(1)
0x467: Push((int) 1)
0x468: Push((int) 5)
0x469: @ SetTimer(Stack[-2], Stack[-1])
0x46a: Pop(2)
0x46b: @ CanSee(Stack[-2], Stack[-9])
0x46c: Pop(0)
0x46d: Push(Stack[-2])
0x46e: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x470: PushEmpty(object)
0x471: Stack[-10] = Stack[-1]
0x472: Call2 0x79d

0x473: Pop(1)
0x474: GOTO 0x476

0x475: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x476: PushEmpty(bool, object)
0x477: Stack[-11] = Stack[-1]
0x478: Call2 0x612

0x479: Pop(1)
0x47a: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47b: PushEmpty(object)
0x47c: Call2 0x7d8

0x47d: Pop(0)
0x47e: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x47f: Pop(1)
0x480: PushEmpty(bool, object, float, float, bool, bool)
0x481: Stack[-15] = Stack[-5]
0x482: Stack[-14] = Stack[-4]
0x483: Stack[-13] = Stack[-3]
0x484: Stack[-12] = Stack[-2]
0x485: Stack[-11] = Stack[-1]
0x486: Call2 0x4cb

0x487: Stack[-6] = Stack[-7]
0x488: Pop(6)
0x489: Push( Stack[2 + Tasks[-1].StackPointer] )
0x48a: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48b: Push("head") // @poff=470
0x48c: @ UnlookAsync(Stack[-1])
0x48d: Pop(1)
0x48e: Push((int) 1)
0x48f: @ KillTimer(Stack[-1])
0x490: Pop(1)
0x491: Stack[-1] = Stack[-10]
0x492: Return(); Pop(4)

0x493: PushEmpty()
0x494: Push((int) 1)
0x495: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x497: PushEmpty(object)
0x498: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x499: Call2 0x810

0x49a: Pop(1)
0x49b: GOTO 0x4a0

0x49c: PushEmpty(int)
0x49d: Stack[-2] = Stack[-1]
0x49e: Call2 0x531

0x49f: Pop(1)
0x4a0: Return(); Pop(0)

0x4a1: Push((int) 1)
0x4a2: @ KillTimer(Stack[-1])
0x4a3: Pop(1)
0x4a4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4a5: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4a7: Push("head") // @poff=470
0x4a8: @ UnlookAsync(Stack[-1])
0x4a9: Pop(1)
0x4aa: PushEmpty()
0x4ab: Call2 0x547

0x4ac: Pop(0)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: PushEmpty(bool)
0x4b0: Stack[-1] = (bool) 0
0x4b1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Stack[-1] = (bool) 1
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4b7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4b8: PushEmpty(object)
0x4b9: Stack[-2] = Stack[-1]
0x4ba: Call2 0x79d

0x4bb: Pop(1)
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: PushEmpty(bool)
0x4bf: Stack[-1] = (bool) 0
0x4c0: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: Stack[-1] = (bool) 1
0x4c5: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4c7: Push("head") // @poff=470
0x4c8: @ UnlookAsync(Stack[-1])
0x4c9: Pop(1)
0x4ca: Return(); Pop(0)

0x4cb: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4cc: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4ce: Stack[-17] = Stack[-7]
0x4cf: PushEmpty(bool, object)
0x4d0: Stack[-23] = Stack[-1]
0x4d1: Call2 0x557

0x4d2: Pop(1)
0x4d3: Pop(1); Push((bool) Stack[-1] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-22] = (bool) 0
0x4d6: Return(); Pop(16)

0x4d7: @@ GetPosition(Stack[-5]); Obj=21 // @poff=480
0x4d8: Pop(0)
0x4d9: @ GetPosition(Stack[-4])
0x4da: Pop(0)
0x4db: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4dc: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4dd: PushEmpty(bool)
0x4de: Stack[-1] = (bool) 0
0x4df: Push((int) 0)
0x4e0: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e2: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4e3: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e5: Stack[-1] = (bool) 1
0x4e6: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e7: @ Stop()
0x4e8: Pop(0)
0x4e9: Stack[-22] = (bool) 0
0x4ea: Return(); Pop(16)

0x4eb: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4ec: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x4ee: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=250
0x4ef: Pop(0)
0x4f0: @ FindPathTo(Stack[-1], Stack[-5])
0x4f1: Pop(0)
0x4f2: Pop(0); Push(( Stack[-1] != 0 )
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: Stack[-1] = Stack[-6]
0x4f5: Stack[-1] = 0
0x4f6: Pop(0); Push(( Stack[-6] != 0 )
0x4f7: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x4f8: Push(Stack[-7])
0x4f9: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4fa: Stack[-7] = (bool) 0
0x4fb: @ RotatePath(Stack[-6], Stack[-8])
0x4fc: Pop(0)
0x4fd: Pop(0); Push((bool) Stack[-8] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4ff: GOTO 0x52f

0x500: Push((int) 0)
0x501: Push((float)0.30000001192092896)
0x502: @ SetTimer(Stack[-2], Stack[-1])
0x503: Pop(2)
0x504: PushEmpty(string)
0x505: Call2 0x55e

0x506: Pop(0)
0x507: PushEmpty(string)
0x508: Call2 0x560

0x509: Pop(0)
0x50a: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x50b: Pop(2)
0x50c: Pop(0); Push((bool) Stack[-8] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x50e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x50f: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x510: Stack[-6] = 0
0x511: GOTO 0x52f

0x512: GOTO 0x514

0x513: GOTO 0x52e

0x514: GOTO 0x516

0x515: Stack[-6] = 0
0x516: GOTO 0x527

0x517: Push((int) 0)
0x518: @ KillTimer(Stack[-1])
0x519: Pop(1)
0x51a: Push((float)0.5)
0x51b: @ Sleep(Stack[-1], Stack[-9])
0x51c: Pop(1)
0x51d: Pop(0); Push((bool) Stack[-8] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x51f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x520: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x521: Stack[-6] = 0
0x522: GOTO 0x52f

0x523: Push((int) 0)
0x524: Push((float)0.30000001192092896)
0x525: @ SetTimer(Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: Stack[-1] = 0
0x528: GOTO 0x52d

0x529: Push((int) 0)
0x52a: @ KillTimer(Stack[-1])
0x52b: Pop(1)
0x52c: GOTO 0x52f

0x52d: Stack[-6] = 0
0x52e: GOTO 0x4cf

0x52f: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x530: Return(); Pop(16)

0x531: PushEmpty()
0x532: Push((int) 0)
0x533: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x535: Return(); Pop(0)

0x536: PushEmpty(bool, object)
0x537: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x538: Call2 0x557

0x539: Pop(1)
0x53a: Pop(1); Push((bool) Stack[-1] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x53d: Push((int) 0)
0x53e: @ KillTimer(Stack[-1])
0x53f: Pop(1)
0x540: @ Stop()
0x541: Pop(0)
0x542: Return(); Pop(0)

0x543: PushEmpty()
0x544: @ RequestClearPath(Stack[-1])
0x545: Pop(0)
0x546: Return(); Pop(0)

0x547: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x548: Push((int) 0)
0x549: @ KillTimer(Stack[-1])
0x54a: Pop(1)
0x54b: @ Stop()
0x54c: Pop(0)
0x54d: Return(); Pop(0)

0x54e: PushEmpty()
0x54f: PushEmpty()
0x550: Call2 0x4a1

0x551: Pop(0)
0x552: PushEmpty(object)
0x553: Stack[-2] = Stack[-1]
0x554: Call2 0x898

0x555: Pop(1)
0x556: Return(); Pop(0)

0x557: PushEmpty()
0x558: PushEmpty(bool, object)
0x559: Stack[-3] = Stack[-1]
0x55a: Call2 0x695

0x55b: Stack[-2] = Stack[-4]
0x55c: Pop(2)
0x55d: Return(); Pop(0)

0x55e: Stack[-1] = "walk" // @poff=492
0x55f: Return(); Pop(0)

0x560: Stack[-1] = "run" // @poff=502
0x561: Return(); Pop(0)

0x562: PushEmpty()
0x563: EventDisable(0)
0x564: PushEmpty(object)
0x565: Stack[-2] = Stack[-1]
0x566: Call2 0x57b

0x567: Pop(1)
0x568: Push((int) 50)
0x569: Push((int) 40)
0x56a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x56b: Pop(2)
0x56c: EventEnable(0)
0x56d: @ Hold()
0x56e: Pop(0)
0x56f: GOTO 0x56d

0x570: Return(); Pop(0)

0x571: PushEmpty(bool, bool)
0x572: @ IsOverrideActive(Stack[-1])
0x573: Pop(0)
0x574: Pop(0); Push((bool) Stack[-1] == 0)
0x575: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x576: PushEmpty(object)
0x577: Stack[-4] = Stack[-1]
0x578: Call2 0x85a

0x579: Pop(1)
0x57a: Return(); Pop(2)

0x57b: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x57c: Pop(0); PushNull((bool) Stack[-21] == 0)
0x57d: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57e: PushEmpty(string)
0x57f: Stack[-1] = "fdie" // @poff=510
0x580: Call2 0x5d6

0x581: Pop(1)
0x582: GOTO 0x5d5

0x583: @@ GetPosition(Stack[-10]); Obj=21 // @poff=480
0x584: Pop(0)
0x585: @ GetPosition(Stack[-9])
0x586: Pop(0)
0x587: @ GetDirection(Stack[-8])
0x588: Pop(0)
0x589: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x58a: Push(CvectorIndex(Stack[-7], 0))
0x58b: Push(CvectorIndex(Stack[-9], 0))
0x58c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58d: Push(CvectorIndex(Stack[-8], 2))
0x58e: Push(CvectorIndex(Stack[-10], 2))
0x58f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x590: Pop(2); Push(Stack[-2] + Stack[-1]);
0x591: Push((int) 0)
0x592: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x594: Stack[-6] = "fdie" // @poff=510
0x595: GOTO 0x597

0x596: Stack[-6] = "bdie" // @poff=520
0x597: @ RemoveRTEnvelope()
0x598: Pop(0)
0x599: @ SetDeathState()
0x59a: Pop(0)
0x59b: @ Stop()
0x59c: Pop(0)
0x59d: @ StopAsync()
0x59e: Pop(0)
0x59f: Stack[-21] = Stack[-5]
0x5a0: Push("GetScriptProperty") // @poff=530
0x5a1: Push((int) 2)
0x5a2: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5a3: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a4: Push("Owner") // @poff=566
0x5a5: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=578
0x5a6: Pop(1)
0x5a7: Push(Stack[-4])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a9: Push("Owner") // @poff=566
0x5aa: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=596
0x5ab: Pop(1)
0x5ac: Pop(0); PushNull((bool) Stack[-5] == 0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: Stack[-21] = Stack[-5]
0x5af: Push("@GetEyesHeight") // @poff=614
0x5b0: Push((int) 1)
0x5b1: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5b2: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5b3: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=644
0x5b4: Pop(0)
0x5b5: Stack[-1] = [0.0, 0.0, 0.0]
0x5b6: Push(CvectorIndex(Stack[-1], 1))
0x5b7: Stack[-3] = Stack[-1]
0x5b8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5b9: Push("head") // @poff=470
0x5ba: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x5bb: Pop(1)
0x5bc: Stack[-3] = (bool) 1
0x5bd: GOTO 0x5bf

0x5be: Stack[-3] = (bool) 0
0x5bf: PushEmpty(string)
0x5c0: Stack[-7] = Stack[-1]
0x5c1: Call2 0x7af

0x5c2: Pop(1)
0x5c3: Push("all") // @poff=138
0x5c4: @ PlayAnimation(Stack[-1], Stack[-7])
0x5c5: Pop(1)
0x5c6: @ WaitForAnimEnd()
0x5c7: Pop(0)
0x5c8: Push(Stack[-3])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ca: @ StopAsync()
0x5cb: Pop(0)
0x5cc: Push("head") // @poff=470
0x5cd: @ UnlookAsync(Stack[-1])
0x5ce: Pop(1)
0x5cf: Push("all") // @poff=138
0x5d0: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5d1: Pop(1)
0x5d2: @ RemoveEnvelope()
0x5d3: Pop(0)
0x5d4: Stack[-5] = 0
0x5d5: Return(); Pop(20)

0x5d6: PushEmpty()
0x5d7: @ RemoveRTEnvelope()
0x5d8: Pop(0)
0x5d9: @ SetDeathState()
0x5da: Pop(0)
0x5db: @ Stop()
0x5dc: Pop(0)
0x5dd: @ StopAsync()
0x5de: Pop(0)
0x5df: @ StopSecondaryAnimation()
0x5e0: Pop(0)
0x5e1: PushEmpty(string)
0x5e2: Stack[-2] = Stack[-1]
0x5e3: Call2 0x7af

0x5e4: Pop(1)
0x5e5: Push("all") // @poff=138
0x5e6: @ PlayAnimation(Stack[-1], Stack[-2])
0x5e7: Pop(1)
0x5e8: @ WaitForAnimEnd()
0x5e9: Pop(0)
0x5ea: Push("all") // @poff=138
0x5eb: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5ec: Pop(1)
0x5ed: @ RemoveEnvelope()
0x5ee: Pop(0)
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: Return(); Pop(0)

0x5f2: PushEmpty()
0x5f3: Return(); Pop(0)

0x5f4: PushEmpty()
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty()
0x5f7: Push((int) 2)
0x5f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fa: Stack[-2] = "fire" // @poff=658
0x5fb: Return(); Pop(0)

0x5fc: GOTO 0x602

0x5fd: Push((int) 1)
0x5fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x600: Stack[-2] = "bullet" // @poff=668
0x601: Return(); Pop(0)

0x602: Stack[-2] = "phys" // @poff=682
0x603: Return(); Pop(0)

0x604: PushEmpty(cvector, cvector, cvector, cvector)
0x605: @ GetPosition(Stack[-2])
0x606: Pop(0)
0x607: @@ GetPosition(Stack[-1]); Obj=5 // @poff=480
0x608: Pop(0)
0x609: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x60a: Return(); Pop(4)

0x60b: PushEmpty(object, object)
0x60c: Push("player") // @poff=692
0x60d: @ FindActor(Stack[-2], Stack[-1])
0x60e: Pop(1)
0x60f: Stack[-1] = Stack[-3]
0x610: Return(); Pop(2)

0x611: Stack[-1] = 0
0x612: PushEmpty(bool, bool)
0x613: @ IsPlayerActor(Stack[-3], Stack[-1])
0x614: Pop(0)
0x615: Stack[-1] = Stack[-4]
0x616: Return(); Pop(2)

0x617: PushEmpty(bool, bool)
0x618: Push("HasProperty") // @poff=706
0x619: Push((int) 2)
0x61a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x61b: Pop(1); Push((bool) Stack[-1] == 0)
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: Stack[-5] = (bool) 0
0x61e: Return(); Pop(2)

0x61f: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=730
0x620: Pop(0)
0x621: Stack[-1] = Stack[-5]
0x622: Return(); Pop(2)

0x623: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x624: PushEmpty(bool, object, string)
0x625: Stack[-18] = Stack[-2]
0x626: Stack[-1] = "health" // @poff=742
0x627: Call2 0x617

0x628: Pop(2)
0x629: Pop(1); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: Stack[-16] = (float) 0.0
0x62c: Return(); Pop(12)

0x62d: PushEmpty(bool, object, string)
0x62e: Stack[-18] = Stack[-2]
0x62f: Stack[-1] = "armor" // @poff=756
0x630: Call2 0x617

0x631: Pop(2)
0x632: Pop(1); Push((bool) Stack[-1] == 0)
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-6] = (int) 0
0x635: GOTO 0x639

0x636: Push("armor") // @poff=756
0x637: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=768
0x638: Pop(1)
0x639: Push("armor_") // @poff=780
0x63a: PushEmpty(string, int)
0x63b: Stack[-16] = Stack[-1]
0x63c: Call2 0x5f6

0x63d: Pop(1)
0x63e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x63f: PushEmpty(bool, object, string)
0x640: Stack[-18] = Stack[-2]
0x641: Stack[-8] = Stack[-1]
0x642: Call2 0x617

0x643: Pop(2)
0x644: Pop(1); Push((bool) Stack[-1] == 0)
0x645: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x646: Stack[-4] = (int) 0
0x647: GOTO 0x64a

0x648: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=768
0x649: Pop(0)
0x64a: PushEmpty(float, float, float)
0x64b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x64c: Push((float)100.0)
0x64d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x64e: Stack[-1] = (int) 1
0x64f: Call2 0x7e8

0x650: Stack[-3] = Stack[-6]
0x651: Pop(3)
0x652: Push("health") // @poff=742
0x653: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=768
0x654: Pop(1)
0x655: Push((int) 1)
0x656: Pop(1); Push(Stack[-1] - Stack[-4]);
0x657: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x658: Push("health") // @poff=742
0x659: PushEmpty(float, float, float, float)
0x65a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x65b: Stack[-2] = (int) 0
0x65c: Stack[-1] = (int) 1
0x65d: Call2 0x7ef

0x65e: Pop(3)
0x65f: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=794
0x660: Pop(2)
0x661: PushEmpty(bool, object)
0x662: Stack[-17] = Stack[-1]
0x663: Call2 0x612

0x664: Pop(1)
0x665: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x666: PushEmpty(float)
0x667: Stack[-1] = -Stack[-2]; Pop(0);
0x668: Call2 0x7fa

0x669: Pop(1)
0x66a: Stack[-1] = Stack[-16]
0x66b: Return(); Pop(12)

0x66c: PushEmpty(bool, bool)
0x66d: @@ IsDead(Stack[-1]); Obj=3 // @poff=806
0x66e: Pop(0)
0x66f: Stack[-1] = Stack[-4]
0x670: Return(); Pop(2)

0x671: PushEmpty(object, object, object, object)
0x672: Pop(0); PushNull((bool) Stack[-5] == 0)
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-6] = (bool) 0
0x675: Return(); Pop(4)

0x676: PushEmpty(bool)
0x677: Stack[-1] = (bool) 0
0x678: Push("IsDead") // @poff=813
0x679: Push((int) 1)
0x67a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x67b: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67c: PushEmpty(bool, object)
0x67d: Stack[-8] = Stack[-1]
0x67e: Call2 0x66c

0x67f: Pop(1)
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: Stack[-1] = (bool) 1
0x682: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x683: Stack[-6] = (bool) 0
0x684: Return(); Pop(4)

0x685: @ GetScene(Stack[-2])
0x686: Pop(0)
0x687: Pop(0); PushNull((bool) Stack[-2] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-6] = (bool) 0
0x68a: Return(); Pop(4)

0x68b: @@ GetScene(Stack[-1]); Obj=5 // @poff=827
0x68c: Pop(0)
0x68d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-6] = (bool) 0
0x690: Return(); Pop(4)

0x691: Stack[-6] = (bool) 1
0x692: Return(); Pop(4)

0x693: Stack[-1] = 0
0x694: Stack[-2] = 0
0x695: PushEmpty(int, int)
0x696: PushEmpty(bool, object)
0x697: Stack[-5] = Stack[-1]
0x698: Call2 0x671

0x699: Pop(1)
0x69a: Pop(1); Push((bool) Stack[-1] == 0)
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-4] = (bool) 0
0x69d: Return(); Pop(2)

0x69e: PushEmpty(bool, object, string)
0x69f: Stack[-6] = Stack[-2]
0x6a0: Stack[-1] = "noaccess" // @poff=836
0x6a1: Call2 0x617

0x6a2: Pop(2)
0x6a3: Pop(1); Push((bool) Stack[-1] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a5: Stack[-4] = (bool) 1
0x6a6: Return(); Pop(2)

0x6a7: Push("noaccess") // @poff=836
0x6a8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=768
0x6a9: Pop(1)
0x6aa: Push((int) 0)
0x6ab: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6ac: Return(); Pop(2)

0x6ad: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6ae: Pop(0); PushNull((bool) Stack[-15] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6b0: Return(); Pop(14)

0x6b1: @ IsDead(Stack[-7])
0x6b2: Pop(0)
0x6b3: Push(Stack[-7])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b5: Return(); Pop(14)

0x6b6: @ GetSecondaryAnimationType(Stack[-6])
0x6b7: Pop(0)
0x6b8: Push((int) 0)
0x6b9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6ba: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6bb: Return(); Pop(14)

0x6bc: @@ GetPosition(Stack[-5]); Obj=15 // @poff=480
0x6bd: Pop(0)
0x6be: @ GetPosition(Stack[-4])
0x6bf: Pop(0)
0x6c0: @ GetDirection(Stack[-3])
0x6c1: Pop(0)
0x6c2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6c3: Push(CvectorIndex(Stack[-2], 0))
0x6c4: Push(CvectorIndex(Stack[-4], 0))
0x6c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6c6: Push(CvectorIndex(Stack[-3], 2))
0x6c7: Push(CvectorIndex(Stack[-5], 2))
0x6c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6c9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ca: Push((int) 0)
0x6cb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cd: Stack[-1] = "fhit" // @poff=854
0x6ce: GOTO 0x6d0

0x6cf: Stack[-1] = "bhit" // @poff=864
0x6d0: Push("hit_react") // @poff=874
0x6d1: Push("1") // @poff=176
0x6d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6d3: Push("2") // @poff=894
0x6d4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6d5: Push((int) -10)
0x6d6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(4)
0x6d8: Return(); Pop(14)

0x6d9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6da: PushEmpty(bool)
0x6db: Stack[-1] = (bool) 0
0x6dc: PushEmpty(bool)
0x6dd: Stack[-1] = (bool) 0
0x6de: Push(Stack[-23])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e0: Push((int) 4)
0x6e1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e3: Stack[-1] = (bool) 1
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e5: Push((int) 5)
0x6e6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e8: Stack[-1] = (bool) 1
0x6e9: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x6ea: PushEmpty(cvector, cvector)
0x6eb: PushEmpty(cvector, object)
0x6ec: Stack[-25] = Stack[-1]
0x6ed: Call2 0x604

0x6ee: Stack[-2] = Stack[-3]
0x6ef: Pop(2)
0x6f0: Call2 0x7de

0x6f1: Stack[-2] = Stack[-11]
0x6f2: Pop(2)
0x6f3: @ CreateVectorVector(Stack[-8])
0x6f4: Pop(0)
0x6f5: Stack[-7] = (int) 1
0x6f6: Push("hit") // @poff=856
0x6f7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6f8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6f9: Pop(1)
0x6fa: Pop(0); Push((bool) Stack[-6] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: GOTO 0x706

0x6fd: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6fe: Push((float)0.7071067690849304)
0x6ff: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x701: @@ add(Stack[-5]); Obj=8 // @poff=898
0x702: Pop(0)
0x703: Push((int) 1)
0x704: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x705: GOTO 0x6f6

0x706: @@ size(Stack[-3]); Obj=8 // @poff=902
0x707: Pop(0)
0x708: Push(Stack[-3])
0x709: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x70a: @ irand(Stack[-2], Stack[-3])
0x70b: Pop(0)
0x70c: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=907
0x70d: Pop(0)
0x70e: PushEmpty(object, int, float, cvector, cvector)
0x70f: Stack[-26] = Stack[-5]
0x710: Stack[-25] = Stack[-4]
0x711: Stack[-24] = Stack[-3]
0x712: Stack[-6] = Stack[-2]
0x713: Stack[-1] = -Stack[-14]; Pop(0);
0x714: Call2 0x71d

0x715: Pop(5)
0x716: Return(); Pop(18)

0x717: Stack[-8] = 0
0x718: PushEmpty(object)
0x719: Stack[-22] = Stack[-1]
0x71a: Call2 0x6ad

0x71b: Pop(1)
0x71c: Return(); Pop(18)

0x71d: PushEmpty(object, object, object, object)
0x71e: @ GetScene(Stack[-2])
0x71f: Pop(0)
0x720: Push("scripted") // @poff=911
0x721: Push("blood_dir.xml") // @poff=929
0x722: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x723: Pop(2)
0x724: PushEmpty(object)
0x725: Stack[-10] = Stack[-1]
0x726: Call2 0x6ad

0x727: Pop(1)
0x728: Return(); Pop(4)

0x729: Stack[-1] = 0
0x72a: Stack[-2] = 0
0x72b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x72c: @@ GetPosition(Stack[-3]); Obj=7 // @poff=480
0x72d: Pop(0)
0x72e: @ GetPosition(Stack[-2])
0x72f: Pop(0)
0x730: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x731: Push(CvectorIndex(Stack[-1], 0))
0x732: Push(CvectorIndex(Stack[-2], 2))
0x733: @ RotateAsync(Stack[-2], Stack[-1])
0x734: Pop(2)
0x735: Return(); Pop(6)

0x736: PushEmpty(bool, bool)
0x737: @ IsLoaded(Stack[-1])
0x738: Pop(0)
0x739: Stack[-1] = Stack[-3]
0x73a: Return(); Pop(2)

0x73b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x73c: @@ GetPosition(Stack[-8]); Obj=20 // @poff=480
0x73d: Pop(0)
0x73e: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=644
0x73f: Pop(0)
0x740: Push(CvectorIndex(Stack[-8], 1))
0x741: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x742: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x743: @ GetPosition(Stack[-7])
0x744: Pop(0)
0x745: @ GetEyesHeight(Stack[-9])
0x746: Pop(0)
0x747: Push(CvectorIndex(Stack[-7], 1))
0x748: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x749: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x74a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x74b: Push(CvectorIndex(Stack[-6], 1))
0x74c: Stack[-1] = (int) 0
0x74d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x74e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x74f: Pop(1); Push(Sqrt(Stack[-1]))
0x750: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x751: Stack[-5] = -Stack[-6]; Pop(0);
0x752: Pop(0); Push(Stack[-6] * Stack[-19]);
0x753: PushEmpty(cvector, cvector)
0x754: Push([0.0, 1.0, 0.0])
0x755: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x756: Call2 0x7de

0x757: Pop(1)
0x758: Push((int) 25)
0x759: Pop(2); Push(Stack[-2] * Stack[-1]);
0x75a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x75b: Push([0.0, 10.0, 0.0])
0x75c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x75d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x75e: @ IsOverrideActive(Stack[-2])
0x75f: Pop(0)
0x760: Push(Stack[-2])
0x761: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x762: Stack[-21] = (bool) 0
0x763: Return(); Pop(18)

0x764: @ StopWorld()
0x765: Pop(0)
0x766: @ CameraTransit(Stack[-3], Stack[-5])
0x767: Pop(0)
0x768: Push(CvectorIndex(Stack[-4], 0))
0x769: Push(CvectorIndex(Stack[-5], 2))
0x76a: @ Rotate(Stack[-2], Stack[-1])
0x76b: Pop(2)
0x76c: PushEmpty(bool)
0x76d: Call2 0x86f

0x76e: Pop(0)
0x76f: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x770: GOTO 0x779

0x771: Push("head") // @poff=470
0x772: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x773: Pop(1)
0x774: Push(Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x776: Push("head") // @poff=470
0x777: @ LookAsyncCamera(Stack[-1])
0x778: Pop(1)
0x779: @ CameraWaitForPlayFinish()
0x77a: Pop(0)
0x77b: @ ResumeWorld()
0x77c: Pop(0)
0x77d: Stack[-21] = (bool) 1
0x77e: Return(); Pop(18)

0x77f: PushEmpty(bool, bool)
0x780: @ CameraSwitchToNormal()
0x781: Pop(0)
0x782: PushEmpty(bool)
0x783: Call2 0x86f

0x784: Pop(0)
0x785: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x786: GOTO 0x78f

0x787: Push("head") // @poff=470
0x788: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x789: Pop(1)
0x78a: Push(Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78c: Push("head") // @poff=470
0x78d: @ UnlookAsync(Stack[-1])
0x78e: Pop(1)
0x78f: Return(); Pop(2)

0x790: PushEmpty(float, float, float, float)
0x791: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x792: Pop(0)
0x793: Push((bool) 0)
0x794: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x795: Pop(1)
0x796: Return(); Pop(4)

0x797: PushEmpty(float, float, float, float)
0x798: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x799: Pop(0)
0x79a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x79b: Pop(0)
0x79c: Return(); Pop(4)

0x79d: PushEmpty(float, cvector, float, cvector)
0x79e: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=644
0x79f: Pop(0)
0x7a0: Stack[-1] = [0.0, 0.0, 0.0]
0x7a1: Push(CvectorIndex(Stack[-1], 1))
0x7a2: Stack[-3] = Stack[-1]
0x7a3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7a4: Push("head") // @poff=470
0x7a5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7a6: Pop(1)
0x7a7: Return(); Pop(4)

0x7a8: PushEmpty(bool)
0x7a9: Call2 0x86f

0x7aa: Pop(0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: @ lshStopSpeech()
0x7ad: Pop(0)
0x7ae: Return(); Pop(0)

0x7af: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7b0: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7b1: Pop(0)
0x7b2: Pop(0); Push((bool) Stack[-8] == 0)
0x7b3: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7b4: Stack[-7] = (int) 0
0x7b5: Push((int) 1)
0x7b6: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7b7: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7b8: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7b9: Pop(1)
0x7ba: Pop(0); Push((bool) Stack[-6] == 0)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: GOTO 0x7c0

0x7bd: Push((int) 1)
0x7be: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7bf: GOTO 0x7b5

0x7c0: Pop(0); Push((bool) Stack[-7] == 0)
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c2: Return(); Pop(16)

0x7c3: @ irand(Stack[-5], Stack[-7])
0x7c4: Pop(0)
0x7c5: Push((int) 1)
0x7c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7c7: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7c8: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7c9: Pop(0)
0x7ca: Push(Stack[-4])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7cc: @ GetEyesHeight(Stack[-3])
0x7cd: Pop(0)
0x7ce: @ GetDirection(Stack[-2])
0x7cf: Pop(0)
0x7d0: Push((int) 50)
0x7d1: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7d2: Push(CvectorIndex(Stack[-1], 1))
0x7d3: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7d4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7d5: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7d6: Pop(0)
0x7d7: Return(); Pop(16)

0x7d8: PushEmpty(object, object)
0x7d9: @ self(Stack[-1])
0x7da: Pop(0)
0x7db: Stack[-1] = Stack[-3]
0x7dc: Return(); Pop(2)

0x7dd: Stack[-1] = 0
0x7de: PushEmpty(float, float)
0x7df: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7e0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7e1: Push((float)9.999999974752427e-07)
0x7e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: Stack[-4] = [0.0, 0.0, 0.0]
0x7e5: Return(); Pop(2)

0x7e6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7e7: Return(); Pop(2)

0x7e8: PushEmpty()
0x7e9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7eb: Stack[-2] = Stack[-3]
0x7ec: GOTO 0x7ee

0x7ed: Stack[-1] = Stack[-3]
0x7ee: Return(); Pop(0)

0x7ef: PushEmpty()
0x7f0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f2: Stack[-2] = Stack[-4]
0x7f3: Return(); Pop(0)

0x7f4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f6: Stack[-1] = Stack[-4]
0x7f7: Return(); Pop(0)

0x7f8: Stack[-3] = Stack[-4]
0x7f9: Return(); Pop(0)

0x7fa: PushEmpty(object, object)
0x7fb: @ CreateFloatVector(Stack[-1])
0x7fc: Pop(0)
0x7fd: @@ add(Stack[-3]); Obj=1 // @poff=898
0x7fe: Pop(0)
0x7ff: Push((int) 15)
0x800: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x801: Pop(1)
0x802: Return(); Pop(2)

0x803: Stack[-1] = 0
0x804: PushEmpty(object, object)
0x805: @ FindActor(Stack[-1], Stack[-4])
0x806: Pop(0)
0x807: Pop(0); PushNull((bool) Stack[-1] == 0)
0x808: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x809: Stack[-5] = (bool) 0
0x80a: Return(); Pop(2)

0x80b: @ Trigger(Stack[-1], Stack[-3])
0x80c: Pop(0)
0x80d: Stack[-5] = (bool) 1
0x80e: Return(); Pop(2)

0x80f: Stack[-1] = 0
0x810: PushEmpty(bool, bool)
0x811: @ IsPlayerActor(Stack[-3], Stack[-1])
0x812: Pop(0)
0x813: Push(Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x815: Push("attack") // @poff=180
0x816: @ PlayGlobalMusic(Stack[-1])
0x817: Pop(1)
0x818: Return(); Pop(2)

0x819: PushEmpty(object, object)
0x81a: @ GetScene(Stack[-1])
0x81b: Pop(0)
0x81c: Push("battle") // @poff=957
0x81d: PushEmpty(object)
0x81e: Call2 0x7d8

0x81f: Pop(0)
0x820: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x821: Pop(2)
0x822: Return(); Pop(2)

0x823: Stack[-1] = 0
0x824: PushEmpty(string, string)
0x825: Stack[-1] = "idle" // @poff=146
0x826: Push(Stack[-3])
0x827: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x828: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x829: Stack[-1] = Stack[-4]
0x82a: Return(); Pop(2)

0x82b: PushEmpty(int, bool, int, bool)
0x82c: Stack[-2] = (int) 0
0x82d: Push("all") // @poff=138
0x82e: PushEmpty(string, int)
0x82f: Stack[-5] = Stack[-1]
0x830: Call2 0x824

0x831: Pop(1)
0x832: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x833: Pop(2)
0x834: Pop(0); Push((bool) Stack[-1] == 0)
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: GOTO 0x83a

0x837: Push((int) 1)
0x838: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x839: GOTO 0x82d

0x83a: Stack[-2] = Stack[-5]
0x83b: Return(); Pop(4)

0x83c: PushEmpty()
0x83d: PushEmpty(bool, string, string)
0x83e: Stack[-2] = "quest_d1_01" // @poff=156
0x83f: Stack[-1] = "attack" // @poff=180
0x840: Call2 0x804

0x841: Pop(3)
0x842: Return(); Pop(0)

0x843: PushEmpty(int, int)
0x844: Push("branch") // @poff=971
0x845: @ GetVariable(Stack[-1], Stack[-2])
0x846: Pop(1)
0x847: Push((int) 0)
0x848: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x84a: Stack[-3] = (int) 1
0x84b: Return(); Pop(2)

0x84c: GOTO 0x852

0x84d: Push((int) 1)
0x84e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x850: Stack[-3] = (int) 2
0x851: Return(); Pop(2)

0x852: Stack[-3] = (int) 3
0x853: Return(); Pop(2)

0x854: PushEmpty(int, int)
0x855: Push("branch") // @poff=971
0x856: @ GetVariable(Stack[-1], Stack[-2])
0x857: Pop(1)
0x858: Stack[-1] = Stack[-3]
0x859: Return(); Pop(2)

0x85a: PushEmpty()
0x85b: PushEmpty(int)
0x85c: Call2 0x854

0x85d: Pop(0)
0x85e: Push((int) 1)
0x85f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x861: @ WorkWithCorpse(Stack[-1])
0x862: Pop(0)
0x863: GOTO 0x866

0x864: @ Barter(Stack[-1])
0x865: Pop(0)
0x866: Return(); Pop(0)

0x867: Stack[-1] = (int) 515568
0x868: Return(); Pop(0)

0x869: Stack[-1] = (int) 503353
0x86a: Return(); Pop(0)

0x86b: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=985
0x86c: Return(); Pop(0)

0x86d: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=1025
0x86e: Return(); Pop(0)

0x86f: Stack[-1] = (bool) 0
0x870: Return(); Pop(0)

0x871: PushEmpty()
0x872: PushEmpty(object)
0x873: Stack[-2] = Stack[-1]
0x874: Push(-1, 0); TaskCall(5)
0x875: Call2 0x562

0x876: Pop(-1, 0); TaskReturn
0x877: Pop(1)
0x878: Return(); Pop(0)

0x879: PushEmpty()
0x87a: PushEmpty(object, int, float)
0x87b: Stack[-7] = Stack[-3]
0x87c: Stack[-6] = Stack[-2]
0x87d: Stack[-5] = Stack[-1]
0x87e: Call2 0x6d9

0x87f: Pop(3)
0x880: Return(); Pop(0)

0x881: PushEmpty()
0x882: PushEmpty(object, int, float, cvector, cvector)
0x883: Stack[-11] = Stack[-5]
0x884: Stack[-10] = Stack[-4]
0x885: Stack[-9] = Stack[-3]
0x886: Stack[-7] = Stack[-2]
0x887: Stack[-6] = Stack[-1]
0x888: Call2 0x71d

0x889: Pop(5)
0x88a: Return(); Pop(0)

0x88b: PushEmpty(float, float)
0x88c: Push("health") // @poff=742
0x88d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x88f: Push("health") // @poff=742
0x890: @ GetProperty(Stack[-1], Stack[-2])
0x891: Pop(1)
0x892: Push((int) 0)
0x893: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: @ SignalDeath(Stack[-4])
0x896: Pop(0)
0x897: Return(); Pop(2)

0x898: PushEmpty()
0x899: PushEmpty(object)
0x89a: Stack[-2] = Stack[-1]
0x89b: Call2 0x871

0x89c: Pop(1)
0x89d: Return(); Pop(0)

0x89e: PushEmpty(object)
0x89f: Call2 0x7d8

0x8a0: Pop(0)
0x8a1: @ RemoveActor(Stack[-1])
0x8a2: Pop(1)
0x8a3: @ Hold()
0x8a4: Pop(0)
0x8a5: Return(); Pop(0)

