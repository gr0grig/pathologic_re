GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	attack_begin2
	attack_end2
	quest_d11_01
	teleport
	soldier_attack
	health
	d11q01
	restore_andrei
	player
	head
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	fhit
	bhit
	hit_react
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	HasItem
	SetReturnValue
	burah_serum
	RemoveItemByType
	playsound
	giveitem
	ood11Officer1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	RemoveStationaryActor

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
	WaitForAnimEnd (1 args)
	SetProperty (2 args)
	SetVariable (2 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x18c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x198 Vars = (object)
		EVENT_17 Op = 0x1bb Vars = (object)
		EVENT_7 Op = 0x1ff Vars = (int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x289 Vars = (object)
		EVENT_22 Op = 0x308 Vars = (object, int, float, float)
		EVENT_16 Op = 0x30a Vars = (object, string)
		EVENT_41 Op = 0x30c Vars = (object)

Events:
EVENT_22 Op = 0x57a Vars = (object, int, float, float)
EVENT_43 Op = 0x582 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x58c Vars = (object, string)
EVENT_41 Op = 0x59c Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3a0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x562

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x560

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x564

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x566

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x53c

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
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
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x3e5

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x4e0

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x4cf

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x8e

0x5d: Pop(1)
0x5e: Push((int) 514445)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 514456)
0x64: Push((int) 15687)
0x65: Push((int) 15686)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 514446)
0x69: Push((int) 15675)
0x6a: Push((int) 15674)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x568

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x3f7

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x568

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x407

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x421

0xa9: Pop(0)
0xaa: Push((int) 42007)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x4a2

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x4a8

0xb6: Pop(2)
0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x4b9

0xbb: Pop(2)
0xbc: Push((int) 42008)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x491

0xc3: Pop(2)
0xc4: Push((int) 15679)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x491

0xcb: Pop(2)
0xcc: Push((int) 42005)
0xcd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x4bf

0xd3: Pop(2)
0xd4: Push((int) 15673)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xd7: PushEmpty(bool, object)
0xd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Call2 0x4e0

0xda: Pop(1)
0xdb: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x4cf

0xe0: Pop(2)
0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x8e

0xe4: Pop(1)
0xe5: Push((int) 514445)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 514456)
0xeb: Push((int) 15687)
0xec: Push((int) 15686)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 514446)
0xf0: Push((int) 15675)
0xf1: Push((int) 15674)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 15675)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call2 0x8e

0xfb: Pop(1)
0xfc: Push((int) 514447)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 514448)
0x102: Push((int) 15677)
0x103: Push((int) 15676)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 514452)
0x107: Push((int) 15681)
0x108: Push((int) 15680)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 15681)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call2 0x8e

0x112: Pop(1)
0x113: Push((int) 514453)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 514454)
0x119: Push((int) 15677)
0x11a: Push((int) 15682)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 514455)
0x11e: Push((int) 15677)
0x11f: Push((int) 15684)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 15677)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0x8e

0x129: Pop(1)
0x12a: Push((int) 514449)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 514450)
0x130: Push((int) 42006)
0x131: Push((int) 15678)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Push((int) 514451)
0x135: Push((int) -1)
0x136: Push((int) 15679)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 540038)
0x13a: Push((int) -1)
0x13b: Push((int) 42005)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Push((int) 42006)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Neutral"
0x144: Call2 0x8e

0x145: Pop(1)
0x146: Push((int) 540039)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x4d5

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 540040)
0x151: Push((int) -1)
0x152: Push((int) 42007)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 540041)
0x156: Push((int) -1)
0x157: Push((int) 42008)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 15687)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call2 0x8e

0x161: Pop(1)
0x162: Push((int) 514457)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 514458)
0x168: Push((int) 15689)
0x169: Push((int) 15688)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 15689)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call2 0x8e

0x173: Pop(1)
0x174: Push((int) 514459)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 514460)
0x17a: Push((int) 15681)
0x17b: Push((int) 15690)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x180: PushEmpty(bool)
0x181: Call2 0x568

0x182: Pop(0)
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: @ lshStopAnimation()
0x185: Pop(0)
0x186: GOTO 0x189

0x187: @ StopAnimation()
0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: GOTO 0xa5

0x18b: Return(); Pop(0)

0x18c: Push(GlobalVars[1])
0x18d: Stack[-1] = (bool) 0
0x18e: GlobalVars[1] = Stack[-1]; Pop(1)
0x18f: Push((bool) 1)
0x190: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x191: PushEmpty(float, float)
0x192: Stack[-2] = (int) 300
0x193: Stack[-1] = (int) 100
0x194: Call2 0x1d5

0x195: Pop(2)
0x196: GOTO 0x18f

0x197: Return(); Pop(0)

0x198: PushEmpty(int, bool, int, bool)
0x199: PushEmpty()
0x19a: Call2 0x216

