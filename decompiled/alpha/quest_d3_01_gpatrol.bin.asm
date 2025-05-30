GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	kill_player
	talk_player
	quest_d3_01
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	attack_end
	bjump
	IsAttacking
	IsAttacking
	GetPosition
	walk
	run
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	fire
	phys
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	health
	armor
	armor_
	IsDead
	IsDead
	GetScene
	noaccess
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	2
	playing 
	start: 
	end: 
	d3q01
	gpatrol_attack
	money
	gpatrol_talk
	playsound
	givemoney
	ui/NPC_Black.png
	revolver_ammo
	alpha_pills

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
	GetPFPosition (1 args)
	GetDirection (1 args)
	irand (2 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	StopGroup0 (0 args)
	Stop (0 args)
	FindActor (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	Speak (1 args)
	GetPosition (1 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	WorkWithCorpse (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	Trigger (2 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetVariable (2 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x17e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x84 Vars = (int, int)
	GTASK_2 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x156 Vars = (object)
		EVENT_26 Op = 0x161 Vars = (string)
		EVENT_17 Op = 0x173 Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, int) Params = 0
	GTASK_4 Vars = (bool, object) Params = 6
		EVENT_7 Op = 0x437 Vars = (int)
		EVENT_10 Op = 0x449 Vars = (object)
		EVENT_41 Op = 0x454 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x475 Vars = (object)
		EVENT_22 Op = 0x4ea Vars = (object, int, float, float)
		EVENT_16 Op = 0x4ec Vars = (object, string)
		EVENT_41 Op = 0x4ee Vars = (object)

Events:
EVENT_22 Op = 0x6b5 Vars = (object, int, float, float)
EVENT_16 Op = 0x6bd Vars = (object, string)
EVENT_41 Op = 0x6ca Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x5da

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x69d

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x69f

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x68c

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x612

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x74

0x48: Pop(1)
0x49: Push((int) 9131)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 9132)
0x4f: Push((int) 10013)
0x50: Push((int) 10012)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: GOTO 0x56

0x54: Return(); Pop(0)

0x55: GOTO 0x43

0x56: PushEmpty(bool)
0x57: Call 0x6a1

0x58: Pop(0)
0x59: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5a: @ lshWaitForAnimEnd()
0x5b: Pop(0)
0x5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x64

0x5f: PushEmpty(string)
0x60: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61: Call 0x616

0x62: Pop(1)
0x63: GOTO 0x5a

0x64: GOTO 0x73

0x65: Push("all")
0x66: Push("idle")
0x67: @ PlayAnimation(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: @ WaitForAnimEnd()
0x6a: Pop(0)
0x6b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0x73

0x6e: Push("all")
0x6f: Push("idle")
0x70: @ PlayAnimation(Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: GOTO 0x69

0x73: Return(); Pop(0)

0x74: PushEmpty()
0x75: PushEmpty(bool)
0x76: Call 0x6a1

0x77: Pop(0)
0x78: Pop(1); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Return(); Pop(0)

0x7b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(0)

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[-2]
0x80: Call 0x616

0x81: Pop(1)
0x82: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Push((int) 1)
0x86: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x87: PushEmpty()
0x88: Call 0x628

0x89: Pop(0)
0x8a: Push((int) 10025)
0x8b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8d: PushEmpty(object, object)
0x8e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90: Call 0x666

0x91: Pop(2)
0x92: PushEmpty(object, object)
0x93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95: Call 0x66e

0x96: Pop(2)
0x97: PushEmpty(object, object)
0x98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Call 0x675

0x9b: Pop(2)
0x9c: Push((int) 10024)
0x9d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x9f: PushEmpty(object, object)
0xa0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa2: Call 0x666

0xa3: Pop(2)
0xa4: PushEmpty(object, object)
0xa5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7: Call 0x66e

0xa8: Pop(2)
0xa9: PushEmpty(object, object)
0xaa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xac: Call 0x675

0xad: Pop(2)
0xae: Push((int) 10017)
0xaf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: PushEmpty(object, object)
0xb2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4: Call 0x65b

0xb5: Pop(2)
0xb6: Push((int) 10018)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call 0x65b

0xbd: Pop(2)
0xbe: Push((int) 10011)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call 0x74

0xc4: Pop(1)
0xc5: Push((int) 9131)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 9132)
0xcb: Push((int) 10013)
0xcc: Push((int) 10012)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 10013)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call 0x74

0xd6: Pop(1)
0xd7: Push((int) 9133)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 9134)
0xdd: Push((int) 10019)
0xde: Push((int) 10014)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 9135)
0xe2: Push((int) 10016)
0xe3: Push((int) 10015)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 10016)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral"
0xec: Call 0x74

0xed: Pop(1)
0xee: Push((int) 9136)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 9137)
0xf4: Push((int) -1)
0xf5: Push((int) 10017)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 9138)
0xf9: Push((int) -1)
0xfa: Push((int) 10018)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: Push((int) 10019)
0xff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x101: PushEmpty(string)
0x102: Stack[-1] = "Neutral"
0x103: Call 0x74

0x104: Pop(1)
0x105: Push((int) 9139)
0x106: @@ SetMessage(Stack[-1])
0x107: Pop(1)
0x108: @@ ClearReplies()
0x109: Pop(0)
0x10a: Push((int) 9140)
0x10b: Push((int) 10021)
0x10c: Push((int) 10020)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 10021)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call 0x74

0x116: Pop(1)
0x117: Push((int) 9141)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 9142)
0x11d: Push((int) 10023)
0x11e: Push((int) 10022)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: PushEmpty(bool, object)
0x122: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x123: Call 0x67b

0x124: Pop(1)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: Push((int) 9144)
0x127: Push((int) -1)
0x128: Push((int) 10024)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 10023)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call 0x74

0x132: Pop(1)
0x133: Push((int) 9143)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call 0x67b

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: Push((int) 9145)
0x13e: Push((int) -1)
0x13f: Push((int) 10025)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Push((int) 9146)
0x143: Push((int) 10016)
0x144: Push((int) 10026)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x149: PushEmpty(bool)
0x14a: Call 0x6a1

0x14b: Pop(0)
0x14c: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14d: @ lshStopAnimation()
0x14e: Pop(0)
0x14f: GOTO 0x152

0x150: @ StopAnimation()
0x151: Pop(0)
0x152: Return(); Pop(0)

0x153: GOTO 0x85

0x154: Return(); Pop(0)

0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: PushEmpty()
0x158: Call 0x1cc

