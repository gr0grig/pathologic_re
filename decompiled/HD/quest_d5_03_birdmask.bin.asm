GlobalVarCount = 1
	G_VAR_0 object 

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
	quest_d5_03
	completed
	cleanup
	restore
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	money
	Money
	reputation
	fail
	money 60000 removed
	playsound
	givemoney
	ood5Birdmask1
	d5q03BirdmaskBringMoneySelf
	FindMark
	Remove
	d5q03BirdmaskGotoMladVlad
	d5q03BirdmaskGotoViktor
	d5q03MladVladSavePrisonersSelf
	d5q03SavePrisoners
	d5q03ViktorSavePrisonersSelf
	SetReturnValue
	d5q03
	pt_map_uprava_prison
	AddMark
	pt_map_mladvlad
	pt_map_viktor
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x255
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x245 Vars = (object)
		EVENT_26 Op = 0x259 Vars = (string)
		EVENT_6 Op = 0x275 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2b0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4f7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4f5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4f9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4fb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4e4

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
0x41: Call2 0x2f5

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
0x4f: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x448

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xc9

0x58: Pop(1)
0x59: Push((int) 512551)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 512552)
0x5f: Push((int) 13722)
0x60: Push((int) 13721)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 515690)
0x64: Push((int) -1)
0x65: Push((int) 16737)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xab

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xc9

0x6c: Pop(1)
0x6d: Push((int) 512562)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x46c

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x432

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x80: Push((int) 512563)
0x81: Push((int) 13734)
0x82: Push((int) 13732)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 0
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 0
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x43c

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x454

0x91: Pop(1)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x460

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-1] = (bool) 1
0x9d: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9e: Push((int) 512567)
0x9f: Push((int) 13737)
0xa0: Push((int) 13736)
0xa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2: Pop(3)
0xa3: Push((int) 512564)
0xa4: Push((int) -1)
0xa5: Push((int) 13733)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: GOTO 0xab

0xa9: Return(); Pop(0)

0xaa: GOTO 0x4e

0xab: PushEmpty(bool)
0xac: Call2 0x4fd

0xad: Pop(0)
0xae: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xaf: @ lshWaitForAnimEnd()
0xb0: Pop(0)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb9

0xb4: PushEmpty(string)
0xb5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb6: Call2 0x307

0xb7: Pop(1)
0xb8: GOTO 0xaf

0xb9: GOTO 0xc8

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: @ WaitForAnimEnd()
0xbf: Pop(0)
0xc0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xc8

0xc3: Push("all")
0xc4: Push("idle")
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: GOTO 0xbe

0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: PushEmpty(bool)
0xcb: Call2 0x4fd

0xcc: Pop(0)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: PushEmpty(string, bool)
0xd4: Stack[-2] = Stack[-3]
0xd5: Push("")
0xd6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-1] = (bool) 0
0xd9: GOTO 0xdb

0xda: Stack[-1] = (bool) 1
0xdb: Call2 0x317

0xdc: Pop(2)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Push((int) 1)
0xe1: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0xe2: PushEmpty()
0xe3: Call2 0x326

0xe4: Pop(0)
0xe5: Push((int) 13729)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x3ca

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x3be

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x3b4

0xf6: Pop(2)
0xf7: Push((int) 13730)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x402

0xfe: Pop(2)
0xff: Push((int) 16739)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x42b

0x106: Pop(2)
0x107: Push((int) 16737)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x3aa

0x10e: Pop(2)
0x10f: Push((int) 13735)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x3be

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x3ca

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x3b4

0x120: Pop(2)
0x121: Push((int) 13736)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x3c4

0x128: Pop(2)
0x129: Push((int) 13720)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x448

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call2 0xc9

0x134: Pop(1)
0x135: Push((int) 512551)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 512552)
0x13b: Push((int) 13722)
0x13c: Push((int) 13721)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Push((int) 515690)
0x140: Push((int) -1)
0x141: Push((int) 16737)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call2 0xc9

