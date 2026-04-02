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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f00640031005f00300031000000610074007400610063006b0000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e6365004765745046506f736974696f6e00610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f006f00660066000000610074007400610063006b005f0062006500670069006e00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c00650000005f000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e670068006500610064000000476574506f736974696f6e00770061006c006b000000720075006e0000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006900720065000000620075006c006c006500740000007000680079007300000070006c0061007900650072000000480061007300500072006f0070006500720074007900000048617350726f7065727479006800650061006c00740068000000610072006d006f007200000047657450726f706572747900610072006d006f0072005f00000053657450726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f00720065006100630074000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c00000062006100740074006c00650000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
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
	StopGroup0 (0 args)
	RemoveActor (1 args)
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
	IsLoaded (1 args)
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

RunOp = 0xf3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xcc Vars = (object)
		EVENT_17 Op = 0xd7 Vars = (object)
		EVENT_26 Op = 0xe2 Vars = (string)
		EVENT_5 Op = 0x108 Vars = ()
		EVENT_6 Op = 0x10d Vars = ()
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x44e Vars = (int)
		EVENT_1 Op = 0x469 Vars = (object)
		EVENT_2 Op = 0x478 Vars = (object)
		EVENT_10 Op = 0x4fe Vars = (object)
		EVENT_41 Op = 0x509 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x52c Vars = (object)
		EVENT_22 Op = 0x5ab Vars = (object, int, float, float)
		EVENT_16 Op = 0x5ad Vars = (object, string)
		EVENT_41 Op = 0x5af Vars = (object)

Events:
EVENT_22 Op = 0x834 Vars = (object, int, float, float)
EVENT_43 Op = 0x83c Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x846 Vars = (object, string)
EVENT_41 Op = 0x853 Vars = (object)
EVENT_6 Op = 0x859 Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x6f6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x824

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x822

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x826

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x828

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7fe

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
0x41: Call2 0x73a

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
0x54: Push((int) 521499)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 521607)
0x5a: Push((int) -1)
0x5b: Push((int) 22774)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 521500)
0x5f: Push((int) -1)
0x60: Push((int) 22661)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x82a

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x74b

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
0x86: Call2 0x82a

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
0x96: Call2 0x752

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x763

0x9f: Pop(0)
0xa0: Push((int) 22774)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x7f7

0xa7: Pop(2)
0xa8: Push((int) 22660)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 521499)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 521607)
0xb5: Push((int) -1)
0xb6: Push((int) 22774)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: Push((int) 521500)
0xba: Push((int) -1)
0xbb: Push((int) 22661)
0xbc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc0: PushEmpty(bool)
0xc1: Call2 0x82a

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc4: @ lshStopAnimation()
0xc5: Pop(0)
0xc6: GOTO 0xc9

0xc7: @ StopAnimation()
0xc8: Pop(0)
0xc9: Return(); Pop(0)

0xca: GOTO 0x9b

0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: PushEmpty()
0xce: Call2 0x170

0xcf: Pop(0)
0xd0: PushEmpty(int, object)
0xd1: Stack[-3] = Stack[-1]
0xd2: Push(-2, 1); TaskCall(0)
0xd3: Call2 0x0

0xd4: Pop(-2, 1); TaskReturn
0xd5: Pop(2)
0xd6: Return(); Pop(0)