0x159: Pop(0)
0x15a: PushEmpty(int, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Push(-2, 1); TaskCall(0)
0x15d: Call 0x0

0x15e: Pop(-2, 1); TaskReturn
0x15f: Pop(2)
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: Push("kill_player")
0x163: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x165: PushEmpty()
0x166: Call 0x1cc

0x167: Pop(0)
0x168: PushEmpty()
0x169: Push(-0, 5); TaskCall(3)
0x16a: Call 0x1d1

0x16b: Pop(-0, 5); TaskReturn
0x16c: Pop(0)
0x16d: GOTO 0x172

0x16e: Push("talk_player")
0x16f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: EventDisable(0)
0x172: Return(); Pop(0)

0x173: PushEmpty(bool, bool)
0x174: @ IsPlayerActor(Stack[-3], Stack[-1])
0x175: Pop(0)
0x176: Push(Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: PushEmpty(bool, string, string)
0x179: Stack[-2] = "quest_d3_01"
0x17a: Stack[-1] = "kill_player"
0x17b: Call 0x64f

0x17c: Pop(3)
0x17d: Return(); Pop(2)

0x17e: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x17f: @ GetPFPosition(Stack[-1])
0x180: Pop(0)
0x181: @ GetDirection(Stack[-0])
0x182: Pop(0)
0x183: Push((int) 60)
0x184: @ irand(Stack[-5], Stack[-1])
0x185: Pop(1)
0x186: Push((int) 30)
0x187: Pop(1); Push(Stack[-5] + Stack[-1]);
0x188: @ Sleep(Stack[-1], Stack[-4])
0x189: Pop(1)
0x18a: Push(Stack[-3])
0x18b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18c: PushEmpty()
0x18d: Call 0x155

0x18e: Pop(0)
0x18f: GOTO 0x1ca

0x190: @ GetPFPosition(Stack[-2])
0x191: Pop(0)
0x192: PushEmpty(float, cvector, cvector)
0x193: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x194: Stack[-1] = Stack[-5]
0x195: Call 0x639

0x196: Pop(2)
0x197: Push((int) 40000)
0x198: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x19a: @ FindPathTo(Stack[-1], Stack[-1])
0x19b: Pop(0)
0x19c: Pop(0); Push(( Stack[-1] != 0 )
0x19d: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x19e: @ RotatePath(Stack[-1], Stack[-3])
0x19f: Pop(0)
0x1a0: Pop(0); Push((bool) Stack[-3] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: GOTO 0x1c9

0x1a3: Push((bool) 0)
0x1a4: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x1a5: Pop(1)
0x1a6: Pop(0); Push((bool) Stack[-3] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: GOTO 0x1c9

0x1a9: Push(CvectorIndex(Stack[-0], 0))
0x1aa: Push(CvectorIndex(Stack[-0], 2))
0x1ab: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x1ac: Pop(2)
0x1ad: Pop(0); Push((bool) Stack[-3] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1c9

0x1b0: @ WaitForAnimEnd(Stack[-3])
0x1b1: Pop(0)
0x1b2: Pop(0); Push((bool) Stack[-3] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: GOTO 0x1c9

0x1b5: GOTO 0x1ca

0x1b6: GOTO 0x1ba

0x1b7: Push((int) 1)
0x1b8: @ Sleep(Stack[-1])
0x1b9: Pop(1)
0x1ba: Stack[-1] = 0
0x1bb: GOTO 0x1c9

0x1bc: Push(CvectorIndex(Stack[-0], 0))
0x1bd: Push(CvectorIndex(Stack[-0], 2))
0x1be: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x1bf: Pop(2)
0x1c0: Pop(0); Push((bool) Stack[-3] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: GOTO 0x1c9

0x1c3: @ WaitForAnimEnd(Stack[-3])
0x1c4: Pop(0)
0x1c5: Pop(0); Push((bool) Stack[-3] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: GOTO 0x1c9

0x1c8: GOTO 0x1ca

0x1c9: GOTO 0x190

0x1ca: GOTO 0x183

0x1cb: Return(); Pop(8)

0x1cc: @ StopGroup0()
0x1cd: Pop(0)
0x1ce: @ Stop()
0x1cf: Pop(0)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(object, object)
0x1d2: Push("player")
0x1d3: @ FindActor(Stack[-2], Stack[-1])
0x1d4: Pop(1)
0x1d5: Pop(0); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Return(); Pop(2)

0x1d8: PushEmpty(object, bool, float)
0x1d9: Stack[-3] = Stack[-4]
0x1da: Stack[-2] = (bool) 1
0x1db: Stack[-1] = (float) 180.0
0x1dc: Call 0x1e6

0x1dd: Pop(3)
0x1de: Return(); Pop(2)

0x1df: Stack[-1] = 0
0x1e0: PushEmpty()
0x1e1: Stack[-3] = (float) 0.15
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty()
0x1e4: Stack[-3] = (int) 0
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x1e7: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1e8: Push("all")
0x1e9: Push("attack_begin")
0x1ea: Push((int) 1)
0x1eb: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ed: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x1ee: Pop(2)
0x1ef: Pop(0); Push((bool) Stack[-10] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: GOTO 0x1f5

0x1f2: Push((int) 1)
0x1f3: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f4: GOTO 0x1e8

0x1f5: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1f6: Push("attack")
0x1f7: Push((int) 1)
0x1f8: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1f9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1fa: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x1fb: Pop(1)
0x1fc: Pop(0); Push((bool) Stack[-9] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: GOTO 0x202

0x1ff: Push((int) 1)
0x200: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x201: GOTO 0x1f6

0x202: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x203: Push("@GetAttackDistance")
0x204: Push((int) 1)
0x205: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: @@ GetAttackDistance(Stack[-8])
0x208: Pop(0)
0x209: Push((int) 50)
0x20a: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x20b: GOTO 0x20d

0x20c: Stack[-8] = Stack[-21]
0x20d: Push((int) 150)
0x20e: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Stack[-8] = (int) 150
0x211: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x212: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x213: @ IsPlayerActor(Stack[-0], Stack[-5])
0x214: Pop(0)
0x215: Push(Stack[-22])
0x216: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x217: Stack[-4] = (bool) 0
0x218: GOTO 0x21a

0x219: Stack[-4] = (bool) 1
0x21a: PushEmpty(bool)
0x21b: Stack[-1] = (bool) 0
0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call 0x574

0x21f: Pop(1)
0x220: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x221: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Stack[-1] = (bool) 1
0x224: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x225: @@ GetPFPosition(Stack[-7])
0x226: Pop(0)
0x227: @ GetPFPosition(Stack[-6])
0x228: Pop(0)
0x229: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x22a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x22b: Push((float)400.0)
0x22c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x22d: Push((float)400.0)
0x22e: Pop(1); Push(Stack[-1] + Stack[-10]);
0x22f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x230: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x232: PushEmpty(bool, object, float, float, bool, bool)
0x233: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x234: Stack[-4] = Stack[-14]
0x235: Stack[-3] = (float) 10000.0
0x236: Stack[-2] = (bool) 1
0x237: Stack[-1] = (bool) 0
0x238: Push(-6, 2); TaskCall(4)
0x239: Call 0x3d1

0x23a: Pop(-6, 2); TaskReturn
0x23b: Pop(5)
0x23c: Pop(1); Push((bool) Stack[-1] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: GOTO 0x2a2

0x23f: Stack[-4] = (bool) 0
0x240: GOTO 0x2a1

0x241: Pop(0); Push(Stack[-21] * Stack[-21]);
0x242: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x244: Pop(0); Push((bool) Stack[-4] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x246: PushEmpty(object)
0x247: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x248: Call 0x5cf

0x249: Pop(1)
0x24a: Push("all")
0x24b: Push("attack_on")
0x24c: @ PlayAnimation(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: @ WaitForAnimEnd()
0x24f: Pop(0)
0x250: @ StopAsync()
0x251: Pop(0)
0x252: Stack[-4] = (bool) 1
0x253: @ rand(Stack[-1])
0x254: Pop(0)
0x255: PushEmpty(bool)
0x256: Stack[-1] = (bool) 1
0x257: Push((float)0.6)
0x258: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25a: PushEmpty(bool)
0x25b: Call 0x39e

0x25c: Pop(0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Stack[-1] = (bool) 0
0x25f: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x260: @ Face(Stack[-0])
0x261: Pop(0)
0x262: Push("all")
0x263: Push("attack_stay")
0x264: @ PlayAnimation(Stack[-2], Stack[-1])
0x265: Pop(2)
0x266: PushEmpty(bool, float)
0x267: Stack[-1] = Stack[-23]
0x268: Call 0x342

0x269: Pop(2)
0x26a: @ StopAsync()
0x26b: Pop(0)
0x26c: GOTO 0x298

0x26d: @ Face(Stack[-0])
0x26e: Pop(0)
0x26f: Push("all")
0x270: Push("fjump")
0x271: @ PlayAnimation(Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: @ WaitForAnimEnd()
0x274: Pop(0)
0x275: Push(CVector(0.0, 0.0, 0.0))
0x276: @ SetSpeed(Stack[-1])
0x277: Pop(1)
0x278: @ Stop()
0x279: Pop(0)
0x27a: @ StopAsync()
0x27b: Pop(0)
0x27c: PushEmpty(bool)
0x27d: Call 0x39e

0x27e: Pop(0)
0x27f: Pop(1); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x281: PushEmpty(bool, object)
0x282: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x283: Call 0x574

0x284: Pop(1)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x2a2

0x288: @@ GetPFPosition(Stack[-7])
0x289: Pop(0)
0x28a: @ GetPFPosition(Stack[-6])
0x28b: Pop(0)
0x28c: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x28d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x28e: Pop(0); Push(Stack[-21] * Stack[-21]);
0x28f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x291: PushEmpty(bool, float)
0x292: Stack[-1] = Stack[-23]
0x293: Call 0x2da

0x294: Pop(1)
0x295: Pop(1); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x2a2

0x298: GOTO 0x2a1

0x299: PushEmpty(bool, float)
0x29a: Stack[-1] = Stack[-23]
0x29b: Call 0x2da

0x29c: Pop(1)
0x29d: Pop(1); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2a2

0x2a0: Stack[-4] = (bool) 1
0x2a1: GOTO 0x21a

0x2a2: @ WaitForAnimEnd()
0x2a3: Pop(0)
0x2a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: Return(); Pop(20)

0x2a7: Push("all")
0x2a8: Push("attack_off")
0x2a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2aa: Pop(2)
0x2ab: @ WaitForAnimEnd()
0x2ac: Pop(0)
0x2ad: Push(Stack[-5])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: Push((float)2.0)
0x2b0: @ Sleep(Stack[-1])
0x2b1: Pop(1)
0x2b2: Return(); Pop(20)

0x2b3: PushEmpty(object, float, float, object, float, float)
0x2b4: Push((float)0.9)
0x2b5: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2b6: @ GetVictim(Stack[-1], Stack[-4])
0x2b7: Pop(1)
0x2b8: @ ReportAttack(Stack[-0])
0x2b9: Pop(0)
0x2ba: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2bc: PushEmpty(float, object, int)
0x2bd: Stack[-2] = Stack[-6]
0x2be: Stack[-1] = Stack[-10]
0x2bf: Call 0x1e0

0x2c0: Stack[-5] = Stack[-3]
0x2c1: Pop(3)
0x2c2: PushEmpty(float, object, float, int)
0x2c3: Stack[-3] = Stack[-7]
0x2c4: Stack[-2] = Stack[-6]
0x2c5: PushEmpty(int, object, int)
0x2c6: Stack[-2] = Stack[-10]
0x2c7: Stack[-1] = Stack[-14]
0x2c8: Call 0x1e3

0x2c9: Stack[-4] = Stack[-3]
0x2ca: Pop(3)
0x2cb: Call 0x50b

0x2cc: Stack[-5] = Stack[-4]
0x2cd: Pop(4)
0x2ce: PushEmpty(int)
0x2cf: Call 0x3c9

0x2d0: Pop(0)
0x2d1: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2d2: Pop(1)
0x2d3: PushEmpty(object, float)
0x2d4: Stack[-2] = Stack[-5]
0x2d5: Stack[-1] = Stack[-3]
0x2d6: Call 0x3cb

0x2d7: Pop(2)
0x2d8: Return(); Pop(6)

0x2d9: Stack[-3] = 0
0x2da: PushEmpty(int, bool, int, bool)
0x2db: @ irand(Stack[-2], Stack[-1])
0x2dc: Pop(0)
0x2dd: Push((int) 1)
0x2de: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2df: @ Face(Stack[-0])
0x2e0: Pop(0)
0x2e1: Push((bool) 1)
0x2e2: @ SetAttackState(Stack[-1])
0x2e3: Pop(1)
0x2e4: Push("all")
0x2e5: Push("attack_begin")
0x2e6: Pop(1); Push(Stack[-1] + Stack[-4]);
0x2e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: @ WaitForAnimEnd()
0x2ea: Pop(0)
0x2eb: PushEmpty()
0x2ec: Call 0x3a9

0x2ed: Pop(0)
0x2ee: PushEmpty(bool, object)
0x2ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f0: Call 0x574

0x2f1: Pop(1)
0x2f2: Pop(1); Push((bool) Stack[-1] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f4: @ StopAsync()
0x2f5: Pop(0)
0x2f6: Stack[-6] = (bool) 0
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(float, int)
0x2f9: Stack[-2] = Stack[-7]
0x2fa: Stack[-1] = Stack[-4]
0x2fb: Call 0x2b3

0x2fc: Pop(2)
0x2fd: Push("all")
0x2fe: Push("attack_middle")
0x2ff: Pop(1); Push(Stack[-1] + Stack[-4]);
0x300: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: Push(Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x304: Push("all")
0x305: Push("attack_middle")
0x306: Pop(1); Push(Stack[-1] + Stack[-4]);
0x307: @ PlayAnimation(Stack[-2], Stack[-1])
0x308: Pop(2)
0x309: @ WaitForAnimEnd()
0x30a: Pop(0)
0x30b: PushEmpty(bool, object)
0x30c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30d: Call 0x574

0x30e: Pop(1)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x311: @ StopAsync()
0x312: Pop(0)
0x313: Stack[-6] = (bool) 0
0x314: Return(); Pop(4)

0x315: PushEmpty(float, int)
0x316: Stack[-2] = Stack[-7]
0x317: Stack[-1] = Stack[-4]
0x318: Call 0x2b3

0x319: Pop(2)
0x31a: Push((bool) 0)
0x31b: @ SetAttackState(Stack[-1])
0x31c: Pop(1)
0x31d: Push("all")
0x31e: Push("attack_end")
0x31f: Pop(1); Push(Stack[-1] + Stack[-4]);
0x320: @ PlayAnimation(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: PushEmpty(bool, float)
0x323: Stack[-1] = (float) 0.75
0x324: Call 0x32a

0x325: Pop(2)
0x326: @ StopAsync()
0x327: Pop(0)
0x328: Stack[-6] = (bool) 1
0x329: Return(); Pop(4)

0x32a: PushEmpty(float, bool, float, bool)
0x32b: @ rand(Stack[-2])
0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x32e: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x32f: @ IsAnimationPlaying(Stack[-1])
0x330: Pop(0)
0x331: Pop(0); Push((bool) Stack[-1] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: GOTO 0x33d

0x334: PushEmpty(bool)
0x335: Call 0x36a

0x336: Pop(0)
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-6] = (bool) 1
0x339: Return(); Pop(4)

0x33a: @ sync()
0x33b: Pop(0)
0x33c: GOTO 0x32f

0x33d: GOTO 0x340

0x33e: @ WaitForAnimEnd()
0x33f: Pop(0)
0x340: Stack[-6] = (bool) 0
0x341: Return(); Pop(4)

0x342: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x343: @ IsAnimationPlaying(Stack[-5])
0x344: Pop(0)
0x345: Pop(0); Push((bool) Stack[-5] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x368

0x348: PushEmpty(bool)
0x349: Call 0x36a

0x34a: Pop(0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-12] = (bool) 1
0x34d: Return(); Pop(10)

0x34e: PushEmpty(bool, object)
0x34f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x350: Call 0x574

0x351: Pop(1)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-12] = (bool) 0
0x355: Return(); Pop(10)

0x356: @@ GetPFPosition(Stack[-4])
0x357: Pop(0)
0x358: @ GetPFPosition(Stack[-3])
0x359: Pop(0)
0x35a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x35b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x35c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x35d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x35f: PushEmpty(bool, float)
0x360: Stack[-1] = Stack[-13]
0x361: Call 0x2da

0x362: Pop(2)
0x363: Stack[-12] = (bool) 1
0x364: Return(); Pop(10)

0x365: @ sync()
0x366: Pop(0)
0x367: GOTO 0x343

0x368: Stack[-12] = (bool) 0
0x369: Return(); Pop(10)

0x36a: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36d: Call 0x574

0x36e: Pop(1)
0x36f: Pop(1); Push((bool) Stack[-1] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-11] = (bool) 0
0x372: Return(); Pop(10)

0x373: PushEmpty(bool)
0x374: Call 0x39e

0x375: Pop(0)
0x376: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x377: @@ GetPFPosition(Stack[-5])
0x378: Pop(0)
0x379: @ GetPFPosition(Stack[-4])
0x37a: Pop(0)
0x37b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x37c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x37d: @@ GetAttackDistance(Stack[-1])
0x37e: Pop(0)
0x37f: Push((int) 50)
0x380: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x381: Pop(0); Push(Stack[-1] * Stack[-1]);
0x382: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: PushEmpty()
0x385: Call 0x38b

0x386: Pop(0)
0x387: Stack[-11] = (bool) 1
0x388: Return(); Pop(10)

0x389: Stack[-11] = (bool) 0
0x38a: Return(); Pop(10)

0x38b: PushEmpty(cvector, cvector, cvector, cvector)
0x38c: @ Face(Stack[-0])
0x38d: Pop(0)
0x38e: Push("all")
0x38f: Push("bjump")
0x390: @ PlayAnimation(Stack[-2], Stack[-1])
0x391: Pop(2)
0x392: @@ GetPFPosition(Stack[-2])
0x393: Pop(0)
0x394: @ GetPFPosition(Stack[-1])
0x395: Pop(0)
0x396: @ WaitForAnimEnd()
0x397: Pop(0)
0x398: @ StopAsync()
0x399: Pop(0)
0x39a: Push(CVector(0.0, 0.0, 0.0))
0x39b: @ SetSpeed(Stack[-1])
0x39c: Pop(1)
0x39d: Return(); Pop(4)

0x39e: PushEmpty(bool, bool)
0x39f: Push("IsAttacking")
0x3a0: Push((int) 1)
0x3a1: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a3: @@ IsAttacking(Stack[-1])
0x3a4: Pop(0)
0x3a5: Stack[-3] = Stack[-1]
0x3a6: Return(); Pop(2)

0x3a7: Stack[-3] = (bool) 0
0x3a8: Return(); Pop(2)

0x3a9: PushEmpty(float, int, float, int)
0x3aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Return(); Pop(4)

0x3ad: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3af: Push((int) -1)
0x3b0: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3b1: Push((int) 0)
0x3b2: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: Return(); Pop(4)

0x3b5: @ rand(Stack[-2])
0x3b6: Pop(0)
0x3b7: PushEmpty(float)
0x3b8: Call 0x3cf

0x3b9: Pop(0)
0x3ba: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3bc: @ irand(Stack[-1], Stack[-2])
0x3bd: Pop(0)
0x3be: Push((int) 1)
0x3bf: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3c0: Push("attack")
0x3c1: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3c2: @ Speak(Stack[-1])
0x3c3: Pop(1)
0x3c4: PushEmpty(int)
0x3c5: Call 0x3cd

0x3c6: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x3c7: Pop(1)
0x3c8: Return(); Pop(4)

0x3c9: Stack[-1] = (int) 0
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = (int) 1
0x3ce: Return(); Pop(0)

0x3cf: Stack[-1] = (float) 0.5
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3d2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3d3: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3d4: Stack[-7] = Stack[-17]
0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-1] = Stack[-23]
0x3d7: Call 0x45d

0x3d8: Pop(1)
0x3d9: Pop(1); Push((bool) Stack[-1] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-22] = (bool) 0
0x3dc: Return(); Pop(16)

0x3dd: @@ GetPosition(Stack[-5])
0x3de: Pop(0)
0x3df: @ GetPosition(Stack[-4])
0x3e0: Pop(0)
0x3e1: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3e2: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3e3: PushEmpty(bool)
0x3e4: Stack[-1] = (bool) 0
0x3e5: Push((int) 0)
0x3e6: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3e9: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: Stack[-1] = (bool) 1
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ed: @ Stop()
0x3ee: Pop(0)
0x3ef: Stack[-22] = (bool) 0
0x3f0: Return(); Pop(16)

0x3f1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f2: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x3f4: @@ GetPFPosition(Stack[-5])
0x3f5: Pop(0)
0x3f6: @ FindPathTo(Stack[-1], Stack[-5])
0x3f7: Pop(0)
0x3f8: Pop(0); Push(( Stack[-1] != 0 )
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-6] = Stack[-1]
0x3fb: Stack[-1] = 0
0x3fc: Pop(0); Push(( Stack[-6] != 0 )
0x3fd: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x3fe: Push(Stack[-7])
0x3ff: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x400: Stack[-7] = (bool) 0
0x401: @ RotatePath(Stack[-6], Stack[-8])
0x402: Pop(0)
0x403: Pop(0); Push((bool) Stack[-8] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x435

0x406: Push((int) 0)
0x407: Push((float)0.3)
0x408: @ SetTimer(Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: PushEmpty(string)
0x40b: Call 0x464

0x40c: Pop(0)
0x40d: PushEmpty(string)
0x40e: Call 0x466

0x40f: Pop(0)
0x410: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x411: Pop(2)
0x412: Pop(0); Push((bool) Stack[-8] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x414: Push( Stack[0 + Tasks[-1].StackPointer] )
0x415: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x416: Stack[-6] = 0
0x417: GOTO 0x435

0x418: GOTO 0x41a

0x419: GOTO 0x434

0x41a: GOTO 0x41c

0x41b: Stack[-6] = 0
0x41c: GOTO 0x42d

0x41d: Push((int) 0)
0x41e: @ KillTimer(Stack[-1])
0x41f: Pop(1)
0x420: Push((float)0.5)
0x421: @ Sleep(Stack[-1], Stack[-9])
0x422: Pop(1)
0x423: Pop(0); Push((bool) Stack[-8] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x425: Push( Stack[0 + Tasks[-1].StackPointer] )
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: Stack[-6] = 0
0x428: GOTO 0x435

0x429: Push((int) 0)
0x42a: Push((float)0.3)
0x42b: @ SetTimer(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: Stack[-1] = 0
0x42e: GOTO 0x433

0x42f: Push((int) 0)
0x430: @ KillTimer(Stack[-1])
0x431: Pop(1)
0x432: GOTO 0x435

0x433: Stack[-6] = 0
0x434: GOTO 0x3d5

0x435: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x436: Return(); Pop(16)

0x437: PushEmpty()
0x438: Push((int) 0)
0x439: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: Return(); Pop(0)

0x43c: PushEmpty(bool, object)
0x43d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43e: Call 0x45d

0x43f: Pop(1)
0x440: Pop(1); Push((bool) Stack[-1] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x443: Push((int) 0)
0x444: @ KillTimer(Stack[-1])
0x445: Pop(1)
0x446: @ Stop()
0x447: Pop(0)
0x448: Return(); Pop(0)

0x449: PushEmpty()
0x44a: @ RequestClearPath(Stack[-1])
0x44b: Pop(0)
0x44c: Return(); Pop(0)

0x44d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x44e: Push((int) 0)
0x44f: @ KillTimer(Stack[-1])
0x450: Pop(1)
0x451: @ Stop()
0x452: Pop(0)
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: PushEmpty()
0x456: Call 0x44d

0x457: Pop(0)
0x458: PushEmpty(object)
0x459: Stack[-1] = Stack[-2]
0x45a: Call 0x6ca

0x45b: Pop(1)
0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[-3]
0x460: Call 0x574

0x461: Stack[-4] = Stack[-2]
0x462: Pop(2)
0x463: Return(); Pop(0)

0x464: Stack[-1] = "walk"
0x465: Return(); Pop(0)

0x466: Stack[-1] = "run"
0x467: Return(); Pop(0)

0x468: PushEmpty()
0x469: PushEmpty(object)
0x46a: Stack[-1] = Stack[-2]
0x46b: Call 0x47d

0x46c: Pop(1)
0x46d: Push((int) 50)
0x46e: Push((int) 40)
0x46f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x470: Pop(2)
0x471: @ Hold()
0x472: Pop(0)
0x473: GOTO 0x471

0x474: Return(); Pop(0)

0x475: PushEmpty(bool, bool)
0x476: @ IsOverrideActive(Stack[-1])
0x477: Pop(0)
0x478: Pop(0); Push((bool) Stack[-1] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: @ WorkWithCorpse(Stack[-3])
0x47b: Pop(0)
0x47c: Return(); Pop(2)

0x47d: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x47e: Pop(0); Push((bool) Stack[-21] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x480: PushEmpty(string)
0x481: Stack[-1] = "fdie"
0x482: Call 0x4d4

0x483: Pop(1)
0x484: GOTO 0x4d3

0x485: @@ GetPosition(Stack[-10])
0x486: Pop(0)
0x487: @ GetPosition(Stack[-9])
0x488: Pop(0)
0x489: @ GetDirection(Stack[-8])
0x48a: Pop(0)
0x48b: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x48c: Push(CvectorIndex(Stack[-7], 0))
0x48d: Push(CvectorIndex(Stack[-9], 0))
0x48e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x48f: Push(CvectorIndex(Stack[-8], 2))
0x490: Push(CvectorIndex(Stack[-10], 2))
0x491: Pop(2); Push(Stack[-2] * Stack[-1]);
0x492: Pop(2); Push(Stack[-2] + Stack[-1]);
0x493: Push((int) 0)
0x494: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-6] = "fdie"
0x497: GOTO 0x499

0x498: Stack[-6] = "bdie"
0x499: @ RemoveRTEnvelope()
0x49a: Pop(0)
0x49b: @ SetDeathState()
0x49c: Pop(0)
0x49d: @ Stop()
0x49e: Pop(0)
0x49f: @ StopAsync()
0x4a0: Pop(0)
0x4a1: Stack[-5] = Stack[-21]
0x4a2: Push("GetScriptProperty")
0x4a3: Push((int) 2)
0x4a4: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a6: Push("Owner")
0x4a7: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4a8: Pop(1)
0x4a9: Push(Stack[-4])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4ab: Push("Owner")
0x4ac: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4ad: Pop(1)
0x4ae: Pop(0); Push((bool) Stack[-5] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: Stack[-5] = Stack[-21]
0x4b1: Push("@GetEyesHeight")
0x4b2: Push((int) 1)
0x4b3: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4b4: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4b5: @@ GetEyesHeight(Stack[-2])
0x4b6: Pop(0)
0x4b7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4b8: Push(CvectorIndex(Stack[-1], 1))
0x4b9: Stack[-1] = Stack[-3]
0x4ba: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4bb: Push("head")
0x4bc: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4bd: Pop(1)
0x4be: Stack[-3] = (bool) 1
0x4bf: GOTO 0x4c1

0x4c0: Stack[-3] = (bool) 0
0x4c1: Push("all")
0x4c2: @ PlayAnimation(Stack[-1], Stack[-7])
0x4c3: Pop(1)
0x4c4: @ WaitForAnimEnd()
0x4c5: Pop(0)
0x4c6: Push(Stack[-3])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c8: @ StopAsync()
0x4c9: Pop(0)
0x4ca: Push("head")
0x4cb: @ UnlookAsync(Stack[-1])
0x4cc: Pop(1)
0x4cd: Push("all")
0x4ce: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4cf: Pop(1)
0x4d0: @ RemoveEnvelope()
0x4d1: Pop(0)
0x4d2: Stack[-5] = 0
0x4d3: Return(); Pop(20)

0x4d4: PushEmpty()
0x4d5: @ RemoveRTEnvelope()
0x4d6: Pop(0)
0x4d7: @ SetDeathState()
0x4d8: Pop(0)
0x4d9: @ Stop()
0x4da: Pop(0)
0x4db: @ StopAsync()
0x4dc: Pop(0)
0x4dd: @ StopSecondaryAnimation()
0x4de: Pop(0)
0x4df: Push("all")
0x4e0: @ PlayAnimation(Stack[-1], Stack[-2])
0x4e1: Pop(1)
0x4e2: @ WaitForAnimEnd()
0x4e3: Pop(0)
0x4e4: Push("all")
0x4e5: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4e6: Pop(1)
0x4e7: @ RemoveEnvelope()
0x4e8: Pop(0)
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty()
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty()
0x4ed: Return(); Pop(0)

0x4ee: PushEmpty()
0x4ef: Return(); Pop(0)

0x4f0: PushEmpty()
0x4f1: Push((int) 1)
0x4f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: Stack[-2] = "fire"
0x4f5: Return(); Pop(0)

0x4f6: Stack[-2] = "phys"
0x4f7: Return(); Pop(0)

0x4f8: PushEmpty(bool, bool)
0x4f9: Push("HasProperty")
0x4fa: Push((int) 2)
0x4fb: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4fc: Pop(1); Push((bool) Stack[-1] == 0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4fe: Stack[-5] = (bool) 0
0x4ff: Return(); Pop(2)

0x500: @@ HasProperty(Stack[-3], Stack[-1])
0x501: Pop(0)
0x502: Stack[-5] = Stack[-1]
0x503: Return(); Pop(2)

0x504: PushEmpty(int, int)
0x505: @@ GetProperty(Stack[-4], Stack[-1])
0x506: Pop(0)
0x507: Pop(0); Push(Stack[-1] + Stack[-3]);
0x508: @@ SetProperty(Stack[-5], Stack[-1])
0x509: Pop(1)
0x50a: Return(); Pop(2)

0x50b: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x50c: PushEmpty(bool, object, string)
0x50d: Stack[-2] = Stack[-18]
0x50e: Stack[-1] = "health"
0x50f: Call 0x4f8

0x510: Pop(2)
0x511: Pop(1); Push((bool) Stack[-1] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: Stack[-16] = (float) 0.0
0x514: Return(); Pop(12)

0x515: PushEmpty(bool, object, string)
0x516: Stack[-2] = Stack[-18]
0x517: Stack[-1] = "armor"
0x518: Call 0x4f8

0x519: Pop(2)
0x51a: Pop(1); Push((bool) Stack[-1] == 0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-6] = (int) 0
0x51d: GOTO 0x521

0x51e: Push("armor")
0x51f: @@ GetProperty(Stack[-1], Stack[-7])
0x520: Pop(1)
0x521: Push("armor_")
0x522: PushEmpty(string, int)
0x523: Stack[-1] = Stack[-16]
0x524: Call 0x4f0

0x525: Pop(1)
0x526: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x527: PushEmpty(bool, object, string)
0x528: Stack[-2] = Stack[-18]
0x529: Stack[-1] = Stack[-8]
0x52a: Call 0x4f8

0x52b: Pop(2)
0x52c: Pop(1); Push((bool) Stack[-1] == 0)
0x52d: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52e: Stack[-4] = (int) 0
0x52f: GOTO 0x532

0x530: @@ GetProperty(Stack[-5], Stack[-4])
0x531: Pop(0)
0x532: PushEmpty(float, float, float)
0x533: Pop(0); Push(Stack[-9] + Stack[-7]);
0x534: Push((float)100.0)
0x535: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x536: Stack[-1] = (int) 1
0x537: Call 0x63d

0x538: Stack[-6] = Stack[-3]
0x539: Pop(3)
0x53a: Push("health")
0x53b: @@ GetProperty(Stack[-1], Stack[-3])
0x53c: Pop(1)
0x53d: Push((int) 1)
0x53e: Pop(1); Push(Stack[-1] - Stack[-4]);
0x53f: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x540: Push("health")
0x541: PushEmpty(float, float, float, float)
0x542: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x543: Stack[-2] = (int) 0
0x544: Stack[-1] = (int) 1
0x545: Call 0x644

0x546: Pop(3)
0x547: @@ SetProperty(Stack[-2], Stack[-1])
0x548: Pop(2)
0x549: Stack[-16] = Stack[-1]
0x54a: Return(); Pop(12)

0x54b: PushEmpty(bool, bool)
0x54c: @@ IsDead(Stack[-1])
0x54d: Pop(0)
0x54e: Stack[-4] = Stack[-1]
0x54f: Return(); Pop(2)

0x550: PushEmpty(object, object, object, object)
0x551: Pop(0); Push((bool) Stack[-5] == 0)
0x552: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x553: Stack[-6] = (bool) 0
0x554: Return(); Pop(4)

0x555: PushEmpty(bool)
0x556: Stack[-1] = (bool) 0
0x557: Push("IsDead")
0x558: Push((int) 1)
0x559: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x55a: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55b: PushEmpty(bool, object)
0x55c: Stack[-1] = Stack[-8]
0x55d: Call 0x54b

0x55e: Pop(1)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Stack[-1] = (bool) 1
0x561: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x562: Stack[-6] = (bool) 0
0x563: Return(); Pop(4)

0x564: @ GetScene(Stack[-2])
0x565: Pop(0)
0x566: Pop(0); Push((bool) Stack[-2] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x568: Stack[-6] = (bool) 0
0x569: Return(); Pop(4)

0x56a: @@ GetScene(Stack[-1])
0x56b: Pop(0)
0x56c: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56e: Stack[-6] = (bool) 0
0x56f: Return(); Pop(4)

0x570: Stack[-6] = (bool) 1
0x571: Return(); Pop(4)

0x572: Stack[-1] = 0
0x573: Stack[-2] = 0
0x574: PushEmpty(int, int)
0x575: PushEmpty(bool, object)
0x576: Stack[-1] = Stack[-5]
0x577: Call 0x550

0x578: Pop(1)
0x579: Pop(1); Push((bool) Stack[-1] == 0)
0x57a: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57b: Stack[-4] = (bool) 0
0x57c: Return(); Pop(2)

0x57d: PushEmpty(bool, object, string)
0x57e: Stack[-2] = Stack[-6]
0x57f: Stack[-1] = "noaccess"
0x580: Call 0x4f8

0x581: Pop(2)
0x582: Pop(1); Push((bool) Stack[-1] == 0)
0x583: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x584: Stack[-4] = (bool) 1
0x585: Return(); Pop(2)

0x586: Push("noaccess")
0x587: @@ GetProperty(Stack[-1], Stack[-2])
0x588: Pop(1)
0x589: Push((int) 0)
0x58a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x58b: Return(); Pop(2)

0x58c: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x58d: PushEmpty(bool)
0x58e: Stack[-1] = (bool) 0
0x58f: Push((int) 4)
0x590: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x592: Push((int) 5)
0x593: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x595: Stack[-1] = (bool) 1
0x596: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x597: @ GetScene(Stack[-10])
0x598: Pop(0)
0x599: @ GetPosition(Stack[-8])
0x59a: Pop(0)
0x59b: @ GetEyesHeight(Stack[-7])
0x59c: Pop(0)
0x59d: Push(CvectorIndex(Stack[-8], 1))
0x59e: Push((int) 2)
0x59f: Pop(1); Push(Stack[-9] / Stack[-1]);
0x5a0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5a1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5a2: Push("scripted")
0x5a3: Push(CVector(0.0, 0.0, 1.0))
0x5a4: Push("blood.xml")
0x5a5: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Stack[-9] = 0
0x5a8: Stack[-10] = 0
0x5a9: Pop(0); Push((bool) Stack[-23] == 0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5ab: Return(); Pop(20)

0x5ac: @ GetSecondaryAnimationType(Stack[-6])
0x5ad: Pop(0)
0x5ae: Push((int) 0)
0x5af: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Return(); Pop(20)

0x5b2: @@ GetPosition(Stack[-5])
0x5b3: Pop(0)
0x5b4: @ GetPosition(Stack[-4])
0x5b5: Pop(0)
0x5b6: @ GetDirection(Stack[-3])
0x5b7: Pop(0)
0x5b8: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5b9: Push(CvectorIndex(Stack[-2], 0))
0x5ba: Push(CvectorIndex(Stack[-4], 0))
0x5bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5bc: Push(CvectorIndex(Stack[-3], 2))
0x5bd: Push(CvectorIndex(Stack[-5], 2))
0x5be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c0: Push((int) 0)
0x5c1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c3: Stack[-1] = "fhit"
0x5c4: GOTO 0x5c6

0x5c5: Stack[-1] = "bhit"
0x5c6: Push("hit_react")
0x5c7: Push("1")
0x5c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5c9: Push("2")
0x5ca: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5cb: Push((int) -10)
0x5cc: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(4)
0x5ce: Return(); Pop(20)

0x5cf: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5d0: @@ GetPosition(Stack[-3])
0x5d1: Pop(0)
0x5d2: @ GetPosition(Stack[-2])
0x5d3: Pop(0)
0x5d4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5d5: Push(CvectorIndex(Stack[-1], 0))
0x5d6: Push(CvectorIndex(Stack[-2], 2))
0x5d7: @ RotateAsync(Stack[-2], Stack[-1])
0x5d8: Pop(2)
0x5d9: Return(); Pop(6)

0x5da: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x5db: @@ GetPosition(Stack[-7])
0x5dc: Pop(0)
0x5dd: @@ GetEyesHeight(Stack[-8])
0x5de: Pop(0)
0x5df: Push(CvectorIndex(Stack[-7], 1))
0x5e0: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x5e1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5e2: @ GetPosition(Stack[-6])
0x5e3: Pop(0)
0x5e4: @ GetEyesHeight(Stack[-8])
0x5e5: Pop(0)
0x5e6: Push(CvectorIndex(Stack[-6], 1))
0x5e7: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x5e8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x5e9: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x5ea: Push(CvectorIndex(Stack[-5], 1))
0x5eb: Stack[-1] = (int) 0
0x5ec: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x5ed: Pop(0); Push(Stack[-5] | Stack[-5]);
0x5ee: Pop(1); Push(Sqrt(Stack[-1]))
0x5ef: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x5f0: Stack[-4] = -Stack[-5]; Pop(0);
0x5f1: Push((int) 70)
0x5f2: Pop(1); Push(Stack[-6] * Stack[-1]);
0x5f3: PushEmpty(cvector, cvector)
0x5f4: Push(CVector(0.0, 1.0, 0.0))
0x5f5: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x5f6: Call 0x62f

0x5f7: Pop(1)
0x5f8: Push((int) 25)
0x5f9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5fa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5fb: Push(CVector(0.0, 10.0, 0.0))
0x5fc: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x5fd: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x5fe: @ IsOverrideActive(Stack[-1])
0x5ff: Pop(0)
0x600: Push(Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-18] = (bool) 0
0x603: Return(); Pop(16)

0x604: @ StopWorld()
0x605: Pop(0)
0x606: @ CameraTransit(Stack[-2], Stack[-4])
0x607: Pop(0)
0x608: Push(CvectorIndex(Stack[-3], 0))
0x609: Push(CvectorIndex(Stack[-4], 2))
0x60a: @ Rotate(Stack[-2], Stack[-1])
0x60b: Pop(2)
0x60c: @ CameraWaitForPlayFinish()
0x60d: Pop(0)
0x60e: @ ResumeWorld()
0x60f: Pop(0)
0x610: Stack[-18] = (bool) 1
0x611: Return(); Pop(16)

0x612: PushEmpty()
0x613: @ CameraSwitchToNormal()
0x614: Pop(0)
0x615: Return(); Pop(0)

0x616: PushEmpty(float, float, float, float)
0x617: Push("playing ")
0x618: Pop(1); Push(Stack[-1] + Stack[-6]);
0x619: @ Trace(Stack[-1])
0x61a: Pop(1)
0x61b: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x61c: Pop(0)
0x61d: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x61e: Pop(0)
0x61f: Push("start: ")
0x620: Pop(1); Push(Stack[-1] + Stack[-3]);
0x621: @ Trace(Stack[-1])
0x622: Pop(1)
0x623: Push("end: ")
0x624: Pop(1); Push(Stack[-1] + Stack[-2]);
0x625: @ Trace(Stack[-1])
0x626: Pop(1)
0x627: Return(); Pop(4)

0x628: PushEmpty(bool)
0x629: Call 0x6a1

0x62a: Pop(0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: @ lshStopSpeech()
0x62d: Pop(0)
0x62e: Return(); Pop(0)

0x62f: PushEmpty(float, float)
0x630: Pop(0); Push(Stack[-3] | Stack[-3]);
0x631: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x632: Push((float)0.0)
0x633: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x635: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x636: Return(); Pop(2)

0x637: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x638: Return(); Pop(2)

0x639: PushEmpty(cvector, cvector)
0x63a: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x63b: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x63c: Return(); Pop(2)

0x63d: PushEmpty()
0x63e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x63f: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x640: Stack[-3] = Stack[-2]
0x641: GOTO 0x643

0x642: Stack[-3] = Stack[-1]
0x643: Return(); Pop(0)

0x644: PushEmpty()
0x645: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-4] = Stack[-2]
0x648: Return(); Pop(0)

0x649: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64b: Stack[-4] = Stack[-1]
0x64c: Return(); Pop(0)

0x64d: Stack[-4] = Stack[-3]
0x64e: Return(); Pop(0)

0x64f: PushEmpty(object, object)
0x650: @ FindActor(Stack[-1], Stack[-4])
0x651: Pop(0)
0x652: Pop(0); Push((bool) Stack[-1] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-5] = (bool) 0
0x655: Return(); Pop(2)

0x656: @ Trigger(Stack[-1], Stack[-3])
0x657: Pop(0)
0x658: Stack[-5] = (bool) 1
0x659: Return(); Pop(2)

0x65a: Stack[-1] = 0
0x65b: PushEmpty()
0x65c: Push("d3q01")
0x65d: Push((int) 8)
0x65e: @ SetVariable(Stack[-2], Stack[-1])
0x65f: Pop(2)
0x660: PushEmpty(bool, string, string)
0x661: Stack[-2] = "quest_d3_01"
0x662: Stack[-1] = "gpatrol_attack"
0x663: Call 0x64f

0x664: Pop(3)
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: PushEmpty(object, string, int)
0x668: Stack[-3] = Stack[-5]
0x669: Stack[-2] = "money"
0x66a: Stack[-1] = (int) -10000
0x66b: Call 0x504

0x66c: Pop(3)
0x66d: Return(); Pop(0)

0x66e: PushEmpty()
0x66f: PushEmpty(bool, string, string)
0x670: Stack[-2] = "quest_d3_01"
0x671: Stack[-1] = "gpatrol_talk"
0x672: Call 0x64f

0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: PushEmpty()
0x676: Push("playsound")
0x677: Push("givemoney")
0x678: @ TriggerWorld(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: Return(); Pop(0)

0x67b: PushEmpty()
0x67c: PushEmpty(bool, object)
0x67d: Stack[-1] = Stack[-3]
0x67e: Call 0x685

0x67f: Pop(1)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-2] = (bool) 1
0x682: Return(); Pop(0)

0x683: Stack[-2] = (bool) 0
0x684: Return(); Pop(0)

0x685: PushEmpty(int, int)
0x686: Push("money")
0x687: @@ GetProperty(Stack[-1], Stack[-2])
0x688: Pop(1)
0x689: Push((int) 10000)
0x68a: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x68b: Return(); Pop(2)

0x68c: PushEmpty(int, int)
0x68d: Push("player")
0x68e: @ GetVariable(Stack[-1], Stack[-2])
0x68f: Pop(1)
0x690: Push((int) 0)
0x691: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x692: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x693: Stack[-3] = (int) 200001
0x694: Return(); Pop(2)

0x695: GOTO 0x69b

0x696: Push((int) 1)
0x697: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-3] = (int) 200002
0x69a: Return(); Pop(2)

0x69b: Stack[-3] = (int) 200003
0x69c: Return(); Pop(2)

0x69d: Stack[-1] = (int) 4031
0x69e: Return(); Pop(0)

0x69f: Stack[-1] = "ui/NPC_Black.png"
0x6a0: Return(); Pop(0)

0x6a1: Stack[-1] = (bool) 0
0x6a2: Return(); Pop(0)

0x6a3: PushEmpty(bool, bool)
0x6a4: Push("revolver_ammo")
0x6a5: Push((int) 0)
0x6a6: Push((int) 2)
0x6a7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6a8: Pop(3)
0x6a9: Push("alpha_pills")
0x6aa: Push((int) 0)
0x6ab: Push((int) 2)
0x6ac: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: PushEmpty(object)
0x6af: Stack[-1] = Stack[-4]
0x6b0: Push(-1, 0); TaskCall(5)
0x6b1: Call 0x468

0x6b2: Pop(-1, 0); TaskReturn
0x6b3: Pop(1)
0x6b4: Return(); Pop(2)

0x6b5: PushEmpty()
0x6b6: PushEmpty(object, int, float)
0x6b7: Stack[-3] = Stack[-7]
0x6b8: Stack[-2] = Stack[-6]
0x6b9: Stack[-1] = Stack[-5]
0x6ba: Call 0x58c

0x6bb: Pop(3)
0x6bc: Return(); Pop(0)

0x6bd: PushEmpty(float, float)
0x6be: Push("health")
0x6bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c1: Push("health")
0x6c2: @ GetProperty(Stack[-1], Stack[-2])
0x6c3: Pop(1)
0x6c4: Push((int) 0)
0x6c5: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c7: @ SignalDeath(Stack[-4])
0x6c8: Pop(0)
0x6c9: Return(); Pop(2)

0x6ca: PushEmpty()
0x6cb: PushEmpty(object)
0x6cc: Stack[-1] = Stack[-2]
0x6cd: Call 0x6a3

0x6ce: Pop(1)
0x6cf: Return(); Pop(0)