0x148: Pop(1)
0x149: Push((int) 512562)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0x46c

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x432

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Stack[-1] = (bool) 1
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: Push((int) 512563)
0x15d: Push((int) 13734)
0x15e: Push((int) 13732)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: PushEmpty(bool)
0x162: Stack[-1] = (bool) 0
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x43c

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x454

0x16d: Pop(1)
0x16e: Pop(1); Push((bool) Stack[-1] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: Stack[-1] = (bool) 1
0x171: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x460

0x175: Pop(1)
0x176: Pop(1); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Stack[-1] = (bool) 1
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: Push((int) 512567)
0x17b: Push((int) 13737)
0x17c: Push((int) 13736)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 512564)
0x180: Push((int) -1)
0x181: Push((int) 13733)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 13737)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xc9

0x18b: Pop(1)
0x18c: Push((int) 512568)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 512609)
0x192: Push((int) 13785)
0x193: Push((int) 13784)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 515693)
0x197: Push((int) 13785)
0x198: Push((int) 16740)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 13785)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xc9

0x1a2: Pop(1)
0x1a3: Push((int) 512610)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 512569)
0x1a9: Push((int) -1)
0x1aa: Push((int) 13738)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 13734)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral"
0x1b3: Call2 0xc9

0x1b4: Pop(1)
0x1b5: Push((int) 512565)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 512566)
0x1bb: Push((int) -1)
0x1bc: Push((int) 13735)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 13722)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call2 0xc9

0x1c6: Pop(1)
0x1c7: Push((int) 512553)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 512554)
0x1cd: Push((int) 13724)
0x1ce: Push((int) 13723)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 512604)
0x1d2: Push((int) 13778)
0x1d3: Push((int) 13777)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 13778)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call2 0xc9

0x1dd: Pop(1)
0x1de: Push((int) 512605)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 512606)
0x1e4: Push((int) 13724)
0x1e5: Push((int) 13779)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 515691)
0x1e9: Push((int) 13724)
0x1ea: Push((int) 16738)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 13724)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call2 0xc9

0x1f4: Pop(1)
0x1f5: Push((int) 512555)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 512556)
0x1fb: Push((int) 13726)
0x1fc: Push((int) 13725)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 512607)
0x200: Push((int) 13726)
0x201: Push((int) 13781)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 13726)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call2 0xc9

0x20b: Pop(1)
0x20c: Push((int) 512557)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 512558)
0x212: Push((int) 13728)
0x213: Push((int) 13727)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 13728)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Neutral"
0x21c: Call2 0xc9

0x21d: Pop(1)
0x21e: Push((int) 512559)
0x21f: @@ SetMessage(Stack[-1])
0x220: Pop(1)
0x221: @@ ClearReplies()
0x222: Pop(0)
0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x432

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: Push((int) 512560)
0x229: Push((int) -1)
0x22a: Push((int) 13729)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 512561)
0x22e: Push((int) -1)
0x22f: Push((int) 13730)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 515692)
0x233: Push((int) -1)
0x234: Push((int) 16739)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: PushEmpty(bool)
0x23a: Call2 0x4fd

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: @ lshStopAnimation()
0x23e: Pop(0)
0x23f: GOTO 0x242

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: GOTO 0xe0

0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: PushEmpty(int, object)
0x247: Stack[-1] = Stack[-3]
0x248: Push(-2, 1); TaskCall(0)
0x249: Call2 0x0

0x24a: Pop(-2, 1); TaskReturn
0x24b: Pop(1)
0x24c: Push((int) 1)
0x24d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(bool, string, string)
0x250: Stack[-2] = "quest_d5_03"
0x251: Stack[-1] = "completed"
0x252: Call2 0x399

0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: @ Hold()
0x256: Pop(0)
0x257: GOTO 0x255

0x258: Return(); Pop(0)