0xd7: PushEmpty(bool, bool)
0xd8: @ IsPlayerActor(Stack[-3], Stack[-1])
0xd9: Pop(0)
0xda: Push(Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: PushEmpty(bool, string, string)
0xdd: Stack[-2] = "quest_d1_01" // @poff=156
0xde: Stack[-1] = "attack" // @poff=180
0xdf: Call2 0x7bf

0xe0: Pop(3)
0xe1: Return(); Pop(2)

0xe2: PushEmpty()
0xe3: Push("attack") // @poff=180
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x170

0xe8: Pop(0)
0xe9: PushEmpty(object)
0xea: PushEmpty(object)
0xeb: Call2 0x5c6

0xec: Stack[-1] = Stack[-2]
0xed: Pop(1)
0xee: Push(-1, 6); TaskCall(3)
0xef: Call2 0x175

0xf0: Pop(-1, 6); TaskReturn
0xf1: Pop(1)
0xf2: Return(); Pop(0)

0xf3: PushEmpty(float, float)
0xf4: PushEmpty(bool)
0xf5: Call2 0x6f1

0xf6: Pop(0)
0xf7: Pop(1); Push((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf9: @ Hold()
0xfa: Pop(0)
0xfb: GOTO 0xf4

0xfc: Push((int) 3)
0xfd: @ rand(Stack[-2], Stack[-1])
0xfe: Pop(1)
0xff: Push((int) 3)
0x100: Pop(1); Push(Stack[-2] + Stack[-1]);
0x101: @ Sleep(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty()
0x104: Call2 0x11f

0x105: Pop(0)
0x106: GOTO 0xf4

0x107: Return(); Pop(2)

0x108: @ StopGroup0()
0x109: Pop(0)
0x10a: @ sync()
0x10b: Pop(0)
0x10c: Return(); Pop(0)

0x10d: PushEmpty(bool)
0x10e: Stack[-1] = (bool) 0
0x10f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x110: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x111: PushEmpty(bool)
0x112: Call2 0x11d

0x113: Pop(0)
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Stack[-1] = (bool) 1
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: PushEmpty(object)
0x118: Call2 0x793

0x119: Pop(0)
0x11a: @ RemoveActor(Stack[-1])
0x11b: Pop(1)
0x11c: Return(); Pop(0)

0x11d: Stack[-1] = (bool) 1
0x11e: Return(); Pop(0)

0x11f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x120: @ WaitForAnimEnd()
0x121: Pop(0)
0x122: PushEmpty(bool)
0x123: Call2 0x6f1

0x124: Pop(0)
0x125: Pop(1); Push((bool) Stack[-1] == 0)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Return(); Pop(14)

0x128: PushEmpty(int)
0x129: Call2 0x7e6

0x12a: Stack[-1] = Stack[-8]
0x12b: Pop(1)
0x12c: Stack[-6] = (int) 0
0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 0
0x12f: Push((int) 5)
0x130: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(bool)
0x133: Call2 0x6f1

0x134: Pop(0)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x138: Push((int) 3)
0x139: @ irand(Stack[-6], Stack[-1])
0x13a: Pop(1)
0x13b: Push((int) 0)
0x13c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13e: Push(Stack[-7])
0x13f: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x140: @ irand(Stack[-4], Stack[-7])
0x141: Pop(0)
0x142: Push("all") // @poff=138
0x143: PushEmpty(string, int)
0x144: Stack[-7] = Stack[-1]
0x145: Call2 0x7df

0x146: Pop(1)
0x147: @ PlayAnimation(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: @ WaitForAnimEnd(Stack[-3])
0x14a: Pop(0)
0x14b: Pop(0); Push((bool) Stack[-3] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: GOTO 0x16b

0x14e: GOTO 0x160

0x14f: Push((int) 1)
0x150: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x152: Push((int) 4)
0x153: @ rand(Stack[-3], Stack[-1])
0x154: Pop(1)
0x155: Push((int) 1)
0x156: Pop(1); Push(Stack[-3] + Stack[-1]);
0x157: @ Sleep(Stack[-1], Stack[-2])
0x158: Pop(1)
0x159: Pop(0); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: GOTO 0x16b

0x15c: GOTO 0x160

0x15d: Push(Stack[-6])
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: GOTO 0x16b

0x160: PushEmpty(bool)
0x161: Call2 0x16e

0x162: Pop(0)
0x163: Pop(1); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: GOTO 0x16b

0x166: @ ResetAAS()
0x167: Pop(0)
0x168: Push((int) 1)
0x169: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x16a: GOTO 0x12d

0x16b: @ ResetAAS()
0x16c: Pop(0)
0x16d: Return(); Pop(14)

0x16e: Stack[-1] = (bool) 1
0x16f: Return(); Pop(0)

0x170: @ StopAnimation()
0x171: Pop(0)
0x172: @ StopGroup0()
0x173: Pop(0)
0x174: Return(); Pop(0)

0x175: PushEmpty()
0x176: PushEmpty(object, bool, float)
0x177: Stack[-4] = Stack[-3]
0x178: Stack[-2] = (bool) 1
0x179: Stack[-1] = (float) 180.0
0x17a: Call2 0x187

0x17b: Pop(3)
0x17c: Push((int) 1)
0x17d: @ Sleep(Stack[-1])
0x17e: Pop(1)
0x17f: GOTO 0x176

0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: Stack[-3] = (float) 0.10000000149011612
0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: Stack[-3] = (int) 0
0x186: Return(); Pop(0)

0x187: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x188: PushEmpty()
0x189: Call2 0x26c

0x18a: Pop(0)
0x18b: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x18c: Push("@GetAttackDistance") // @poff=194
0x18d: Push((int) 1)
0x18e: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=232
0x191: Pop(0)
0x192: Push((int) 50)
0x193: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x194: GOTO 0x196

0x195: Stack[-23] = Stack[-11]
0x196: Push((int) 150)
0x197: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Stack[-11] = (int) 150
0x19a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19b: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x19c: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0x19d: Pop(0)
0x19e: Push(Stack[-8])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a0: Push("attack") // @poff=180
0x1a1: @ PlayGlobalMusic(Stack[-1])
0x1a2: Pop(1)
0x1a3: PushEmpty(object)
0x1a4: Call2 0x793

0x1a5: Pop(0)
0x1a6: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1a7: Pop(1)
0x1a8: Push(Stack[-24])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-7] = (bool) 0
0x1ab: GOTO 0x1ad

0x1ac: Stack[-7] = (bool) 1
0x1ad: Push((float)400.0)
0x1ae: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call2 0x650

0x1b4: Pop(1)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x1ba: PushEmpty()
0x1bb: Call2 0x409

0x1bc: Pop(0)
0x1bd: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=250
0x1be: Pop(0)
0x1bf: @ GetPFPosition(Stack[-9])
0x1c0: Pop(0)
0x1c1: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1c2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1c3: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1c4: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c6: PushEmpty(bool, object, float, float, bool, bool)
0x1c7: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Stack[-17] = Stack[-4]
0x1c9: Stack[-3] = (float) 10000.0
0x1ca: Stack[-2] = (bool) 1
0x1cb: Stack[-1] = (bool) 0
0x1cc: Push(-6, 3); TaskCall(4)
0x1cd: Call2 0x41d

0x1ce: Pop(-6, 3); TaskReturn
0x1cf: Pop(5)
0x1d0: Pop(1); Push((bool) Stack[-1] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: GOTO 0x25b

0x1d3: Stack[-7] = (bool) 0
0x1d4: GOTO 0x25a

0x1d5: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1d6: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x1d8: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=250
0x1d9: Pop(0)
0x1da: @ CanReachByPF(Stack[-2], Stack[-3])
0x1db: Pop(0)
0x1dc: Pop(0); Push((bool) Stack[-2] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1de: PushEmpty(bool, object, float, float, bool, bool)
0x1df: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Stack[-17] = Stack[-4]
0x1e1: Stack[-3] = (float) 10000.0
0x1e2: Stack[-2] = (bool) 1
0x1e3: Stack[-1] = (bool) 0
0x1e4: Push(-6, 3); TaskCall(4)
0x1e5: Call2 0x41d

0x1e6: Pop(-6, 3); TaskReturn
0x1e7: Pop(5)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: GOTO 0x25b

0x1eb: Stack[-7] = (bool) 0
0x1ec: GOTO 0x1af

0x1ed: Pop(0); Push((bool) Stack[-7] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1ef: PushEmpty(object)
0x1f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f1: Call2 0x6e6

0x1f2: Pop(1)
0x1f3: Push("all") // @poff=138
0x1f4: Push("attack_on") // @poff=264
0x1f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: @ WaitForAnimEnd()
0x1f8: Pop(0)
0x1f9: PushEmpty()
0x1fa: Call2 0x409

0x1fb: Pop(0)
0x1fc: @ StopAsync()
0x1fd: Pop(0)
0x1fe: Stack[-7] = (bool) 1
0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0x650

0x202: Pop(1)
0x203: Pop(1); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x25b

0x206: @ rand(Stack[-1])
0x207: Pop(0)
0x208: PushEmpty(bool)
0x209: Stack[-1] = (bool) 1
0x20a: Push((float)0.25)
0x20b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x20c: IF (Stack[-1] == 1) GOTO 0x212; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call2 0x3de

0x20f: Pop(0)
0x210: IF (Stack[-1] == 1) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 0
0x212: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x213: @ Face(Stack[-0]T)
0x214: Pop(0)
0x215: PushEmpty()
0x216: Call2 0x410

0x217: Pop(0)
0x218: Push("all") // @poff=138
0x219: Push("attack_stay") // @poff=284
0x21a: @ PlayAnimation(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: PushEmpty(bool, float)
0x21d: Stack[-25] = Stack[-1]
0x21e: Call2 0x35a

0x21f: Pop(2)
0x220: @ StopAsync()
0x221: Pop(0)
0x222: GOTO 0x251

0x223: @ Face(Stack[-0]T)
0x224: Pop(0)
0x225: Push("all") // @poff=138
0x226: Push("fjump") // @poff=308
0x227: @ PlayAnimation(Stack[-2], Stack[-1])
0x228: Pop(2)
0x229: @ WaitForAnimEnd()
0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x409

0x22d: Pop(0)
0x22e: Push([0.0, 0.0, 0.0])
0x22f: @ SetSpeed(Stack[-1])
0x230: Pop(1)
0x231: @ Stop()
0x232: Pop(0)
0x233: @ StopAsync()
0x234: Pop(0)
0x235: PushEmpty(bool)
0x236: Call2 0x3de

0x237: Pop(0)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23c: Call2 0x650

0x23d: Pop(1)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x25b

0x241: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=250
0x242: Pop(0)
0x243: @ GetPFPosition(Stack[-9])
0x244: Pop(0)
0x245: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x246: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x247: Pop(0); Push(Stack[-23] * Stack[-23]);
0x248: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24a: PushEmpty(bool, float)
0x24b: Stack[-25] = Stack[-1]
0x24c: Call2 0x2b6

0x24d: Pop(1)
0x24e: Pop(1); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x25b

0x251: GOTO 0x25a

0x252: PushEmpty(bool, float)
0x253: Stack[-25] = Stack[-1]
0x254: Call2 0x2b6

0x255: Pop(1)
0x256: Pop(1); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: GOTO 0x25b

0x259: Stack[-7] = (bool) 1
0x25a: GOTO 0x1af

0x25b: @ WaitForAnimEnd()
0x25c: Pop(0)
0x25d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Return(); Pop(22)

0x260: Push("all") // @poff=138
0x261: Push("attack_off") // @poff=320
0x262: @ PlayAnimation(Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: @ WaitForAnimEnd()
0x265: Pop(0)
0x266: Push(Stack[-8])
0x267: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x268: Push((float)2.0)
0x269: @ Sleep(Stack[-1])
0x26a: Pop(1)
0x26b: Return(); Pop(22)

0x26c: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x26d: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x26e: Push("all") // @poff=138
0x26f: Push("attack_begin") // @poff=342
0x270: Push((int) 1)
0x271: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x272: Pop(2); Push(Stack[-2] + Stack[-1]);
0x273: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x274: Pop(2)
0x275: Pop(0); Push((bool) Stack[-3] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27b

0x278: Push((int) 1)
0x279: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x27a: GOTO 0x26e

0x27b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x27c: Push("attack") // @poff=180
0x27d: Push((int) 1)
0x27e: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x27f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x280: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x281: Pop(1)
0x282: Pop(0); Push((bool) Stack[-2] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: GOTO 0x288

0x285: Push((int) 1)
0x286: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x287: GOTO 0x27c

0x288: Push("all") // @poff=138
0x289: Push("bjump") // @poff=368
0x28a: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(2)
0x28c: Push(CvectorIndex(Stack[-1], 2))
0x28d: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x28e: Return(); Pop(6)

0x28f: PushEmpty(object, float, float, object, float, float)
0x290: Push((float)0.8999999761581421)
0x291: Pop(1); Push(Stack[-9] * Stack[-1]);
0x292: @ GetVictim(Stack[-1], Stack[-4])
0x293: Pop(1)
0x294: @ ReportAttack(Stack[-0]T)
0x295: Pop(0)
0x296: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x297: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x298: PushEmpty(float, object, int)
0x299: Stack[-6] = Stack[-2]
0x29a: Stack[-10] = Stack[-1]
0x29b: Call2 0x181

0x29c: Stack[-3] = Stack[-5]
0x29d: Pop(3)
0x29e: PushEmpty(float, object, float, int)
0x29f: Stack[-7] = Stack[-3]
0x2a0: Stack[-6] = Stack[-2]
0x2a1: PushEmpty(int, object, int)
0x2a2: Stack[-10] = Stack[-2]
0x2a3: Stack[-14] = Stack[-1]
0x2a4: Call2 0x184

0x2a5: Stack[-3] = Stack[-4]
0x2a6: Pop(3)
0x2a7: Call2 0x5de

0x2a8: Stack[-4] = Stack[-5]
0x2a9: Pop(4)
0x2aa: PushEmpty(int)
0x2ab: Call2 0x40e

0x2ac: Pop(0)
0x2ad: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x2ae: Pop(1)
0x2af: PushEmpty(object, float)
0x2b0: Stack[-5] = Stack[-2]
0x2b1: Stack[-3] = Stack[-1]
0x2b2: Call2 0x415

0x2b3: Pop(2)
0x2b4: Return(); Pop(6)

0x2b5: Stack[-3] = 0
0x2b6: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2b7: PushEmpty()
0x2b8: Call2 0x409

0x2b9: Pop(0)
0x2ba: @ irand(Stack[-4], Stack[-1]T)
0x2bb: Pop(0)
0x2bc: Push((int) 1)
0x2bd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2be: @ Face(Stack[-0]T)
0x2bf: Pop(0)
0x2c0: Push((bool) 1)
0x2c1: @ SetAttackState(Stack[-1])
0x2c2: Pop(1)
0x2c3: PushEmpty()
0x2c4: Call2 0x7d4

0x2c5: Pop(0)
0x2c6: Push("all") // @poff=138
0x2c7: Push("attack_begin") // @poff=342
0x2c8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: @ WaitForAnimEnd()
0x2cc: Pop(0)
0x2cd: PushEmpty()
0x2ce: Call2 0x3e9

0x2cf: Pop(0)
0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call2 0x650

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d6: @ StopAsync()
0x2d7: Pop(0)
0x2d8: Stack[-10] = (bool) 0
0x2d9: Return(); Pop(8)

0x2da: PushEmpty(float, int)
0x2db: Stack[-11] = Stack[-2]
0x2dc: Stack[-6] = Stack[-1]
0x2dd: Call2 0x28f

0x2de: Pop(2)
0x2df: Push("all") // @poff=138
0x2e0: Push("attack_middle") // @poff=380
0x2e1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e2: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2e3: Pop(2)
0x2e4: Push(Stack[-3])
0x2e5: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x2e6: PushEmpty()
0x2e7: Call2 0x7d4

0x2e8: Pop(0)
0x2e9: Push("all") // @poff=138
0x2ea: Push("attack_middle") // @poff=380
0x2eb: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ed: Pop(2)
0x2ee: @ WaitForAnimEnd()
0x2ef: Pop(0)
0x2f0: PushEmpty()
0x2f1: Call2 0x409

0x2f2: Pop(0)
0x2f3: PushEmpty(bool, object)
0x2f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f5: Call2 0x650

0x2f6: Pop(1)
0x2f7: Pop(1); Push((bool) Stack[-1] == 0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f9: @ StopAsync()
0x2fa: Pop(0)
0x2fb: Stack[-10] = (bool) 0
0x2fc: Return(); Pop(8)

0x2fd: PushEmpty(float, int)
0x2fe: Stack[-11] = Stack[-2]
0x2ff: Stack[-6] = Stack[-1]
0x300: Call2 0x28f

0x301: Pop(2)
0x302: Stack[-2] = (int) 1
0x303: Push("attack_middle") // @poff=380
0x304: Pop(1); Push(Stack[-1] + Stack[-5]);
0x305: Push("_") // @poff=408
0x306: Pop(2); Push(Stack[-2] + Stack[-1]);
0x307: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x308: Push("all") // @poff=138
0x309: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x30a: Pop(1)
0x30b: Pop(0); Push((bool) Stack[-3] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: GOTO 0x32b

0x30e: PushEmpty()
0x30f: Call2 0x7d4

0x310: Pop(0)
0x311: Push("all") // @poff=138
0x312: @ PlayAnimation(Stack[-1], Stack[-2])
0x313: Pop(1)
0x314: @ WaitForAnimEnd()
0x315: Pop(0)
0x316: PushEmpty()
0x317: Call2 0x409

0x318: Pop(0)
0x319: PushEmpty(bool, object)
0x31a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31b: Call2 0x650

0x31c: Pop(1)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31f: @ StopAsync()
0x320: Pop(0)
0x321: Stack[-10] = (bool) 0
0x322: Return(); Pop(8)

0x323: PushEmpty(float, int)
0x324: Stack[-11] = Stack[-2]
0x325: Stack[-6] = Stack[-1]
0x326: Call2 0x28f

0x327: Pop(2)
0x328: Push((int) 1)
0x329: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x32a: GOTO 0x303

0x32b: Push((bool) 0)
0x32c: @ SetAttackState(Stack[-1])
0x32d: Pop(1)
0x32e: Push("all") // @poff=138
0x32f: Push("attack_end") // @poff=412
0x330: Pop(1); Push(Stack[-1] + Stack[-6]);
0x331: @ PlayAnimation(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: PushEmpty(bool)
0x334: Call2 0x417

0x335: Pop(0)
0x336: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x337: PushEmpty(bool, float)
0x338: Stack[-1] = (float) 0.75
0x339: Call2 0x33f

0x33a: Pop(2)
0x33b: @ StopAsync()
0x33c: Pop(0)
0x33d: Stack[-10] = (bool) 1
0x33e: Return(); Pop(8)

0x33f: PushEmpty(float, bool, float, bool)
0x340: @ rand(Stack[-2])
0x341: Pop(0)
0x342: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x343: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x344: @ IsAnimationPlaying(Stack[-1])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x352

0x349: PushEmpty(bool)
0x34a: Call2 0x3a1

0x34b: Pop(0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-6] = (bool) 1
0x34e: Return(); Pop(4)

0x34f: @ sync()
0x350: Pop(0)
0x351: GOTO 0x344

0x352: GOTO 0x358

0x353: @ WaitForAnimEnd()
0x354: Pop(0)
0x355: PushEmpty()
0x356: Call2 0x409

0x357: Pop(0)
0x358: Stack[-6] = (bool) 0
0x359: Return(); Pop(4)

0x35a: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x35b: @ IsAnimationPlaying(Stack[-5])
0x35c: Pop(0)
0x35d: Pop(0); Push((bool) Stack[-5] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: GOTO 0x380

0x360: PushEmpty(bool)
0x361: Call2 0x3a1

0x362: Pop(0)
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-12] = (bool) 1
0x365: Return(); Pop(10)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x368: Call2 0x650

0x369: Pop(1)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-12] = (bool) 0
0x36d: Return(); Pop(10)

0x36e: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=250
0x36f: Pop(0)
0x370: @ GetPFPosition(Stack[-3])
0x371: Pop(0)
0x372: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x373: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x374: Pop(0); Push(Stack[-11] * Stack[-11]);
0x375: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x377: PushEmpty(bool, float)
0x378: Stack[-13] = Stack[-1]
0x379: Call2 0x2b6

0x37a: Pop(2)
0x37b: Stack[-12] = (bool) 1
0x37c: Return(); Pop(10)

0x37d: @ sync()
0x37e: Pop(0)
0x37f: GOTO 0x35b

0x380: PushEmpty()
0x381: Call2 0x409

0x382: Pop(0)
0x383: Stack[-12] = (bool) 0
0x384: Return(); Pop(10)

0x385: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x388: Call2 0x650

0x389: Pop(1)
0x38a: Pop(1); Push((bool) Stack[-1] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38c: Stack[-11] = (bool) 0
0x38d: Return(); Pop(10)

0x38e: PushEmpty(bool)
0x38f: Call2 0x3de

0x390: Pop(0)
0x391: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x392: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=250
0x393: Pop(0)
0x394: @ GetPFPosition(Stack[-4])
0x395: Pop(0)
0x396: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x397: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x398: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=232
0x399: Pop(0)
0x39a: Push((int) 50)
0x39b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x39c: Pop(0); Push(Stack[-1] * Stack[-1]);
0x39d: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x39e: Return(); Pop(10)

0x39f: Stack[-11] = (bool) 0
0x3a0: Return(); Pop(10)

0x3a1: PushEmpty(bool)
0x3a2: Stack[-1] = (bool) 0
0x3a3: PushEmpty(bool)
0x3a4: Call2 0x385

0x3a5: Pop(0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a7: PushEmpty(bool)
0x3a8: Call2 0x3b1

0x3a9: Pop(0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Stack[-1] = (bool) 1
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-1] = (bool) 1
0x3ae: Return(); Pop(0)

0x3af: Stack[-1] = (bool) 0
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3b2: @ GetScene(Stack[-5])
0x3b3: Pop(0)
0x3b4: Stack[-4] = (bool) 0
0x3b5: PushEmpty(cvector, object)
0x3b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b7: Call2 0x5bf

0x3b8: Pop(1)
0x3b9: Pop(1); Push(( -Stack[-1])
0x3ba: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x3bb: Pop(1)
0x3bc: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: GOTO 0x3db

0x3bf: @ Face(Stack[-0]T)
0x3c0: Pop(0)
0x3c1: Push("all") // @poff=138
0x3c2: Push("bjump") // @poff=368
0x3c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c4: Pop(2)
0x3c5: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=250
0x3c6: Pop(0)
0x3c7: @ GetPFPosition(Stack[-1])
0x3c8: Pop(0)
0x3c9: @ WaitForAnimEnd()
0x3ca: Pop(0)
0x3cb: PushEmpty()
0x3cc: Call2 0x409

0x3cd: Pop(0)
0x3ce: @ StopAsync()
0x3cf: Pop(0)
0x3d0: Push([0.0, 0.0, 0.0])
0x3d1: @ SetSpeed(Stack[-1])
0x3d2: Pop(1)
0x3d3: Stack[-4] = (bool) 1
0x3d4: PushEmpty(bool)
0x3d5: Call2 0x385

0x3d6: Pop(0)
0x3d7: Pop(1); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: GOTO 0x3db

0x3da: GOTO 0x3b5

0x3db: Stack[-4] = Stack[-11]
0x3dc: Return(); Pop(10)

0x3dd: Stack[-5] = 0
0x3de: PushEmpty(bool, bool)
0x3df: Push("IsAttacking") // @poff=434
0x3e0: Push((int) 1)
0x3e1: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e3: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=458
0x3e4: Pop(0)
0x3e5: Stack[-1] = Stack[-3]
0x3e6: Return(); Pop(2)

0x3e7: Stack[-3] = (bool) 0
0x3e8: Return(); Pop(2)

0x3e9: PushEmpty(float, int, float, int)
0x3ea: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Return(); Pop(4)

0x3ed: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3ef: Push((int) -1)
0x3f0: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3f1: Push((int) 0)
0x3f2: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: Return(); Pop(4)

0x3f5: @ rand(Stack[-2])
0x3f6: Pop(0)
0x3f7: PushEmpty(float)
0x3f8: Call2 0x41b

0x3f9: Pop(0)
0x3fa: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3fc: @ irand(Stack[-1], Stack[-2]T)
0x3fd: Pop(0)
0x3fe: Push((int) 1)
0x3ff: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x400: Push("attack") // @poff=180
0x401: Pop(1); Push(Stack[-1] + Stack[-2]);
0x402: @ Speak(Stack[-1])
0x403: Pop(1)
0x404: PushEmpty(int)
0x405: Call2 0x419

0x406: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x407: Pop(1)
0x408: Return(); Pop(4)

0x409: PushEmpty(object)
0x40a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40b: Call2 0x7cb

0x40c: Pop(1)
0x40d: Return(); Pop(0)

0x40e: Stack[-1] = (int) 0
0x40f: Return(); Pop(0)

0x410: PushEmpty(string)
0x411: Stack[-1] = "attack_stay" // @poff=284
0x412: Call2 0x76a

0x413: Pop(1)
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: Return(); Pop(0)

0x417: Stack[-1] = (bool) 1
0x418: Return(); Pop(0)

0x419: Stack[-1] = (int) 1
0x41a: Return(); Pop(0)

0x41b: Stack[-1] = (float) 0.5
0x41c: Return(); Pop(0)

0x41d: PushEmpty(bool, bool, bool, bool)
0x41e: PushEmpty(object)
0x41f: Stack[-10] = Stack[-1]
0x420: Call2 0x7cb

0x421: Pop(1)
0x422: Push((int) 1)
0x423: Push((int) 5)
0x424: @ SetTimer(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: @ CanSee(Stack[-2], Stack[-9])
0x427: Pop(0)
0x428: Push(Stack[-2])
0x429: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x42b: PushEmpty(object)
0x42c: Stack[-10] = Stack[-1]
0x42d: Call2 0x758

0x42e: Pop(1)
0x42f: GOTO 0x431

0x430: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x431: PushEmpty(bool, object)
0x432: Stack[-11] = Stack[-1]
0x433: Call2 0x5cd

0x434: Pop(1)
0x435: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x436: PushEmpty(object)
0x437: Call2 0x793

0x438: Pop(0)
0x439: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x43a: Pop(1)
0x43b: PushEmpty(bool, object, float, float, bool, bool)
0x43c: Stack[-15] = Stack[-5]
0x43d: Stack[-14] = Stack[-4]
0x43e: Stack[-13] = Stack[-3]
0x43f: Stack[-12] = Stack[-2]
0x440: Stack[-11] = Stack[-1]
0x441: Call2 0x486

0x442: Stack[-6] = Stack[-7]
0x443: Pop(6)
0x444: Push( Stack[2 + Tasks[-1].StackPointer] )
0x445: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x446: Push("head") // @poff=470
0x447: @ UnlookAsync(Stack[-1])
0x448: Pop(1)
0x449: Push((int) 1)
0x44a: @ KillTimer(Stack[-1])
0x44b: Pop(1)
0x44c: Stack[-1] = Stack[-10]
0x44d: Return(); Pop(4)

0x44e: PushEmpty()
0x44f: Push((int) 1)
0x450: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x452: PushEmpty(object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call2 0x7cb

0x455: Pop(1)
0x456: GOTO 0x45b

0x457: PushEmpty(int)
0x458: Stack[-2] = Stack[-1]
0x459: Call2 0x4ec

0x45a: Pop(1)
0x45b: Return(); Pop(0)

0x45c: Push((int) 1)
0x45d: @ KillTimer(Stack[-1])
0x45e: Pop(1)
0x45f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x460: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x461: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x462: Push("head") // @poff=470
0x463: @ UnlookAsync(Stack[-1])
0x464: Pop(1)
0x465: PushEmpty()
0x466: Call2 0x502

0x467: Pop(0)
0x468: Return(); Pop(0)

0x469: PushEmpty()
0x46a: PushEmpty(bool)
0x46b: Stack[-1] = (bool) 0
0x46c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x46d: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: Stack[-1] = (bool) 1
0x471: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x472: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x473: PushEmpty(object)
0x474: Stack[-2] = Stack[-1]
0x475: Call2 0x758

0x476: Pop(1)
0x477: Return(); Pop(0)

0x478: PushEmpty()
0x479: PushEmpty(bool)
0x47a: Stack[-1] = (bool) 0
0x47b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x47c: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x47e: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47f: Stack[-1] = (bool) 1
0x480: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x481: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x482: Push("head") // @poff=470
0x483: @ UnlookAsync(Stack[-1])
0x484: Pop(1)
0x485: Return(); Pop(0)

0x486: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x487: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x488: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x489: Stack[-17] = Stack[-7]
0x48a: PushEmpty(bool, object)
0x48b: Stack[-23] = Stack[-1]
0x48c: Call2 0x512

0x48d: Pop(1)
0x48e: Pop(1); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: Stack[-22] = (bool) 0
0x491: Return(); Pop(16)

0x492: @@ GetPosition(Stack[-5]); Obj=21 // @poff=480
0x493: Pop(0)
0x494: @ GetPosition(Stack[-4])
0x495: Pop(0)
0x496: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x497: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x498: PushEmpty(bool)
0x499: Stack[-1] = (bool) 0
0x49a: Push((int) 0)
0x49b: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49d: Pop(0); Push(Stack[-20] * Stack[-20]);
0x49e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Stack[-1] = (bool) 1
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a2: @ Stop()
0x4a3: Pop(0)
0x4a4: Stack[-22] = (bool) 0
0x4a5: Return(); Pop(16)

0x4a6: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4a7: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4a9: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=250
0x4aa: Pop(0)
0x4ab: @ FindPathTo(Stack[-1], Stack[-5])
0x4ac: Pop(0)
0x4ad: Pop(0); Push(( Stack[-1] != 0 )
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-1] = Stack[-6]
0x4b0: Stack[-1] = 0
0x4b1: Pop(0); Push(( Stack[-6] != 0 )
0x4b2: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4b3: Push(Stack[-7])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b5: Stack[-7] = (bool) 0
0x4b6: @ RotatePath(Stack[-6], Stack[-8])
0x4b7: Pop(0)
0x4b8: Pop(0); Push((bool) Stack[-8] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: GOTO 0x4ea

0x4bb: Push((int) 0)
0x4bc: Push((float)0.30000001192092896)
0x4bd: @ SetTimer(Stack[-2], Stack[-1])
0x4be: Pop(2)
0x4bf: PushEmpty(string)
0x4c0: Call2 0x519

0x4c1: Pop(0)
0x4c2: PushEmpty(string)
0x4c3: Call2 0x51b

0x4c4: Pop(0)
0x4c5: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4c6: Pop(2)
0x4c7: Pop(0); Push((bool) Stack[-8] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ca: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cb: Stack[-6] = 0
0x4cc: GOTO 0x4ea

0x4cd: GOTO 0x4cf

0x4ce: GOTO 0x4e9

0x4cf: GOTO 0x4d1

0x4d0: Stack[-6] = 0
0x4d1: GOTO 0x4e2

0x4d2: Push((int) 0)
0x4d3: @ KillTimer(Stack[-1])
0x4d4: Pop(1)
0x4d5: Push((float)0.5)
0x4d6: @ Sleep(Stack[-1], Stack[-9])
0x4d7: Pop(1)
0x4d8: Pop(0); Push((bool) Stack[-8] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4da: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-6] = 0
0x4dd: GOTO 0x4ea

0x4de: Push((int) 0)
0x4df: Push((float)0.30000001192092896)
0x4e0: @ SetTimer(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: Stack[-1] = 0
0x4e3: GOTO 0x4e8

0x4e4: Push((int) 0)
0x4e5: @ KillTimer(Stack[-1])
0x4e6: Pop(1)
0x4e7: GOTO 0x4ea

0x4e8: Stack[-6] = 0
0x4e9: GOTO 0x48a

0x4ea: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4eb: Return(); Pop(16)

0x4ec: PushEmpty()
0x4ed: Push((int) 0)
0x4ee: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(bool, object)
0x4f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f3: Call2 0x512

0x4f4: Pop(1)
0x4f5: Pop(1); Push((bool) Stack[-1] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4f8: Push((int) 0)
0x4f9: @ KillTimer(Stack[-1])
0x4fa: Pop(1)
0x4fb: @ Stop()
0x4fc: Pop(0)
0x4fd: Return(); Pop(0)

0x4fe: PushEmpty()
0x4ff: @ RequestClearPath(Stack[-1])
0x500: Pop(0)
0x501: Return(); Pop(0)

0x502: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x503: Push((int) 0)
0x504: @ KillTimer(Stack[-1])
0x505: Pop(1)
0x506: @ Stop()
0x507: Pop(0)
0x508: Return(); Pop(0)

0x509: PushEmpty()
0x50a: PushEmpty()
0x50b: Call2 0x45c

0x50c: Pop(0)
0x50d: PushEmpty(object)
0x50e: Stack[-2] = Stack[-1]
0x50f: Call2 0x853

0x510: Pop(1)
0x511: Return(); Pop(0)

0x512: PushEmpty()
0x513: PushEmpty(bool, object)
0x514: Stack[-3] = Stack[-1]
0x515: Call2 0x650

0x516: Stack[-2] = Stack[-4]
0x517: Pop(2)
0x518: Return(); Pop(0)

0x519: Stack[-1] = "walk" // @poff=492
0x51a: Return(); Pop(0)

0x51b: Stack[-1] = "run" // @poff=502
0x51c: Return(); Pop(0)

0x51d: PushEmpty()
0x51e: EventDisable(0)
0x51f: PushEmpty(object)
0x520: Stack[-2] = Stack[-1]
0x521: Call2 0x536

0x522: Pop(1)
0x523: Push((int) 50)
0x524: Push((int) 40)
0x525: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: EventEnable(0)
0x528: @ Hold()
0x529: Pop(0)
0x52a: GOTO 0x528

0x52b: Return(); Pop(0)

0x52c: PushEmpty(bool, bool)
0x52d: @ IsOverrideActive(Stack[-1])
0x52e: Pop(0)
0x52f: Pop(0); Push((bool) Stack[-1] == 0)
0x530: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x531: PushEmpty(object)
0x532: Stack[-4] = Stack[-1]
0x533: Call2 0x815

0x534: Pop(1)
0x535: Return(); Pop(2)

0x536: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x537: Pop(0); PushNull((bool) Stack[-21] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x539: PushEmpty(string)
0x53a: Stack[-1] = "fdie" // @poff=510
0x53b: Call2 0x591

0x53c: Pop(1)
0x53d: GOTO 0x590

0x53e: @@ GetPosition(Stack[-10]); Obj=21 // @poff=480
0x53f: Pop(0)
0x540: @ GetPosition(Stack[-9])
0x541: Pop(0)
0x542: @ GetDirection(Stack[-8])
0x543: Pop(0)
0x544: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x545: Push(CvectorIndex(Stack[-7], 0))
0x546: Push(CvectorIndex(Stack[-9], 0))
0x547: Pop(2); Push(Stack[-2] * Stack[-1]);
0x548: Push(CvectorIndex(Stack[-8], 2))
0x549: Push(CvectorIndex(Stack[-10], 2))
0x54a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x54c: Push((int) 0)
0x54d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-6] = "fdie" // @poff=510
0x550: GOTO 0x552

0x551: Stack[-6] = "bdie" // @poff=520
0x552: @ RemoveRTEnvelope()
0x553: Pop(0)
0x554: @ SetDeathState()
0x555: Pop(0)
0x556: @ Stop()
0x557: Pop(0)
0x558: @ StopAsync()
0x559: Pop(0)
0x55a: Stack[-21] = Stack[-5]
0x55b: Push("GetScriptProperty") // @poff=530
0x55c: Push((int) 2)
0x55d: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x55e: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x55f: Push("Owner") // @poff=566
0x560: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=578
0x561: Pop(1)
0x562: Push(Stack[-4])
0x563: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x564: Push("Owner") // @poff=566
0x565: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=596
0x566: Pop(1)
0x567: Pop(0); PushNull((bool) Stack[-5] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x569: Stack[-21] = Stack[-5]
0x56a: Push("@GetEyesHeight") // @poff=614
0x56b: Push((int) 1)
0x56c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x56d: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x56e: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=644
0x56f: Pop(0)
0x570: Stack[-1] = [0.0, 0.0, 0.0]
0x571: Push(CvectorIndex(Stack[-1], 1))
0x572: Stack[-3] = Stack[-1]
0x573: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x574: Push("head") // @poff=470
0x575: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x576: Pop(1)
0x577: Stack[-3] = (bool) 1
0x578: GOTO 0x57a

0x579: Stack[-3] = (bool) 0
0x57a: PushEmpty(string)
0x57b: Stack[-7] = Stack[-1]
0x57c: Call2 0x76a

0x57d: Pop(1)
0x57e: Push("all") // @poff=138
0x57f: @ PlayAnimation(Stack[-1], Stack[-7])
0x580: Pop(1)
0x581: @ WaitForAnimEnd()
0x582: Pop(0)
0x583: Push(Stack[-3])
0x584: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x585: @ StopAsync()
0x586: Pop(0)
0x587: Push("head") // @poff=470
0x588: @ UnlookAsync(Stack[-1])
0x589: Pop(1)
0x58a: Push("all") // @poff=138
0x58b: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x58c: Pop(1)
0x58d: @ RemoveEnvelope()
0x58e: Pop(0)
0x58f: Stack[-5] = 0
0x590: Return(); Pop(20)

0x591: PushEmpty()
0x592: @ RemoveRTEnvelope()
0x593: Pop(0)
0x594: @ SetDeathState()
0x595: Pop(0)
0x596: @ Stop()
0x597: Pop(0)
0x598: @ StopAsync()
0x599: Pop(0)
0x59a: @ StopSecondaryAnimation()
0x59b: Pop(0)
0x59c: PushEmpty(string)
0x59d: Stack[-2] = Stack[-1]
0x59e: Call2 0x76a

0x59f: Pop(1)
0x5a0: Push("all") // @poff=138
0x5a1: @ PlayAnimation(Stack[-1], Stack[-2])
0x5a2: Pop(1)
0x5a3: @ WaitForAnimEnd()
0x5a4: Pop(0)
0x5a5: Push("all") // @poff=138
0x5a6: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5a7: Pop(1)
0x5a8: @ RemoveEnvelope()
0x5a9: Pop(0)
0x5aa: Return(); Pop(0)

0x5ab: PushEmpty()
0x5ac: Return(); Pop(0)

0x5ad: PushEmpty()
0x5ae: Return(); Pop(0)

0x5af: PushEmpty()
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty()
0x5b2: Push((int) 2)
0x5b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b5: Stack[-2] = "fire" // @poff=658
0x5b6: Return(); Pop(0)

0x5b7: GOTO 0x5bd

0x5b8: Push((int) 1)
0x5b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-2] = "bullet" // @poff=668
0x5bc: Return(); Pop(0)

0x5bd: Stack[-2] = "phys" // @poff=682
0x5be: Return(); Pop(0)

0x5bf: PushEmpty(cvector, cvector, cvector, cvector)
0x5c0: @ GetPosition(Stack[-2])
0x5c1: Pop(0)
0x5c2: @@ GetPosition(Stack[-1]); Obj=5 // @poff=480
0x5c3: Pop(0)
0x5c4: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5c5: Return(); Pop(4)

0x5c6: PushEmpty(object, object)
0x5c7: Push("player") // @poff=692
0x5c8: @ FindActor(Stack[-2], Stack[-1])
0x5c9: Pop(1)
0x5ca: Stack[-1] = Stack[-3]
0x5cb: Return(); Pop(2)

0x5cc: Stack[-1] = 0
0x5cd: PushEmpty(bool, bool)
0x5ce: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5cf: Pop(0)
0x5d0: Stack[-1] = Stack[-4]
0x5d1: Return(); Pop(2)

0x5d2: PushEmpty(bool, bool)
0x5d3: Push("HasProperty") // @poff=706
0x5d4: Push((int) 2)
0x5d5: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5d6: Pop(1); Push((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-5] = (bool) 0
0x5d9: Return(); Pop(2)

0x5da: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=730
0x5db: Pop(0)
0x5dc: Stack[-1] = Stack[-5]
0x5dd: Return(); Pop(2)

0x5de: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5df: PushEmpty(bool, object, string)
0x5e0: Stack[-18] = Stack[-2]
0x5e1: Stack[-1] = "health" // @poff=742
0x5e2: Call2 0x5d2

0x5e3: Pop(2)
0x5e4: Pop(1); Push((bool) Stack[-1] == 0)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e6: Stack[-16] = (float) 0.0
0x5e7: Return(); Pop(12)

0x5e8: PushEmpty(bool, object, string)
0x5e9: Stack[-18] = Stack[-2]
0x5ea: Stack[-1] = "armor" // @poff=756
0x5eb: Call2 0x5d2

0x5ec: Pop(2)
0x5ed: Pop(1); Push((bool) Stack[-1] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-6] = (int) 0
0x5f0: GOTO 0x5f4

0x5f1: Push("armor") // @poff=756
0x5f2: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=768
0x5f3: Pop(1)
0x5f4: Push("armor_") // @poff=780
0x5f5: PushEmpty(string, int)
0x5f6: Stack[-16] = Stack[-1]
0x5f7: Call2 0x5b1

0x5f8: Pop(1)
0x5f9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5fa: PushEmpty(bool, object, string)
0x5fb: Stack[-18] = Stack[-2]
0x5fc: Stack[-8] = Stack[-1]
0x5fd: Call2 0x5d2

0x5fe: Pop(2)
0x5ff: Pop(1); Push((bool) Stack[-1] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x601: Stack[-4] = (int) 0
0x602: GOTO 0x605

0x603: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=768
0x604: Pop(0)
0x605: PushEmpty(float, float, float)
0x606: Pop(0); Push(Stack[-9] + Stack[-7]);
0x607: Push((float)100.0)
0x608: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x609: Stack[-1] = (int) 1
0x60a: Call2 0x7a3

0x60b: Stack[-3] = Stack[-6]
0x60c: Pop(3)
0x60d: Push("health") // @poff=742
0x60e: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=768
0x60f: Pop(1)
0x610: Push((int) 1)
0x611: Pop(1); Push(Stack[-1] - Stack[-4]);
0x612: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x613: Push("health") // @poff=742
0x614: PushEmpty(float, float, float, float)
0x615: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x616: Stack[-2] = (int) 0
0x617: Stack[-1] = (int) 1
0x618: Call2 0x7aa

0x619: Pop(3)
0x61a: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=794
0x61b: Pop(2)
0x61c: PushEmpty(bool, object)
0x61d: Stack[-17] = Stack[-1]
0x61e: Call2 0x5cd

0x61f: Pop(1)
0x620: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x621: PushEmpty(float)
0x622: Stack[-1] = -Stack[-2]; Pop(0);
0x623: Call2 0x7b5

0x624: Pop(1)
0x625: Stack[-1] = Stack[-16]
0x626: Return(); Pop(12)

0x627: PushEmpty(bool, bool)
0x628: @@ IsDead(Stack[-1]); Obj=3 // @poff=806
0x629: Pop(0)
0x62a: Stack[-1] = Stack[-4]
0x62b: Return(); Pop(2)

0x62c: PushEmpty(object, object, object, object)
0x62d: Pop(0); PushNull((bool) Stack[-5] == 0)
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-6] = (bool) 0
0x630: Return(); Pop(4)

0x631: PushEmpty(bool)
0x632: Stack[-1] = (bool) 0
0x633: Push("IsDead") // @poff=813
0x634: Push((int) 1)
0x635: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x636: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x637: PushEmpty(bool, object)
0x638: Stack[-8] = Stack[-1]
0x639: Call2 0x627

0x63a: Pop(1)
0x63b: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63c: Stack[-1] = (bool) 1
0x63d: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63e: Stack[-6] = (bool) 0
0x63f: Return(); Pop(4)

0x640: @ GetScene(Stack[-2])
0x641: Pop(0)
0x642: Pop(0); PushNull((bool) Stack[-2] == 0)
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-6] = (bool) 0
0x645: Return(); Pop(4)

0x646: @@ GetScene(Stack[-1]); Obj=5 // @poff=827
0x647: Pop(0)
0x648: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: Stack[-6] = (bool) 0
0x64b: Return(); Pop(4)

0x64c: Stack[-6] = (bool) 1
0x64d: Return(); Pop(4)

0x64e: Stack[-1] = 0
0x64f: Stack[-2] = 0
0x650: PushEmpty(int, int)
0x651: PushEmpty(bool, object)
0x652: Stack[-5] = Stack[-1]
0x653: Call2 0x62c

0x654: Pop(1)
0x655: Pop(1); Push((bool) Stack[-1] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: Stack[-4] = (bool) 0
0x658: Return(); Pop(2)

0x659: PushEmpty(bool, object, string)
0x65a: Stack[-6] = Stack[-2]
0x65b: Stack[-1] = "noaccess" // @poff=836
0x65c: Call2 0x5d2

0x65d: Pop(2)
0x65e: Pop(1); Push((bool) Stack[-1] == 0)
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-4] = (bool) 1
0x661: Return(); Pop(2)

0x662: Push("noaccess") // @poff=836
0x663: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=768
0x664: Pop(1)
0x665: Push((int) 0)
0x666: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x667: Return(); Pop(2)

0x668: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x669: Pop(0); PushNull((bool) Stack[-15] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66b: Return(); Pop(14)

0x66c: @ IsDead(Stack[-7])
0x66d: Pop(0)
0x66e: Push(Stack[-7])
0x66f: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x670: Return(); Pop(14)

0x671: @ GetSecondaryAnimationType(Stack[-6])
0x672: Pop(0)
0x673: Push((int) 0)
0x674: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x676: Return(); Pop(14)

0x677: @@ GetPosition(Stack[-5]); Obj=15 // @poff=480
0x678: Pop(0)
0x679: @ GetPosition(Stack[-4])
0x67a: Pop(0)
0x67b: @ GetDirection(Stack[-3])
0x67c: Pop(0)
0x67d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x67e: Push(CvectorIndex(Stack[-2], 0))
0x67f: Push(CvectorIndex(Stack[-4], 0))
0x680: Pop(2); Push(Stack[-2] * Stack[-1]);
0x681: Push(CvectorIndex(Stack[-3], 2))
0x682: Push(CvectorIndex(Stack[-5], 2))
0x683: Pop(2); Push(Stack[-2] * Stack[-1]);
0x684: Pop(2); Push(Stack[-2] + Stack[-1]);
0x685: Push((int) 0)
0x686: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x688: Stack[-1] = "fhit" // @poff=854
0x689: GOTO 0x68b

0x68a: Stack[-1] = "bhit" // @poff=864
0x68b: Push("hit_react") // @poff=874
0x68c: Push("1") // @poff=176
0x68d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x68e: Push("2") // @poff=894
0x68f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x690: Push((int) -10)
0x691: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x692: Pop(4)
0x693: Return(); Pop(14)

0x694: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x695: PushEmpty(bool)
0x696: Stack[-1] = (bool) 0
0x697: PushEmpty(bool)
0x698: Stack[-1] = (bool) 0
0x699: Push(Stack[-23])
0x69a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69b: Push((int) 4)
0x69c: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: Stack[-1] = (bool) 1
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push((int) 5)
0x6a1: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: Stack[-1] = (bool) 1
0x6a4: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6a5: PushEmpty(cvector, cvector)
0x6a6: PushEmpty(cvector, object)
0x6a7: Stack[-25] = Stack[-1]
0x6a8: Call2 0x5bf

0x6a9: Stack[-2] = Stack[-3]
0x6aa: Pop(2)
0x6ab: Call2 0x799

0x6ac: Stack[-2] = Stack[-11]
0x6ad: Pop(2)
0x6ae: @ CreateVectorVector(Stack[-8])
0x6af: Pop(0)
0x6b0: Stack[-7] = (int) 1
0x6b1: Push("hit") // @poff=856
0x6b2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6b3: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6b4: Pop(1)
0x6b5: Pop(0); Push((bool) Stack[-6] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: GOTO 0x6c1

0x6b8: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6b9: Push((float)0.7071067690849304)
0x6ba: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: @@ add(Stack[-5]); Obj=8 // @poff=898
0x6bd: Pop(0)
0x6be: Push((int) 1)
0x6bf: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6c0: GOTO 0x6b1

0x6c1: @@ size(Stack[-3]); Obj=8 // @poff=902
0x6c2: Pop(0)
0x6c3: Push(Stack[-3])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6c5: @ irand(Stack[-2], Stack[-3])
0x6c6: Pop(0)
0x6c7: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=907
0x6c8: Pop(0)
0x6c9: PushEmpty(object, int, float, cvector, cvector)
0x6ca: Stack[-26] = Stack[-5]
0x6cb: Stack[-25] = Stack[-4]
0x6cc: Stack[-24] = Stack[-3]
0x6cd: Stack[-6] = Stack[-2]
0x6ce: Stack[-1] = -Stack[-14]; Pop(0);
0x6cf: Call2 0x6d8

0x6d0: Pop(5)
0x6d1: Return(); Pop(18)

0x6d2: Stack[-8] = 0
0x6d3: PushEmpty(object)
0x6d4: Stack[-22] = Stack[-1]
0x6d5: Call2 0x668

0x6d6: Pop(1)
0x6d7: Return(); Pop(18)

0x6d8: PushEmpty(object, object, object, object)
0x6d9: @ GetScene(Stack[-2])
0x6da: Pop(0)
0x6db: Push("scripted") // @poff=911
0x6dc: Push("blood_dir.xml") // @poff=929
0x6dd: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6de: Pop(2)
0x6df: PushEmpty(object)
0x6e0: Stack[-10] = Stack[-1]
0x6e1: Call2 0x668

0x6e2: Pop(1)
0x6e3: Return(); Pop(4)

0x6e4: Stack[-1] = 0
0x6e5: Stack[-2] = 0
0x6e6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6e7: @@ GetPosition(Stack[-3]); Obj=7 // @poff=480
0x6e8: Pop(0)
0x6e9: @ GetPosition(Stack[-2])
0x6ea: Pop(0)
0x6eb: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6ec: Push(CvectorIndex(Stack[-1], 0))
0x6ed: Push(CvectorIndex(Stack[-2], 2))
0x6ee: @ RotateAsync(Stack[-2], Stack[-1])
0x6ef: Pop(2)
0x6f0: Return(); Pop(6)

0x6f1: PushEmpty(bool, bool)
0x6f2: @ IsLoaded(Stack[-1])
0x6f3: Pop(0)
0x6f4: Stack[-1] = Stack[-3]
0x6f5: Return(); Pop(2)

0x6f6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6f7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=480
0x6f8: Pop(0)
0x6f9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=644
0x6fa: Pop(0)
0x6fb: Push(CvectorIndex(Stack[-8], 1))
0x6fc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6fd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6fe: @ GetPosition(Stack[-7])
0x6ff: Pop(0)
0x700: @ GetEyesHeight(Stack[-9])
0x701: Pop(0)
0x702: Push(CvectorIndex(Stack[-7], 1))
0x703: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x704: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x705: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x706: Push(CvectorIndex(Stack[-6], 1))
0x707: Stack[-1] = (int) 0
0x708: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x709: Pop(0); Push(Stack[-6] | Stack[-6]);
0x70a: Pop(1); Push(Sqrt(Stack[-1]))
0x70b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x70c: Stack[-5] = -Stack[-6]; Pop(0);
0x70d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x70e: PushEmpty(cvector, cvector)
0x70f: Push([0.0, 1.0, 0.0])
0x710: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x711: Call2 0x799

0x712: Pop(1)
0x713: Push((int) 25)
0x714: Pop(2); Push(Stack[-2] * Stack[-1]);
0x715: Pop(2); Push(Stack[-2] + Stack[-1]);
0x716: Push([0.0, 10.0, 0.0])
0x717: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x718: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x719: @ IsOverrideActive(Stack[-2])
0x71a: Pop(0)
0x71b: Push(Stack[-2])
0x71c: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71d: Stack[-21] = (bool) 0
0x71e: Return(); Pop(18)

0x71f: @ StopWorld()
0x720: Pop(0)
0x721: @ CameraTransit(Stack[-3], Stack[-5])
0x722: Pop(0)
0x723: Push(CvectorIndex(Stack[-4], 0))
0x724: Push(CvectorIndex(Stack[-5], 2))
0x725: @ Rotate(Stack[-2], Stack[-1])
0x726: Pop(2)
0x727: PushEmpty(bool)
0x728: Call2 0x82a

0x729: Pop(0)
0x72a: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72b: GOTO 0x734

0x72c: Push("head") // @poff=470
0x72d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x72e: Pop(1)
0x72f: Push(Stack[-1])
0x730: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x731: Push("head") // @poff=470
0x732: @ LookAsyncCamera(Stack[-1])
0x733: Pop(1)
0x734: @ CameraWaitForPlayFinish()
0x735: Pop(0)
0x736: @ ResumeWorld()
0x737: Pop(0)
0x738: Stack[-21] = (bool) 1
0x739: Return(); Pop(18)

0x73a: PushEmpty(bool, bool)
0x73b: @ CameraSwitchToNormal()
0x73c: Pop(0)
0x73d: PushEmpty(bool)
0x73e: Call2 0x82a

0x73f: Pop(0)
0x740: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x741: GOTO 0x74a

0x742: Push("head") // @poff=470
0x743: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x744: Pop(1)
0x745: Push(Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x747: Push("head") // @poff=470
0x748: @ UnlookAsync(Stack[-1])
0x749: Pop(1)
0x74a: Return(); Pop(2)

0x74b: PushEmpty(float, float, float, float)
0x74c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x74d: Pop(0)
0x74e: Push((bool) 0)
0x74f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(1)
0x751: Return(); Pop(4)

0x752: PushEmpty(float, float, float, float)
0x753: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x754: Pop(0)
0x755: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x756: Pop(0)
0x757: Return(); Pop(4)

0x758: PushEmpty(float, cvector, float, cvector)
0x759: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=644
0x75a: Pop(0)
0x75b: Stack[-1] = [0.0, 0.0, 0.0]
0x75c: Push(CvectorIndex(Stack[-1], 1))
0x75d: Stack[-3] = Stack[-1]
0x75e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x75f: Push("head") // @poff=470
0x760: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x761: Pop(1)
0x762: Return(); Pop(4)

0x763: PushEmpty(bool)
0x764: Call2 0x82a

0x765: Pop(0)
0x766: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x767: @ lshStopSpeech()
0x768: Pop(0)
0x769: Return(); Pop(0)

0x76a: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x76b: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x76c: Pop(0)
0x76d: Pop(0); Push((bool) Stack[-8] == 0)
0x76e: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x76f: Stack[-7] = (int) 0
0x770: Push((int) 1)
0x771: Pop(1); Push(Stack[-8] + Stack[-1]);
0x772: Pop(1); Push(Stack[-18] + Stack[-1]);
0x773: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x774: Pop(1)
0x775: Pop(0); Push((bool) Stack[-6] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x77b

0x778: Push((int) 1)
0x779: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x77a: GOTO 0x770

0x77b: Pop(0); Push((bool) Stack[-7] == 0)
0x77c: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77d: Return(); Pop(16)

0x77e: @ irand(Stack[-5], Stack[-7])
0x77f: Pop(0)
0x780: Push((int) 1)
0x781: Pop(1); Push(Stack[-6] + Stack[-1]);
0x782: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x783: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x784: Pop(0)
0x785: Push(Stack[-4])
0x786: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x787: @ GetEyesHeight(Stack[-3])
0x788: Pop(0)
0x789: @ GetDirection(Stack[-2])
0x78a: Pop(0)
0x78b: Push((int) 50)
0x78c: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x78d: Push(CvectorIndex(Stack[-1], 1))
0x78e: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x78f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x790: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x791: Pop(0)
0x792: Return(); Pop(16)

0x793: PushEmpty(object, object)
0x794: @ self(Stack[-1])
0x795: Pop(0)
0x796: Stack[-1] = Stack[-3]
0x797: Return(); Pop(2)

0x798: Stack[-1] = 0
0x799: PushEmpty(float, float)
0x79a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x79b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x79c: Push((float)9.999999974752427e-07)
0x79d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79f: Stack[-4] = [0.0, 0.0, 0.0]
0x7a0: Return(); Pop(2)

0x7a1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7a2: Return(); Pop(2)

0x7a3: PushEmpty()
0x7a4: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a6: Stack[-2] = Stack[-3]
0x7a7: GOTO 0x7a9

0x7a8: Stack[-1] = Stack[-3]
0x7a9: Return(); Pop(0)

0x7aa: PushEmpty()
0x7ab: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-2] = Stack[-4]
0x7ae: Return(); Pop(0)

0x7af: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: Stack[-1] = Stack[-4]
0x7b2: Return(); Pop(0)

0x7b3: Stack[-3] = Stack[-4]
0x7b4: Return(); Pop(0)

0x7b5: PushEmpty(object, object)
0x7b6: @ CreateFloatVector(Stack[-1])
0x7b7: Pop(0)
0x7b8: @@ add(Stack[-3]); Obj=1 // @poff=898
0x7b9: Pop(0)
0x7ba: Push((int) 15)
0x7bb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7bc: Pop(1)
0x7bd: Return(); Pop(2)

0x7be: Stack[-1] = 0
0x7bf: PushEmpty(object, object)
0x7c0: @ FindActor(Stack[-1], Stack[-4])
0x7c1: Pop(0)
0x7c2: Pop(0); PushNull((bool) Stack[-1] == 0)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: Stack[-5] = (bool) 0
0x7c5: Return(); Pop(2)

0x7c6: @ Trigger(Stack[-1], Stack[-3])
0x7c7: Pop(0)
0x7c8: Stack[-5] = (bool) 1
0x7c9: Return(); Pop(2)

0x7ca: Stack[-1] = 0
0x7cb: PushEmpty(bool, bool)
0x7cc: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7cd: Pop(0)
0x7ce: Push(Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d0: Push("attack") // @poff=180
0x7d1: @ PlayGlobalMusic(Stack[-1])
0x7d2: Pop(1)
0x7d3: Return(); Pop(2)

0x7d4: PushEmpty(object, object)
0x7d5: @ GetScene(Stack[-1])
0x7d6: Pop(0)
0x7d7: Push("battle") // @poff=957
0x7d8: PushEmpty(object)
0x7d9: Call2 0x793

0x7da: Pop(0)
0x7db: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x7dc: Pop(2)
0x7dd: Return(); Pop(2)

0x7de: Stack[-1] = 0
0x7df: PushEmpty(string, string)
0x7e0: Stack[-1] = "idle" // @poff=146
0x7e1: Push(Stack[-3])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7e4: Stack[-1] = Stack[-4]
0x7e5: Return(); Pop(2)

0x7e6: PushEmpty(int, bool, int, bool)
0x7e7: Stack[-2] = (int) 0
0x7e8: Push("all") // @poff=138
0x7e9: PushEmpty(string, int)
0x7ea: Stack[-5] = Stack[-1]
0x7eb: Call2 0x7df

0x7ec: Pop(1)
0x7ed: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7ee: Pop(2)
0x7ef: Pop(0); Push((bool) Stack[-1] == 0)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f1: GOTO 0x7f5

0x7f2: Push((int) 1)
0x7f3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7f4: GOTO 0x7e8

0x7f5: Stack[-2] = Stack[-5]
0x7f6: Return(); Pop(4)

0x7f7: PushEmpty()
0x7f8: PushEmpty(bool, string, string)
0x7f9: Stack[-2] = "quest_d1_01" // @poff=156
0x7fa: Stack[-1] = "attack" // @poff=180
0x7fb: Call2 0x7bf

0x7fc: Pop(3)
0x7fd: Return(); Pop(0)

0x7fe: PushEmpty(int, int)
0x7ff: Push("branch") // @poff=971
0x800: @ GetVariable(Stack[-1], Stack[-2])
0x801: Pop(1)
0x802: Push((int) 0)
0x803: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x805: Stack[-3] = (int) 1
0x806: Return(); Pop(2)

0x807: GOTO 0x80d

0x808: Push((int) 1)
0x809: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-3] = (int) 2
0x80c: Return(); Pop(2)

0x80d: Stack[-3] = (int) 3
0x80e: Return(); Pop(2)

0x80f: PushEmpty(int, int)
0x810: Push("branch") // @poff=971
0x811: @ GetVariable(Stack[-1], Stack[-2])
0x812: Pop(1)
0x813: Stack[-1] = Stack[-3]
0x814: Return(); Pop(2)

0x815: PushEmpty()
0x816: PushEmpty(int)
0x817: Call2 0x80f

0x818: Pop(0)
0x819: Push((int) 1)
0x81a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81c: @ WorkWithCorpse(Stack[-1])
0x81d: Pop(0)
0x81e: GOTO 0x821

0x81f: @ Barter(Stack[-1])
0x820: Pop(0)
0x821: Return(); Pop(0)

0x822: Stack[-1] = (int) 521048
0x823: Return(); Pop(0)

0x824: Stack[-1] = (int) 521047
0x825: Return(); Pop(0)

0x826: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=985
0x827: Return(); Pop(0)

0x828: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=1025
0x829: Return(); Pop(0)

0x82a: Stack[-1] = (bool) 0
0x82b: Return(); Pop(0)

0x82c: PushEmpty()
0x82d: PushEmpty(object)
0x82e: Stack[-2] = Stack[-1]
0x82f: Push(-1, 0); TaskCall(5)
0x830: Call2 0x51d

0x831: Pop(-1, 0); TaskReturn
0x832: Pop(1)
0x833: Return(); Pop(0)

0x834: PushEmpty()
0x835: PushEmpty(object, int, float)
0x836: Stack[-7] = Stack[-3]
0x837: Stack[-6] = Stack[-2]
0x838: Stack[-5] = Stack[-1]
0x839: Call2 0x694

0x83a: Pop(3)
0x83b: Return(); Pop(0)

0x83c: PushEmpty()
0x83d: PushEmpty(object, int, float, cvector, cvector)
0x83e: Stack[-11] = Stack[-5]
0x83f: Stack[-10] = Stack[-4]
0x840: Stack[-9] = Stack[-3]
0x841: Stack[-7] = Stack[-2]
0x842: Stack[-6] = Stack[-1]
0x843: Call2 0x6d8

0x844: Pop(5)
0x845: Return(); Pop(0)

0x846: PushEmpty(float, float)
0x847: Push("health") // @poff=742
0x848: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84a: Push("health") // @poff=742
0x84b: @ GetProperty(Stack[-1], Stack[-2])
0x84c: Pop(1)
0x84d: Push((int) 0)
0x84e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x850: @ SignalDeath(Stack[-4])
0x851: Pop(0)
0x852: Return(); Pop(2)

0x853: PushEmpty()
0x854: PushEmpty(object)
0x855: Stack[-2] = Stack[-1]
0x856: Call2 0x82c

0x857: Pop(1)
0x858: Return(); Pop(0)

0x859: PushEmpty(object)
0x85a: Call2 0x793

0x85b: Pop(0)
0x85c: @ RemoveActor(Stack[-1])
0x85d: Pop(1)
0x85e: @ Hold()
0x85f: Pop(0)
0x860: Return(); Pop(0)