0x19b: Pop(0)
0x19c: PushEmpty(int, object)
0x19d: Stack[-1] = Stack[-7]
0x19e: Push(-2, 1); TaskCall(0)
0x19f: Call2 0x0

0x1a0: Pop(-2, 1); TaskReturn
0x1a1: Stack[-4] = Stack[-2]
0x1a2: Pop(2)
0x1a3: Push((int) 0)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a6: Push(GlobalVars[1])
0x1a7: Stack[-1] = (bool) 1
0x1a8: GlobalVars[1] = Stack[-1]; Pop(1)
0x1a9: Push("all")
0x1aa: Push("attack_begin2")
0x1ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ac: Pop(2)
0x1ad: @ WaitForAnimEnd(Stack[-1])
0x1ae: Pop(0)
0x1af: Push("all")
0x1b0: Push("attack_end2")
0x1b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: @ WaitForAnimEnd(Stack[-1])
0x1b4: Pop(0)
0x1b5: PushEmpty(bool, string, string)
0x1b6: Stack[-2] = "quest_d11_01"
0x1b7: Stack[-1] = "teleport"
0x1b8: Call2 0x46d

0x1b9: Pop(3)
0x1ba: Return(); Pop(4)

0x1bb: PushEmpty()
0x1bc: PushEmpty()
0x1bd: Call2 0x216

0x1be: Pop(0)
0x1bf: PushEmpty(bool, string, string)
0x1c0: Stack[-2] = "quest_d11_01"
0x1c1: Stack[-1] = "soldier_attack"
0x1c2: Call2 0x46d