0x259: PushEmpty(bool, bool)
0x25a: Push("cleanup")
0x25b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x25e: @ IsLoaded(Stack[-1])
0x25f: Pop(0)
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Pop(0); Push((bool) Stack[-2] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: PushEmpty(bool)
0x265: Call2 0x285

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: PushEmpty(object)
0x26b: Call2 0x32d

0x26c: Pop(0)
0x26d: @ RemoveActor(Stack[-1])
0x26e: Pop(1)
0x26f: GOTO 0x274

0x270: Push("restore")
0x271: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x274: Return(); Pop(2)

0x275: PushEmpty(bool)
0x276: Stack[-1] = (bool) 0
0x277: Push( Stack[0 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(bool)
0x27a: Call2 0x285

0x27b: Pop(0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object)
0x280: Call2 0x32d

0x281: Pop(0)
0x282: @ RemoveActor(Stack[-1])
0x283: Pop(1)
0x284: Return(); Pop(0)

0x285: Stack[-1] = (bool) 1
0x286: Return(); Pop(0)

0x287: PushEmpty(bool, bool)
0x288: Push("HasProperty")
0x289: Push((int) 2)
0x28a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x28b: Pop(1); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-5] = (bool) 0
0x28e: Return(); Pop(2)

0x28f: @@ HasProperty(Stack[-3], Stack[-1])
0x290: Pop(0)
0x291: Stack[-5] = Stack[-1]
0x292: Return(); Pop(2)

0x293: PushEmpty(float, float)
0x294: PushEmpty(bool, object, string)
0x295: Stack[-2] = Stack[-10]
0x296: Stack[-1] = Stack[-9]
0x297: Call2 0x287

0x298: Pop(2)
0x299: Pop(1); Push((bool) Stack[-1] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-8] = (bool) 0
0x29c: Return(); Pop(2)

0x29d: @@ GetProperty(Stack[-6], Stack[-1])
0x29e: Pop(0)
0x29f: PushEmpty(float, float, float, float)
0x2a0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x2a1: Stack[-2] = Stack[-8]
0x2a2: Stack[-1] = Stack[-7]
0x2a3: Call2 0x33d

0x2a4: Pop(3)
0x2a5: @@ SetProperty(Stack[-7], Stack[-1])
0x2a6: Pop(1)
0x2a7: Stack[-8] = (bool) 1
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(int, int)
0x2aa: @@ GetProperty(Stack[-4], Stack[-1])
0x2ab: Pop(0)
0x2ac: Pop(0); Push(Stack[-1] + Stack[-3]);
0x2ad: @@ SetProperty(Stack[-5], Stack[-1])
0x2ae: Pop(1)
0x2af: Return(); Pop(2)

0x2b0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b1: @@ GetPosition(Stack[-8])
0x2b2: Pop(0)
0x2b3: @@ GetEyesHeight(Stack[-9])
0x2b4: Pop(0)
0x2b5: Push(CvectorIndex(Stack[-8], 1))
0x2b6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b8: @ GetPosition(Stack[-7])
0x2b9: Pop(0)
0x2ba: @ GetEyesHeight(Stack[-9])
0x2bb: Pop(0)
0x2bc: Push(CvectorIndex(Stack[-7], 1))
0x2bd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2be: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2bf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2c0: Push(CvectorIndex(Stack[-6], 1))
0x2c1: Stack[-1] = (int) 0
0x2c2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c4: Pop(1); Push(Sqrt(Stack[-1]))
0x2c5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c6: Stack[-5] = -Stack[-6]; Pop(0);
0x2c7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c8: PushEmpty(cvector, cvector)
0x2c9: Push(CVector(0.0, 1.0, 0.0))
0x2ca: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2cb: Call2 0x333

0x2cc: Pop(1)
0x2cd: Push((int) 25)
0x2ce: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d0: Push(CVector(0.0, 10.0, 0.0))
0x2d1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d3: @ IsOverrideActive(Stack[-2])
0x2d4: Pop(0)
0x2d5: Push(Stack[-2])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-21] = (bool) 0
0x2d8: Return(); Pop(18)

0x2d9: @ StopWorld()
0x2da: Pop(0)
0x2db: Push((bool) 1)
0x2dc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2dd: Pop(1)
0x2de: Push(CvectorIndex(Stack[-4], 0))
0x2df: Push(CvectorIndex(Stack[-5], 2))
0x2e0: @ Rotate(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: PushEmpty(bool)
0x2e3: Call2 0x4fd

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x2ef

0x2e7: Push("head")
0x2e8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e9: Pop(1)
0x2ea: Push(Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ec: Push("head")
0x2ed: @ LookAsyncCamera(Stack[-1])
0x2ee: Pop(1)
0x2ef: @ CameraWaitForPlayFinish()
0x2f0: Pop(0)
0x2f1: @ ResumeWorld()
0x2f2: Pop(0)
0x2f3: Stack[-21] = (bool) 1
0x2f4: Return(); Pop(18)

0x2f5: PushEmpty(bool, bool)
0x2f6: Push((bool) 1)
0x2f7: @ CameraSwitchToNormal(Stack[-1])
0x2f8: Pop(1)
0x2f9: PushEmpty(bool)
0x2fa: Call2 0x4fd

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: GOTO 0x306

0x2fe: Push("head")
0x2ff: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x300: Pop(1)
0x301: Push(Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x303: Push("head")
0x304: @ UnlookAsync(Stack[-1])
0x305: Pop(1)
0x306: Return(); Pop(2)

0x307: PushEmpty(bool, float, float, bool, float, float)
0x308: @ lshHasAnimation(Stack[-3], Stack[-7])
0x309: Pop(0)
0x30a: Push(Stack[-3])
0x30b: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x30d: Pop(0)
0x30e: Push((bool) 0)
0x30f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(1)
0x311: GOTO 0x316

0x312: Push("Can't find lsh animation : ")
0x313: Pop(1); Push(Stack[-1] + Stack[-8]);
0x314: @ Trace(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(6)

0x317: PushEmpty(bool, float, float, bool, float, float)
0x318: @ lshHasAnimation(Stack[-3], Stack[-8])
0x319: Pop(0)
0x31a: Push(Stack[-3])
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x31d: Pop(0)
0x31e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x31f: Pop(0)
0x320: GOTO 0x325

0x321: Push("Can't find lsh animation : ")
0x322: Pop(1); Push(Stack[-1] + Stack[-9]);
0x323: @ Trace(Stack[-1])
0x324: Pop(1)
0x325: Return(); Pop(6)

0x326: PushEmpty(bool)
0x327: Call2 0x4fd

0x328: Pop(0)
0x329: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32a: @ lshStopSpeech()
0x32b: Pop(0)
0x32c: Return(); Pop(0)

0x32d: PushEmpty(object, object)
0x32e: @ self(Stack[-1])
0x32f: Pop(0)
0x330: Stack[-3] = Stack[-1]
0x331: Return(); Pop(2)

0x332: Stack[-1] = 0
0x333: PushEmpty(float, float)
0x334: Pop(0); Push(Stack[-3] | Stack[-3]);
0x335: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x336: Push((float)0.0)
0x337: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x339: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x33a: Return(); Pop(2)

0x33b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x33c: Return(); Pop(2)

0x33d: PushEmpty()
0x33e: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x33f: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x340: Stack[-4] = Stack[-2]
0x341: Return(); Pop(0)

0x342: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-4] = Stack[-1]
0x345: Return(); Pop(0)

0x346: Stack[-4] = Stack[-3]
0x347: Return(); Pop(0)

0x348: PushEmpty(int, int)
0x349: @ GetVariable(Stack[-3], Stack[-1])
0x34a: Pop(0)
0x34b: Stack[-4] = Stack[-1]
0x34c: Return(); Pop(2)

0x34d: PushEmpty(object, object)
0x34e: @ CreateIntVector(Stack[-1])
0x34f: Pop(0)
0x350: @@ add(Stack[-4])
0x351: Pop(0)
0x352: @@ add(Stack[-3])
0x353: Pop(0)
0x354: Push((int) 3)
0x355: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x356: Pop(1)
0x357: Return(); Pop(2)

0x358: Stack[-1] = 0
0x359: PushEmpty(int, int)
0x35a: PushEmpty(object, string, int)
0x35b: Stack[-3] = Stack[-7]
0x35c: Stack[-2] = "money"
0x35d: Stack[-1] = Stack[-6]
0x35e: Call2 0x2a9

0x35f: Pop(3)
0x360: Push((int) 0)
0x361: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x363: Push("Money")
0x364: @ GetInvItemByName(Stack[-2], Stack[-1])
0x365: Pop(1)
0x366: PushEmpty(int, int)
0x367: Stack[-2] = Stack[-3]
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0x34d

0x36a: Pop(2)
0x36b: Return(); Pop(2)

0x36c: PushEmpty()
0x36d: Pop(0); Push((bool) Stack[-2] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-3] = (bool) 0
0x370: Return(); Pop(0)

0x371: Push((int) 0)
0x372: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x374: Push((int) 8)
0x375: @ SendWorldWndMessage(Stack[-1])
0x376: Pop(1)
0x377: GOTO 0x381

0x378: Push((int) 0)
0x379: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37b: Push((int) 9)
0x37c: @ SendWorldWndMessage(Stack[-1])
0x37d: Pop(1)
0x37e: GOTO 0x381

0x37f: Stack[-3] = (bool) 0
0x380: Return(); Pop(0)

0x381: PushEmpty(float)
0x382: Stack[-1] = Stack[-2]
0x383: Call2 0x38f

0x384: Pop(1)
0x385: PushEmpty(bool, object, string, float, float, float)
0x386: Stack[-5] = Stack[-8]
0x387: Stack[-4] = "reputation"
0x388: Stack[-3] = Stack[-7]
0x389: Stack[-2] = (int) 0
0x38a: Stack[-1] = (int) 1
0x38b: Call2 0x293

0x38c: Pop(6)
0x38d: Stack[-3] = (bool) 1
0x38e: Return(); Pop(0)

0x38f: PushEmpty(object, object)
0x390: @ CreateFloatVector(Stack[-1])
0x391: Pop(0)
0x392: @@ add(Stack[-3])
0x393: Pop(0)
0x394: Push((int) 16)
0x395: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x396: Pop(1)
0x397: Return(); Pop(2)

0x398: Stack[-1] = 0
0x399: PushEmpty(object, object)
0x39a: @ FindActor(Stack[-1], Stack[-4])
0x39b: Pop(0)
0x39c: Pop(0); Push((bool) Stack[-1] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-5] = (bool) 0
0x39f: Return(); Pop(2)

0x3a0: @ Trigger(Stack[-1], Stack[-3])
0x3a1: Pop(0)
0x3a2: Stack[-5] = (bool) 1
0x3a3: Return(); Pop(2)

0x3a4: Stack[-1] = 0
0x3a5: PushEmpty(float, float)
0x3a6: @ GetGameTime(Stack[-1])
0x3a7: Pop(0)
0x3a8: Stack[-3] = Stack[-1]
0x3a9: Return(); Pop(2)

0x3aa: PushEmpty()
0x3ab: PushEmpty()
0x3ac: Call2 0x483

0x3ad: Pop(0)
0x3ae: PushEmpty(bool, string, string)
0x3af: Stack[-2] = "quest_d5_03"
0x3b0: Stack[-1] = "fail"
0x3b1: Call2 0x399

0x3b2: Pop(3)
0x3b3: Return(); Pop(0)

0x3b4: PushEmpty()
0x3b5: Push("money 60000 removed")
0x3b6: @ Trace(Stack[-1])
0x3b7: Pop(1)
0x3b8: PushEmpty(object, int)
0x3b9: Stack[-2] = Stack[-4]
0x3ba: Stack[-1] = (int) -60000
0x3bb: Call2 0x359

0x3bc: Pop(2)
0x3bd: Return(); Pop(0)

0x3be: PushEmpty()
0x3bf: Push("playsound")
0x3c0: Push("givemoney")
0x3c1: @ TriggerWorld(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: Push("ood5Birdmask1")
0x3c6: Push((int) 1)
0x3c7: @ SetVariable(Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: Return(); Pop(0)

0x3ca: PushEmpty(object, object, object, object)
0x3cb: PushEmpty(object)
0x3cc: Call2 0x4d3

0x3cd: Stack[-3] = Stack[-1]
0x3ce: Pop(1)
0x3cf: Push("d5q03BirdmaskBringMoneySelf")
0x3d0: @@ FindMark(Stack[-2], Stack[-1])
0x3d1: Pop(1)
0x3d2: Push(Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: @@ Remove()
0x3d5: Pop(0)
0x3d6: Push("d5q03BirdmaskGotoMladVlad")
0x3d7: @@ FindMark(Stack[-2], Stack[-1])
0x3d8: Pop(1)
0x3d9: Push(Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: @@ Remove()
0x3dc: Pop(0)
0x3dd: Push("d5q03BirdmaskGotoViktor")
0x3de: @@ FindMark(Stack[-2], Stack[-1])
0x3df: Pop(1)
0x3e0: Push(Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: @@ Remove()
0x3e3: Pop(0)
0x3e4: Push("d5q03MladVladSavePrisonersSelf")
0x3e5: @@ FindMark(Stack[-2], Stack[-1])
0x3e6: Pop(1)
0x3e7: Push(Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: @@ Remove()
0x3ea: Pop(0)
0x3eb: Push("d5q03SavePrisoners")
0x3ec: @@ FindMark(Stack[-2], Stack[-1])
0x3ed: Pop(1)
0x3ee: Push(Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: @@ Remove()
0x3f1: Pop(0)
0x3f2: Push("d5q03ViktorSavePrisonersSelf")
0x3f3: @@ FindMark(Stack[-2], Stack[-1])
0x3f4: Pop(1)
0x3f5: Push(Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: @@ Remove()
0x3f8: Pop(0)
0x3f9: PushEmpty()
0x3fa: Call2 0x49d

0x3fb: Pop(0)
0x3fc: Push((int) 1)
0x3fd: @@ SetReturnValue(Stack[-1])
0x3fe: Pop(1)
0x3ff: Return(); Pop(4)

0x400: Stack[-1] = 0
0x401: Stack[-2] = 0
0x402: PushEmpty(object, object)
0x403: Push("d5q03")
0x404: Push((int) 2)
0x405: @ SetVariable(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: PushEmpty(object)
0x408: Call2 0x4d3

0x409: Stack[-2] = Stack[-1]
0x40a: Pop(1)
0x40b: Push("d5q03BirdmaskBringMoneySelf")
0x40c: Push("pt_map_uprava_prison")
0x40d: Push((int) 0)
0x40e: Push((int) 515372)
0x40f: PushEmpty(float)
0x410: Call2 0x3a5

0x411: Pop(0)
0x412: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(5)
0x414: Push("d5q03BirdmaskGotoMladVlad")
0x415: Push("pt_map_mladvlad")
0x416: Push((int) 0)
0x417: Push((int) 515374)
0x418: PushEmpty(float)
0x419: Call2 0x3a5

0x41a: Pop(0)
0x41b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x41c: Pop(5)
0x41d: Push("d5q03BirdmaskGotoViktor")
0x41e: Push("pt_map_viktor")
0x41f: Push((int) 0)
0x420: Push((int) 515373)
0x421: PushEmpty(float)
0x422: Call2 0x3a5

0x423: Pop(0)
0x424: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x425: Pop(5)
0x426: PushEmpty()
0x427: Call2 0x490

0x428: Pop(0)
0x429: Return(); Pop(2)

0x42a: Stack[-1] = 0
0x42b: PushEmpty()
0x42c: PushEmpty(bool, object, float)
0x42d: Stack[-2] = Stack[-5]
0x42e: Stack[-1] = (float) -0.3
0x42f: Call2 0x36c

0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[-3]
0x435: Call2 0x478

0x436: Pop(1)
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-2] = (bool) 1
0x439: Return(); Pop(0)

0x43a: Stack[-2] = (bool) 0
0x43b: Return(); Pop(0)

0x43c: PushEmpty()
0x43d: PushEmpty(int, string)
0x43e: Stack[-1] = "ood5Birdmask1"
0x43f: Call2 0x348

0x440: Pop(1)
0x441: Push((int) 0)
0x442: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Stack[-2] = (bool) 1
0x445: Return(); Pop(0)

0x446: Stack[-2] = (bool) 0
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: PushEmpty(int, string)
0x44a: Stack[-1] = "d5q03"
0x44b: Call2 0x348

0x44c: Pop(1)
0x44d: Push((int) 1)
0x44e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-2] = (bool) 1
0x451: Return(); Pop(0)

0x452: Stack[-2] = (bool) 0
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: PushEmpty(int, string)
0x456: Stack[-1] = "d5q03"
0x457: Call2 0x348

0x458: Pop(1)
0x459: Push((int) 1000)
0x45a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-2] = (bool) 1
0x45d: Return(); Pop(0)

0x45e: Stack[-2] = (bool) 0
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: PushEmpty(int, string)
0x462: Stack[-1] = "d5q03"
0x463: Call2 0x348

0x464: Pop(1)
0x465: Push((int) -1)
0x466: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x468: Stack[-2] = (bool) 1
0x469: Return(); Pop(0)

0x46a: Stack[-2] = (bool) 0
0x46b: Return(); Pop(0)

0x46c: PushEmpty()
0x46d: PushEmpty(int, string)
0x46e: Stack[-1] = "d5q03"
0x46f: Call2 0x348

0x470: Pop(1)
0x471: Push((int) 2)
0x472: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-2] = (bool) 1
0x475: Return(); Pop(0)

0x476: Stack[-2] = (bool) 0
0x477: Return(); Pop(0)

0x478: PushEmpty(float, float)
0x479: Push("money")
0x47a: @@ GetProperty(Stack[-1], Stack[-2])
0x47b: Pop(1)
0x47c: Push((int) 60000)
0x47d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-4] = (bool) 1
0x480: Return(); Pop(2)

0x481: Stack[-4] = (bool) 0
0x482: Return(); Pop(2)

0x483: PushEmpty(object, object)
0x484: Push((int) 714)
0x485: Push((int) 2)
0x486: Push((int) 536322)
0x487: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: PushEmpty(bool, object, int)
0x48a: Stack[-2] = Stack[-4]
0x48b: Stack[-1] = (int) 154
0x48c: Call2 0x4b7

0x48d: Pop(3)
0x48e: Return(); Pop(2)

0x48f: Stack[-1] = 0
0x490: PushEmpty(object, object)
0x491: Push((int) 156)
0x492: Push((int) 2)
0x493: Push((int) 515367)
0x494: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: PushEmpty(bool, object, int)
0x497: Stack[-2] = Stack[-4]
0x498: Stack[-1] = (int) 154
0x499: Call2 0x4b7

0x49a: Pop(3)
0x49b: Return(); Pop(2)

0x49c: Stack[-1] = 0
0x49d: PushEmpty(object, object)
0x49e: Push((int) 157)
0x49f: Push((int) 2)
0x4a0: Push((int) 515368)
0x4a1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: PushEmpty(bool, object, int)
0x4a4: Stack[-2] = Stack[-4]
0x4a5: Stack[-1] = (int) 154
0x4a6: Call2 0x4b7

0x4a7: Pop(3)
0x4a8: Return(); Pop(2)

0x4a9: Stack[-1] = 0
0x4aa: PushEmpty(object, object)
0x4ab: @ GetDiaryRoot(Stack[-1])
0x4ac: Pop(0)
0x4ad: Pop(0); Push((bool) Stack[-1] == 0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4af: Push("Can't retrieve diary root")
0x4b0: @ Trace(Stack[-1])
0x4b1: Pop(1)
0x4b2: Stack[-3] = (bool) 0
0x4b3: Return(); Pop(2)

0x4b4: Stack[-3] = Stack[-1]
0x4b5: Return(); Pop(2)

0x4b6: Stack[-1] = 0
0x4b7: PushEmpty(object, object, int, object, object, int)
0x4b8: PushEmpty(object)
0x4b9: Call2 0x4aa

0x4ba: Stack[-4] = Stack[-1]
0x4bb: Pop(1)
0x4bc: @@ Find(Stack[-7], Stack[-2])
0x4bd: Pop(0)
0x4be: Pop(0); Push((bool) Stack[-2] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c0: Push("Can't find diary parent with id: ")
0x4c1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c2: @ Trace(Stack[-1])
0x4c3: Pop(1)
0x4c4: Stack[-9] = (bool) 0
0x4c5: Return(); Pop(6)

0x4c6: @@ AddChild(Stack[-8])
0x4c7: Pop(0)
0x4c8: Push((int) 7)
0x4c9: @ SendWorldWndMessage(Stack[-1])
0x4ca: Pop(1)
0x4cb: @@ GetCategory(Stack[-1])
0x4cc: Pop(0)
0x4cd: @ SetDiarySection(Stack[-1])
0x4ce: Pop(0)
0x4cf: Stack[-9] = (bool) 0
0x4d0: Return(); Pop(6)

0x4d1: Stack[-2] = 0
0x4d2: Stack[-3] = 0
0x4d3: PushEmpty(object, object, object, object)
0x4d4: @ GetMainOutdoorScene(Stack[-2])
0x4d5: Pop(0)
0x4d6: Pop(0); Push((bool) Stack[-2] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d8: Push("Can't find main outdoor scene")
0x4d9: @ Trace(Stack[-1])
0x4da: Pop(1)
0x4db: Stack[-1] = 0
0x4dc: Stack[-5] = Stack[-1]
0x4dd: Return(); Pop(4)

0x4de: @@ GetMap(Stack[-1])
0x4df: Pop(0)
0x4e0: Stack[-5] = Stack[-1]
0x4e1: Return(); Pop(4)

0x4e2: Stack[-1] = 0
0x4e3: Stack[-2] = 0
0x4e4: PushEmpty(int, int)
0x4e5: Push("branch")
0x4e6: @ GetVariable(Stack[-1], Stack[-2])
0x4e7: Pop(1)
0x4e8: Push((int) 0)
0x4e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4eb: Stack[-3] = (int) 1
0x4ec: Return(); Pop(2)

0x4ed: GOTO 0x4f3

0x4ee: Push((int) 1)
0x4ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-3] = (int) 2
0x4f2: Return(); Pop(2)

0x4f3: Stack[-3] = (int) 3
0x4f4: Return(); Pop(2)

0x4f5: Stack[-1] = (int) 515571
0x4f6: Return(); Pop(0)

0x4f7: Stack[-1] = (int) 504029
0x4f8: Return(); Pop(0)

0x4f9: Stack[-1] = "ui/NPC_bmask.png"
0x4fa: Return(); Pop(0)

0x4fb: Stack[-1] = "ui/NPC_bmask_b.png"
0x4fc: Return(); Pop(0)

0x4fd: Stack[-1] = (bool) 0
0x4fe: Return(); Pop(0)