0x1c3: Pop(3)
0x1c4: Push("health")
0x1c5: Push((int) 0)
0x1c6: @ SetProperty(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: Push("d11q01")
0x1c9: Push((int) 3)
0x1ca: @ SetVariable(Stack[-2], Stack[-1])
0x1cb: Pop(2)
0x1cc: PushEmpty(bool, string, string)
0x1cd: Stack[-2] = "quest_d11_01"
0x1ce: Stack[-1] = "restore_andrei"
0x1cf: Call2 0x46d

0x1d0: Pop(3)
0x1d1: PushEmpty()
0x1d2: Call2 0x4ec

0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: PushEmpty(bool)
0x1d7: Call2 0x39b

0x1d8: Pop(0)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Return(); Pop(0)

0x1dc: Push("player")
0x1dd: @ FindActor(Stack[-4], Stack[-1])
0x1de: Pop(1)
0x1df: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1e3: Push((int) 10)
0x1e4: Push((float)1.0)
0x1e5: @ SetTimer(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: PushEmpty()
0x1e8: Call2 0x224

0x1e9: Pop(0)
0x1ea: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ec: Push((int) 10)
0x1ed: @ KillTimer(Stack[-1])
0x1ee: Pop(1)
0x1ef: Return(); Pop(0)

0x1f0: PushEmpty(float, float)
0x1f1: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-3] = (bool) 0
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(float, object)
0x1f6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f7: Call2 0x315

0x1f8: Pop(1)
0x1f9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1fa: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1fd: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1fe: Return(); Pop(2)

0x1ff: PushEmpty()
0x200: Push((int) 10)
0x201: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x203: PushEmpty(bool)
0x204: Call2 0x1f0

0x205: Pop(0)
0x206: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x207: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x209: PushEmpty(object)
0x20a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20b: Call2 0x416

0x20c: Pop(1)
0x20d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x20e: GOTO 0x215

0x20f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x211: Push("head")
0x212: @ UnlookAsync(Stack[-1])
0x213: Pop(1)
0x214: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x215: Return(); Pop(0)

0x216: PushEmpty()
0x217: Call2 0x275

0x218: Pop(0)
0x219: Push((int) 10)
0x21a: @ KillTimer(Stack[-1])
0x21b: Pop(1)
0x21c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21d: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21e: Push("head")
0x21f: @ UnlookAsync(Stack[-1])
0x220: Pop(1)
0x221: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x222: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x223: Return(); Pop(0)

0x224: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x225: @ WaitForAnimEnd()
0x226: Pop(0)
0x227: PushEmpty(bool)
0x228: Call2 0x39b

0x229: Pop(0)
0x22a: Pop(1); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Return(); Pop(14)

0x22d: PushEmpty(int)
0x22e: Call2 0x480

0x22f: Stack[-8] = Stack[-1]
0x230: Pop(1)
0x231: Stack[-6] = (int) 0
0x232: PushEmpty(bool)
0x233: Stack[-1] = (bool) 0
0x234: Push((int) 5)
0x235: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: PushEmpty(bool)
0x238: Call2 0x39b

0x239: Pop(0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[-1] = (bool) 1
0x23c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x23d: Push((int) 3)
0x23e: @ irand(Stack[-6], Stack[-1])
0x23f: Pop(1)
0x240: Push((int) 0)
0x241: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x243: Push(Stack[-7])
0x244: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x245: @ irand(Stack[-4], Stack[-7])
0x246: Pop(0)
0x247: Push("all")
0x248: PushEmpty(string, int)
0x249: Stack[-1] = Stack[-7]
0x24a: Call2 0x479

0x24b: Pop(1)
0x24c: @ PlayAnimation(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: @ WaitForAnimEnd(Stack[-3])
0x24f: Pop(0)
0x250: Pop(0); Push((bool) Stack[-3] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x270

0x253: GOTO 0x265

0x254: Push((int) 1)
0x255: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x257: Push((int) 4)
0x258: @ rand(Stack[-3], Stack[-1])
0x259: Pop(1)
0x25a: Push((int) 1)
0x25b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25c: @ Sleep(Stack[-1], Stack[-2])
0x25d: Pop(1)
0x25e: Pop(0); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: GOTO 0x270

0x261: GOTO 0x265

0x262: Push(Stack[-6])
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x270

0x265: PushEmpty(bool)
0x266: Call2 0x273

0x267: Pop(0)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x270

0x26b: @ ResetAAS()
0x26c: Pop(0)
0x26d: Push((int) 1)
0x26e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x26f: GOTO 0x232

0x270: @ ResetAAS()
0x271: Pop(0)
0x272: Return(); Pop(14)

0x273: Stack[-1] = (bool) 1
0x274: Return(); Pop(0)

0x275: @ StopAnimation()
0x276: Pop(0)
0x277: @ StopGroup0()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: PushEmpty()
0x27b: EventDisable(0)
0x27c: PushEmpty(object)
0x27d: Stack[-1] = Stack[-2]
0x27e: Call2 0x293

0x27f: Pop(1)
0x280: Push((int) 50)
0x281: Push((int) 40)
0x282: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: EventEnable(0)
0x285: @ Hold()
0x286: Pop(0)
0x287: GOTO 0x285

0x288: Return(); Pop(0)

0x289: PushEmpty(bool, bool)
0x28a: @ IsOverrideActive(Stack[-1])
0x28b: Pop(0)
0x28c: Pop(0); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28e: PushEmpty(object)
0x28f: Stack[-1] = Stack[-4]
0x290: Call2 0x553

0x291: Pop(1)
0x292: Return(); Pop(2)

0x293: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x294: Pop(0); Push((bool) Stack[-21] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x296: PushEmpty(string)
0x297: Stack[-1] = "fdie"
0x298: Call2 0x2ee

0x299: Pop(1)
0x29a: GOTO 0x2ed

0x29b: @@ GetPosition(Stack[-10])
0x29c: Pop(0)
0x29d: @ GetPosition(Stack[-9])
0x29e: Pop(0)
0x29f: @ GetDirection(Stack[-8])
0x2a0: Pop(0)
0x2a1: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2a2: Push(CvectorIndex(Stack[-7], 0))
0x2a3: Push(CvectorIndex(Stack[-9], 0))
0x2a4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a5: Push(CvectorIndex(Stack[-8], 2))
0x2a6: Push(CvectorIndex(Stack[-10], 2))
0x2a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a9: Push((int) 0)
0x2aa: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-6] = "fdie"
0x2ad: GOTO 0x2af

0x2ae: Stack[-6] = "bdie"
0x2af: @ RemoveRTEnvelope()
0x2b0: Pop(0)
0x2b1: @ SetDeathState()
0x2b2: Pop(0)
0x2b3: @ Stop()
0x2b4: Pop(0)
0x2b5: @ StopAsync()
0x2b6: Pop(0)
0x2b7: Stack[-5] = Stack[-21]
0x2b8: Push("GetScriptProperty")
0x2b9: Push((int) 2)
0x2ba: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2bc: Push("Owner")
0x2bd: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2be: Pop(1)
0x2bf: Push(Stack[-4])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c1: Push("Owner")
0x2c2: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2c3: Pop(1)
0x2c4: Pop(0); Push((bool) Stack[-5] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c6: Stack[-5] = Stack[-21]
0x2c7: Push("@GetEyesHeight")
0x2c8: Push((int) 1)
0x2c9: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2cb: @@ GetEyesHeight(Stack[-2])
0x2cc: Pop(0)
0x2cd: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2ce: Push(CvectorIndex(Stack[-1], 1))
0x2cf: Stack[-1] = Stack[-3]
0x2d0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2d1: Push("head")
0x2d2: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2d3: Pop(1)
0x2d4: Stack[-3] = (bool) 1
0x2d5: GOTO 0x2d7

0x2d6: Stack[-3] = (bool) 0
0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = Stack[-7]
0x2d9: Call2 0x428

0x2da: Pop(1)
0x2db: Push("all")
0x2dc: @ PlayAnimation(Stack[-1], Stack[-7])
0x2dd: Pop(1)
0x2de: @ WaitForAnimEnd()
0x2df: Pop(0)
0x2e0: Push(Stack[-3])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e2: @ StopAsync()
0x2e3: Pop(0)
0x2e4: Push("head")
0x2e5: @ UnlookAsync(Stack[-1])
0x2e6: Pop(1)
0x2e7: Push("all")
0x2e8: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2e9: Pop(1)
0x2ea: @ RemoveEnvelope()
0x2eb: Pop(0)
0x2ec: Stack[-5] = 0
0x2ed: Return(); Pop(20)

0x2ee: PushEmpty()
0x2ef: @ RemoveRTEnvelope()
0x2f0: Pop(0)
0x2f1: @ SetDeathState()
0x2f2: Pop(0)
0x2f3: @ Stop()
0x2f4: Pop(0)
0x2f5: @ StopAsync()
0x2f6: Pop(0)
0x2f7: @ StopSecondaryAnimation()
0x2f8: Pop(0)
0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = Stack[-2]
0x2fb: Call2 0x428

0x2fc: Pop(1)
0x2fd: Push("all")
0x2fe: @ PlayAnimation(Stack[-1], Stack[-2])
0x2ff: Pop(1)
0x300: @ WaitForAnimEnd()
0x301: Pop(0)
0x302: Push("all")
0x303: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x304: Pop(1)
0x305: @ RemoveEnvelope()
0x306: Pop(0)
0x307: Return(); Pop(0)

0x308: PushEmpty()
0x309: Return(); Pop(0)

0x30a: PushEmpty()
0x30b: Return(); Pop(0)

0x30c: PushEmpty()
0x30d: Return(); Pop(0)

0x30e: PushEmpty(cvector, cvector, cvector, cvector)
0x30f: @ GetPosition(Stack[-2])
0x310: Pop(0)
0x311: @@ GetPosition(Stack[-1])
0x312: Pop(0)
0x313: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x314: Return(); Pop(4)

0x315: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x316: @ GetPosition(Stack[-3])
0x317: Pop(0)
0x318: @@ GetPosition(Stack[-2])
0x319: Pop(0)
0x31a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31c: Return(); Pop(6)

0x31d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x31e: Pop(0); Push((bool) Stack[-15] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Return(); Pop(14)

0x321: @ IsDead(Stack[-7])
0x322: Pop(0)
0x323: Push(Stack[-7])
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: Return(); Pop(14)

0x326: @ GetSecondaryAnimationType(Stack[-6])
0x327: Pop(0)
0x328: Push((int) 0)
0x329: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Return(); Pop(14)

0x32c: @@ GetPosition(Stack[-5])
0x32d: Pop(0)
0x32e: @ GetPosition(Stack[-4])
0x32f: Pop(0)
0x330: @ GetDirection(Stack[-3])
0x331: Pop(0)
0x332: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x333: Push(CvectorIndex(Stack[-2], 0))
0x334: Push(CvectorIndex(Stack[-4], 0))
0x335: Pop(2); Push(Stack[-2] * Stack[-1]);
0x336: Push(CvectorIndex(Stack[-3], 2))
0x337: Push(CvectorIndex(Stack[-5], 2))
0x338: Pop(2); Push(Stack[-2] * Stack[-1]);
0x339: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33a: Push((int) 0)
0x33b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-1] = "fhit"
0x33e: GOTO 0x340

0x33f: Stack[-1] = "bhit"
0x340: Push("hit_react")
0x341: Push("1")
0x342: Pop(1); Push(Stack[-3] + Stack[-1]);
0x343: Push("2")
0x344: Pop(1); Push(Stack[-4] + Stack[-1]);
0x345: Push((int) -10)
0x346: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(4)
0x348: Return(); Pop(14)

0x349: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x34a: PushEmpty(bool)
0x34b: Stack[-1] = (bool) 0
0x34c: PushEmpty(bool)
0x34d: Stack[-1] = (bool) 0
0x34e: Push(Stack[-23])
0x34f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x350: Push((int) 4)
0x351: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: Stack[-1] = (bool) 1
0x354: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x355: Push((int) 5)
0x356: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: Stack[-1] = (bool) 1
0x359: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x35a: PushEmpty(cvector, cvector)
0x35b: PushEmpty(cvector, object)
0x35c: Stack[-1] = Stack[-25]
0x35d: Call2 0x30e

0x35e: Stack[-3] = Stack[-2]
0x35f: Pop(2)
0x360: Call2 0x457

0x361: Stack[-11] = Stack[-2]
0x362: Pop(2)
0x363: @ CreateVectorVector(Stack[-8])
0x364: Pop(0)
0x365: Stack[-7] = (int) 1
0x366: Push("hit")
0x367: Pop(1); Push(Stack[-1] + Stack[-8]);
0x368: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x369: Pop(1)
0x36a: Pop(0); Push((bool) Stack[-6] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: GOTO 0x376

0x36d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x36e: Push((float)0.70711)
0x36f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: @@ add(Stack[-5])
0x372: Pop(0)
0x373: Push((int) 1)
0x374: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x375: GOTO 0x366

0x376: @@ size(Stack[-3])
0x377: Pop(0)
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x37a: @ irand(Stack[-2], Stack[-3])
0x37b: Pop(0)
0x37c: @@ get(Stack[-1], Stack[-2])
0x37d: Pop(0)
0x37e: PushEmpty(object, int, float, cvector, cvector)
0x37f: Stack[-5] = Stack[-26]
0x380: Stack[-4] = Stack[-25]
0x381: Stack[-3] = Stack[-24]
0x382: Stack[-2] = Stack[-6]
0x383: Stack[-1] = -Stack[-14]; Pop(0);
0x384: Call2 0x38d

0x385: Pop(5)
0x386: Return(); Pop(18)

0x387: Stack[-8] = 0
0x388: PushEmpty(object)
0x389: Stack[-1] = Stack[-22]
0x38a: Call2 0x31d

0x38b: Pop(1)
0x38c: Return(); Pop(18)

0x38d: PushEmpty(object, object, object, object)
0x38e: @ GetScene(Stack[-2])
0x38f: Pop(0)
0x390: Push("scripted")
0x391: Push("blood_dir.xml")
0x392: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x393: Pop(2)
0x394: PushEmpty(object)
0x395: Stack[-1] = Stack[-10]
0x396: Call2 0x31d

0x397: Pop(1)
0x398: Return(); Pop(4)

0x399: Stack[-1] = 0
0x39a: Stack[-2] = 0
0x39b: PushEmpty(bool, bool)
0x39c: @ IsLoaded(Stack[-1])
0x39d: Pop(0)
0x39e: Stack[-3] = Stack[-1]
0x39f: Return(); Pop(2)

0x3a0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3a1: @@ GetPosition(Stack[-8])
0x3a2: Pop(0)
0x3a3: @@ GetEyesHeight(Stack[-9])
0x3a4: Pop(0)
0x3a5: Push(CvectorIndex(Stack[-8], 1))
0x3a6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3a7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3a8: @ GetPosition(Stack[-7])
0x3a9: Pop(0)
0x3aa: @ GetEyesHeight(Stack[-9])
0x3ab: Pop(0)
0x3ac: Push(CvectorIndex(Stack[-7], 1))
0x3ad: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ae: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3af: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3b0: Push(CvectorIndex(Stack[-6], 1))
0x3b1: Stack[-1] = (int) 0
0x3b2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3b3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3b4: Pop(1); Push(Sqrt(Stack[-1]))
0x3b5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3b6: Stack[-5] = -Stack[-6]; Pop(0);
0x3b7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3b8: PushEmpty(cvector, cvector)
0x3b9: Push(CVector(0.0, 1.0, 0.0))
0x3ba: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3bb: Call2 0x457

0x3bc: Pop(1)
0x3bd: Push((int) 25)
0x3be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c0: Push(CVector(0.0, 10.0, 0.0))
0x3c1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3c2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3c3: @ IsOverrideActive(Stack[-2])
0x3c4: Pop(0)
0x3c5: Push(Stack[-2])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-21] = (bool) 0
0x3c8: Return(); Pop(18)

0x3c9: @ StopWorld()
0x3ca: Pop(0)
0x3cb: Push((bool) 1)
0x3cc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3cd: Pop(1)
0x3ce: Push(CvectorIndex(Stack[-4], 0))
0x3cf: Push(CvectorIndex(Stack[-5], 2))
0x3d0: @ Rotate(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: PushEmpty(bool)
0x3d3: Call2 0x568

0x3d4: Pop(0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d6: GOTO 0x3df

0x3d7: Push("head")
0x3d8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3d9: Pop(1)
0x3da: Push(Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dc: Push("head")
0x3dd: @ LookAsyncCamera(Stack[-1])
0x3de: Pop(1)
0x3df: @ CameraWaitForPlayFinish()
0x3e0: Pop(0)
0x3e1: @ ResumeWorld()
0x3e2: Pop(0)
0x3e3: Stack[-21] = (bool) 1
0x3e4: Return(); Pop(18)

0x3e5: PushEmpty(bool, bool)
0x3e6: Push((bool) 1)
0x3e7: @ CameraSwitchToNormal(Stack[-1])
0x3e8: Pop(1)
0x3e9: PushEmpty(bool)
0x3ea: Call2 0x568

0x3eb: Pop(0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: GOTO 0x3f6

0x3ee: Push("head")
0x3ef: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3f0: Pop(1)
0x3f1: Push(Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f3: Push("head")
0x3f4: @ UnlookAsync(Stack[-1])
0x3f5: Pop(1)
0x3f6: Return(); Pop(2)

0x3f7: PushEmpty(bool, float, float, bool, float, float)
0x3f8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3f9: Pop(0)
0x3fa: Push(Stack[-3])
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3fd: Pop(0)
0x3fe: Push((bool) 0)
0x3ff: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(1)
0x401: GOTO 0x406

0x402: Push("Can't find lsh animation : ")
0x403: Pop(1); Push(Stack[-1] + Stack[-8]);
0x404: @ Trace(Stack[-1])
0x405: Pop(1)
0x406: Return(); Pop(6)

0x407: PushEmpty(bool, float, float, bool, float, float)
0x408: @ lshHasAnimation(Stack[-3], Stack[-8])
0x409: Pop(0)
0x40a: Push(Stack[-3])
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x40d: Pop(0)
0x40e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x40f: Pop(0)
0x410: GOTO 0x415

0x411: Push("Can't find lsh animation : ")
0x412: Pop(1); Push(Stack[-1] + Stack[-9]);
0x413: @ Trace(Stack[-1])
0x414: Pop(1)
0x415: Return(); Pop(6)

0x416: PushEmpty(float, cvector, float, cvector)
0x417: @@ GetEyesHeight(Stack[-2])
0x418: Pop(0)
0x419: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x41a: Push(CvectorIndex(Stack[-1], 1))
0x41b: Stack[-1] = Stack[-3]
0x41c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x41d: Push("head")
0x41e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x41f: Pop(1)
0x420: Return(); Pop(4)

0x421: PushEmpty(bool)
0x422: Call2 0x568

0x423: Pop(0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: @ lshStopSpeech()
0x426: Pop(0)
0x427: Return(); Pop(0)

0x428: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x429: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x42a: Pop(0)
0x42b: Pop(0); Push((bool) Stack[-8] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x42d: Stack[-7] = (int) 0
0x42e: Push((int) 1)
0x42f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x430: Pop(1); Push(Stack[-18] + Stack[-1]);
0x431: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x432: Pop(1)
0x433: Pop(0); Push((bool) Stack[-6] == 0)
0x434: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x435: GOTO 0x439

0x436: Push((int) 1)
0x437: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x438: GOTO 0x42e

0x439: Pop(0); Push((bool) Stack[-7] == 0)
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: Return(); Pop(16)

0x43c: @ irand(Stack[-5], Stack[-7])
0x43d: Pop(0)
0x43e: Push((int) 1)
0x43f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x440: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x441: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x442: Pop(0)
0x443: Push(Stack[-4])
0x444: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x445: @ GetEyesHeight(Stack[-3])
0x446: Pop(0)
0x447: @ GetDirection(Stack[-2])
0x448: Pop(0)
0x449: Push((int) 50)
0x44a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x44b: Push(CvectorIndex(Stack[-1], 1))
0x44c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x44d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x44e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x44f: Pop(0)
0x450: Return(); Pop(16)

0x451: PushEmpty(object, object)
0x452: @ self(Stack[-1])
0x453: Pop(0)
0x454: Stack[-3] = Stack[-1]
0x455: Return(); Pop(2)

0x456: Stack[-1] = 0
0x457: PushEmpty(float, float)
0x458: Pop(0); Push(Stack[-3] | Stack[-3]);
0x459: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x45a: Push((float)0.0)
0x45b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x45e: Return(); Pop(2)

0x45f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x460: Return(); Pop(2)

0x461: PushEmpty(int, int)
0x462: @ GetVariable(Stack[-3], Stack[-1])
0x463: Pop(0)
0x464: Stack[-4] = Stack[-1]
0x465: Return(); Pop(2)

0x466: PushEmpty(int, bool, int, bool)
0x467: @ GetInvItemByName(Stack[-2], Stack[-5])
0x468: Pop(0)
0x469: @@ HasItem(Stack[-2], Stack[-1])
0x46a: Pop(0)
0x46b: Stack[-7] = Stack[-1]
0x46c: Return(); Pop(4)

0x46d: PushEmpty(object, object)
0x46e: @ FindActor(Stack[-1], Stack[-4])
0x46f: Pop(0)
0x470: Pop(0); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: Stack[-5] = (bool) 0
0x473: Return(); Pop(2)

0x474: @ Trigger(Stack[-1], Stack[-3])
0x475: Pop(0)
0x476: Stack[-5] = (bool) 1
0x477: Return(); Pop(2)

0x478: Stack[-1] = 0
0x479: PushEmpty(string, string)
0x47a: Stack[-1] = "idle"
0x47b: Push(Stack[-3])
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x47e: Stack[-4] = Stack[-1]
0x47f: Return(); Pop(2)

0x480: PushEmpty(int, bool, int, bool)
0x481: Stack[-2] = (int) 0
0x482: Push("all")
0x483: PushEmpty(string, int)
0x484: Stack[-1] = Stack[-5]
0x485: Call2 0x479

0x486: Pop(1)
0x487: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(2)
0x489: Pop(0); Push((bool) Stack[-1] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: GOTO 0x48f

0x48c: Push((int) 1)
0x48d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x48e: GOTO 0x482

0x48f: Stack[-5] = Stack[-2]
0x490: Return(); Pop(4)

0x491: PushEmpty()
0x492: Push("d11q01")
0x493: Push((int) 3)
0x494: @ SetVariable(Stack[-2], Stack[-1])
0x495: Pop(2)
0x496: PushEmpty()
0x497: Call2 0x506

0x498: Pop(0)
0x499: PushEmpty(bool, string, string)
0x49a: Stack[-2] = "quest_d11_01"
0x49b: Stack[-1] = "restore_andrei"
0x49c: Call2 0x46d

0x49d: Pop(3)
0x49e: Push((int) 0)
0x49f: @@ SetReturnValue(Stack[-1])
0x4a0: Pop(1)
0x4a1: Return(); Pop(0)

0x4a2: PushEmpty(int, int)
0x4a3: Push("burah_serum")
0x4a4: Push((int) 1)
0x4a5: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(2)
0x4a7: Return(); Pop(2)

0x4a8: PushEmpty()
0x4a9: Push("d11q01")
0x4aa: Push((int) 3)
0x4ab: @ SetVariable(Stack[-2], Stack[-1])
0x4ac: Pop(2)
0x4ad: PushEmpty()
0x4ae: Call2 0x4f9

0x4af: Pop(0)
0x4b0: PushEmpty(bool, string, string)
0x4b1: Stack[-2] = "quest_d11_01"
0x4b2: Stack[-1] = "restore_andrei"
0x4b3: Call2 0x46d

0x4b4: Pop(3)
0x4b5: Push((int) 1)
0x4b6: @@ SetReturnValue(Stack[-1])
0x4b7: Pop(1)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty()
0x4ba: Push("playsound")
0x4bb: Push("giveitem")
0x4bc: @ TriggerWorld(Stack[-2], Stack[-1])
0x4bd: Pop(2)
0x4be: Return(); Pop(0)

0x4bf: PushEmpty()
0x4c0: Push("d11q01")
0x4c1: Push((int) 3)
0x4c2: @ SetVariable(Stack[-2], Stack[-1])
0x4c3: Pop(2)
0x4c4: PushEmpty(bool, string, string)
0x4c5: Stack[-2] = "quest_d11_01"
0x4c6: Stack[-1] = "soldier_attack"
0x4c7: Call2 0x46d

0x4c8: Pop(3)
0x4c9: PushEmpty(bool, string, string)
0x4ca: Stack[-2] = "quest_d11_01"
0x4cb: Stack[-1] = "restore_andrei"
0x4cc: Call2 0x46d

0x4cd: Pop(3)
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty()
0x4d0: Push("ood11Officer1")
0x4d1: Push((int) 1)
0x4d2: @ SetVariable(Stack[-2], Stack[-1])
0x4d3: Pop(2)
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: PushEmpty(bool, object, string)
0x4d7: Stack[-2] = Stack[-4]
0x4d8: Stack[-1] = "burah_serum"
0x4d9: Call2 0x466

0x4da: Pop(2)
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-2] = (bool) 1
0x4dd: Return(); Pop(0)

0x4de: Stack[-2] = (bool) 0
0x4df: Return(); Pop(0)

0x4e0: PushEmpty()
0x4e1: PushEmpty(int, string)
0x4e2: Stack[-1] = "ood11Officer1"
0x4e3: Call2 0x461

0x4e4: Pop(1)
0x4e5: Push((int) 0)
0x4e6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-2] = (bool) 1
0x4e9: Return(); Pop(0)

0x4ea: Stack[-2] = (bool) 0
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty(object, object)
0x4ed: Push((int) 794)
0x4ee: Push((int) 1)
0x4ef: Push((int) 543369)
0x4f0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4f1: Pop(3)
0x4f2: PushEmpty(bool, object, int)
0x4f3: Stack[-2] = Stack[-4]
0x4f4: Stack[-1] = (int) 192
0x4f5: Call2 0x520

0x4f6: Pop(3)
0x4f7: Return(); Pop(2)

0x4f8: Stack[-1] = 0
0x4f9: PushEmpty(object, object)
0x4fa: Push((int) 769)
0x4fb: Push((int) 1)
0x4fc: Push((int) 540066)
0x4fd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: PushEmpty(bool, object, int)
0x500: Stack[-2] = Stack[-4]
0x501: Stack[-1] = (int) 192
0x502: Call2 0x520

0x503: Pop(3)
0x504: Return(); Pop(2)

0x505: Stack[-1] = 0
0x506: PushEmpty(object, object)
0x507: Push((int) 768)
0x508: Push((int) 1)
0x509: Push((int) 540065)
0x50a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: PushEmpty(bool, object, int)
0x50d: Stack[-2] = Stack[-4]
0x50e: Stack[-1] = (int) 192
0x50f: Call2 0x520

0x510: Pop(3)
0x511: Return(); Pop(2)

0x512: Stack[-1] = 0
0x513: PushEmpty(object, object)
0x514: @ GetDiaryRoot(Stack[-1])
0x515: Pop(0)
0x516: Pop(0); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x518: Push("Can't retrieve diary root")
0x519: @ Trace(Stack[-1])
0x51a: Pop(1)
0x51b: Stack[-3] = (bool) 0
0x51c: Return(); Pop(2)

0x51d: Stack[-3] = Stack[-1]
0x51e: Return(); Pop(2)

0x51f: Stack[-1] = 0
0x520: PushEmpty(object, object, int, object, object, int)
0x521: PushEmpty(object)
0x522: Call2 0x513

0x523: Stack[-4] = Stack[-1]
0x524: Pop(1)
0x525: @@ Find(Stack[-7], Stack[-2])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-2] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x529: Push("Can't find diary parent with id: ")
0x52a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x52b: @ Trace(Stack[-1])
0x52c: Pop(1)
0x52d: Stack[-9] = (bool) 0
0x52e: Return(); Pop(6)

0x52f: @@ AddChild(Stack[-8])
0x530: Pop(0)
0x531: Push((int) 7)
0x532: @ SendWorldWndMessage(Stack[-1])
0x533: Pop(1)
0x534: @@ GetCategory(Stack[-1])
0x535: Pop(0)
0x536: @ SetDiarySection(Stack[-1])
0x537: Pop(0)
0x538: Stack[-9] = (bool) 0
0x539: Return(); Pop(6)

0x53a: Stack[-2] = 0
0x53b: Stack[-3] = 0
0x53c: PushEmpty(int, int)
0x53d: Push("branch")
0x53e: @ GetVariable(Stack[-1], Stack[-2])
0x53f: Pop(1)
0x540: Push((int) 0)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x543: Stack[-3] = (int) 1
0x544: Return(); Pop(2)

0x545: GOTO 0x54b

0x546: Push((int) 1)
0x547: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-3] = (int) 2
0x54a: Return(); Pop(2)

0x54b: Stack[-3] = (int) 3
0x54c: Return(); Pop(2)

0x54d: PushEmpty(int, int)
0x54e: Push("branch")
0x54f: @ GetVariable(Stack[-1], Stack[-2])
0x550: Pop(1)
0x551: Stack[-3] = Stack[-1]
0x552: Return(); Pop(2)

0x553: PushEmpty()
0x554: PushEmpty(int)
0x555: Call2 0x54d

0x556: Pop(0)
0x557: Push((int) 1)
0x558: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55a: @ WorkWithCorpse(Stack[-1])
0x55b: Pop(0)
0x55c: GOTO 0x55f

0x55d: @ Barter(Stack[-1])
0x55e: Pop(0)
0x55f: Return(); Pop(0)

0x560: Stack[-1] = (int) 515572
0x561: Return(); Pop(0)

0x562: Stack[-1] = (int) 504031
0x563: Return(); Pop(0)

0x564: Stack[-1] = "ui/NPC_Citizen2.png"
0x565: Return(); Pop(0)

0x566: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x567: Return(); Pop(0)

0x568: Stack[-1] = (bool) 0
0x569: Return(); Pop(0)

0x56a: PushEmpty(object, object)
0x56b: @ GetScene(Stack[-1])
0x56c: Pop(0)
0x56d: PushEmpty(object)
0x56e: Call2 0x451

0x56f: Pop(0)
0x570: @@ RemoveStationaryActor(Stack[-1])
0x571: Pop(1)
0x572: PushEmpty(object)
0x573: Stack[-1] = Stack[-4]
0x574: Push(-1, 0); TaskCall(3)
0x575: Call2 0x27a

0x576: Pop(-1, 0); TaskReturn
0x577: Pop(1)
0x578: Return(); Pop(2)

0x579: Stack[-1] = 0
0x57a: PushEmpty()
0x57b: PushEmpty(object, int, float)
0x57c: Stack[-3] = Stack[-7]
0x57d: Stack[-2] = Stack[-6]
0x57e: Stack[-1] = Stack[-5]
0x57f: Call2 0x349

0x580: Pop(3)
0x581: Return(); Pop(0)

0x582: PushEmpty()
0x583: PushEmpty(object, int, float, cvector, cvector)
0x584: Stack[-5] = Stack[-11]
0x585: Stack[-4] = Stack[-10]
0x586: Stack[-3] = Stack[-9]
0x587: Stack[-2] = Stack[-7]
0x588: Stack[-1] = Stack[-6]
0x589: Call2 0x38d

0x58a: Pop(5)
0x58b: Return(); Pop(0)

0x58c: PushEmpty(float, float)
0x58d: Push(GlobalVars[1])
0x58e: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58f: Return(); Pop(2)

0x590: Push("health")
0x591: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x593: Push("health")
0x594: @ GetProperty(Stack[-1], Stack[-2])
0x595: Pop(1)
0x596: Push((int) 0)
0x597: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x599: @ SignalDeath(Stack[-4])
0x59a: Pop(0)
0x59b: Return(); Pop(2)

0x59c: PushEmpty()
0x59d: PushEmpty(object)
0x59e: Stack[-1] = Stack[-2]
0x59f: Call2 0x56a

0x5a0: Pop(1)
0x5a1: Return(); Pop(0)

