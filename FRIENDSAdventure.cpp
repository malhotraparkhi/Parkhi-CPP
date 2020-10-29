/*Create a C++ text adventure with the storyline of your choosing.
you can choose any topic you like! Some possible ideas include:

A fantasy book you love
Your favorite TV show
A funny movie
A murder mystery
A game show*/

#include<iostream>
int main()
{
  std::cout<<"----------SCENE 1----------\n\n";
  std::cout<<"=====THE ONE WITH THE SEED=====\n\n";
  std::cout<<"Mike: (raising his glass) Thank you guys for having us over.\n";
  std::cout<<"Phoebe: Oh! Yeah, this is fun, couples night.\n";
  std::cout<<"Chandler: Yeah, I don't know why we hang out with married couples more often.\n";
  std::cout<<"Monica: Well, because every time we do, you make jokes about swinging and scare them away.\n";
  std::cout<<"Chandler: You mean that Portuguese couple? Yeah, like you wouldn't have done it.\n";
  std::cout<<"Ross: (entering) Hey, you guys... I have great news.\n";
  std::cout<<"Monica: Ross, we're kind of in the middle of diner here.\n";
  std::cout<<"Ross: Oh, well, er, I already ate, but sure...! (they all look at each other when Ross grabs a plate) Guess what happened at work today...\n";
  std::cout<<"Chandler: A dinosaur died a million years ago?\n";
  std::cout<<"Ross: Try sixty-five million years ago, and then try sssshhhhhh.... My tenure review board met today and I hear it's looking really good.\n";
  std::cout<<"Phoebe: Wow!\n";
  std::cout<<"Ross: Yeah. Do you have any idea what this means in academic circles, uh? I am gonna get laid.\n";
  std::cout<<"Rachel: (while entering) Hi you guys.\n";
  std::cout<<"All: Hey.\n";
  std::cout<<"Rachel: Ooh, Italian! (she also grabs a plate)\n";
  std::cout<<"Monica: No one wanted seconds, right?\n";
  std::cout<<"Ross: No, no. I-I'm good.\n";
  std::cout<<"Rachel: Hey you guys... You're never gonna believe it. This headhunter called me. I have a meeting tomorrow with Gucci. Gucci wants me.\n";
  std::cout<<"Ross: I'm up for tenure.\n";
  std::cout<<"Rachel: Congratulations!\n";
  std::cout<<"Ross: You too! What are the odds?\n";
  std::cout<<"Rachel: Ooh! (they hug)\n";
  std::cout<<"Joey: (enters) Guess what?\n\n";

std::cout<<"What does Joey say next?\n";

char ch1;
for(int i=1; i<=3 && ch1!='A' && ch1!='B' && ch1!='C'; i++)
{
  std::cout<<"Enter A if you think he said I'm up for tenure.Yay!!\n";
  std::cout<<"Enter B  if you think he said I finally got that seed out of my teeth.\n";
  std::cout<<"Enter C if you think he said I got a role in the new Al Pacino Movie.\n";
  std::cin>>ch1;
}

switch(ch1)
{
  case 'A': std::cout<<"Joey: (enters) Guess what? (they all look expectantly at him) I finally got a tenure\n";
            std::cout<<"Monica: Hey! These guys did too, Congratulations!!\n";
			std::cout<<"Rachel: Yayy!!Congratulations Joey!\n";
			std::cout<<"Ross: You too! What are the odds!\n";
			std::cout<<"Joey: Congratulations you guys!\n\n";
			std::cout<<"====----====----====----THIS IS NOT THE CORRECT ANSWER====----====----====----!!!!\n\n";
			
  break;
  case 'B': std::cout<<"Joey: (enters) Guess what? (they all look expectantly at him) I finally got that seed out of my teeth.\n";
            std::cout<<"Monica: I don't know who I'm happiest for...\n";
			std::cout<<"Phoebe: I do, he's been working on that all day! (looking at Joey)\n";
  break;
  case 'C': std::cout<<"Joey: (enters) Guess what? (they all look expectantly at him) I got a role in the new AL Pacino movie.\n";
            std::cout<<"All: Oh my God! Whoah!\n";
			std::cout<<"Monica: Well, what's the part?\n";
			std::cout<<"Joey: Can you believe this? Al Pacino! This guy's the reason I became an actor! I'm out of order? Pfeeeh. You're out of order! This whole courtroom's out of order!\n";
			std::cout<<"Phoebe: Seriously, what-what's the part?\n";
			std::cout<<"Joey: Just when I thought I was out, they pull me back in!\n";
			std::cout<<"Ross: C'mon, seriously, Joey, what's the part?\n";
			std::cout<<"Joey: ...I'm his (mumbles)\n";
			std::cout<<"Rachel: ..You're, you're 'mah mah mah' what?\n";
			std::cout<<"Joey: ...I'm his butt double. 'Kay? I play Al Pacino's butt. Alright? He goes into the shower, and then- I'm his butt.\n";
			std::cout<<"Monica: (trying not to laugh) Oh my God.\n";
			std::cout<<"Joey: C'mon, you guys. This is a real movie, and Al Pacino's in it, and that's big!\n";
			std::cout<<"Chandler: Oh no, it's terrific, it's... it's... y'know, you deserve this, after all your years of struggling, you've finally been able to crack your way into showbusiness.\n";
			std::cout<<"Joey: Okay, okay, fine! Make jokes, I don't care! This is a big break for me!\n";
			std::cout<<"====----====----====----THIS IS NOT THE CORRECT ANSWER====----====----====----!!!!\n\n";
  break;
  default: std::cout<<"Sorry, you have not entered any valid choice. GOODBYE!!\n";
  break;
}

std::cout<<"----------SCENE 2----------\n\n";
std::cout<<"=====THE ONE WITH MRS. HANNIGAN=====\n\n";

std::cout<<"Phoebe: Hey Mon? Was it weird changing your name to Geller-Bing?\n";
std::cout<<"Monica: No, no. It felt nice to acknowledge this. (pats Chandler on his leg)\n";
std::cout<<"Phoebe: Where did you go to do it?\n";
std::cout<<"Monica: Uhm the... the ministry... of names... bureau...\n";
std::cout<<"Chandler: YOU NEVER DID IT!\n";
std::cout<<"Monica: I'm sorry. It's just the idea of being an official Bing.\n";
std::cout<<"Chandler: Hey! I will have you know that... aah, who am I kidding. Let's call the kid Geller and let Bing die with me.\n";
std::cout<<"Mike: (walks to the couch with coffee for Phoebe) Here you go.\n";
std::cout<<"Phoebe: Thanks! Honey, would you want me to take your name?\n";
std::cout<<"Mike: Oh, it's just... It's up to you. It's your name. You've got to live with it.\n";
std::cout<<"Phoebe: All right, let's see, call me Mrs Hannigan.\n";
std::cout<<"Chandler: Mrs Hannigan?\n\n";

std::cout<<"How does Phoebe react to herself being called as Mrs. Hannigan?\n";

char ch2;
for(int i=1; i<=3 && ch2!='A' && ch2!='B' && ch2!='C'; i++)
{
  std::cout<<"Enter A if you think she said Eww, I don't like the sound of Hannigan! \n";
  std::cout<<"Enter B if you think she said I want to call myself as Valerie.\n";
  std::cout<<"Enter C if you think she said What? Can't you see I'm in the middle of something? Ooh, I like it.\n";
  std::cin>>ch2;
}

switch(ch2)
{
  case 'A': std::cout<<"Phoebe: Oh no! i Don't like the sound of Hannigan.\n";
            std::cout<<"Mike: oh! Why just the sound?\n";
			std::cout<<"Phoebe: No, I mean it sound like a chicken that wakes us up in the morning, you like an alarm!\n";
			std::cout<<"Mike: It's okay baby if you do not want to change your name to Hannigan. It's your name.\n";
			std::cout<<"====----====----====----THIS IS NOT THE CORRECT ANSWER====----====----====----!!!!\n\n";
  break;
  case 'B': std::cout<<"Phoebe: I'm gonna have my friends call me Valerie.\n";
            std::cout<<"Mike: Then what do I get to call you?\n";
			std::cout<<"Monica: And we call you Valerie from now on?";
			std::cout<<"Phoebe: You guys I'm always Phoebe for you!\n";
			std::cout<<"Monica: Then we are not your friends?\n";
			std::cout<<"Mike: I like Phoebe but why would your friends call you Valerie?\n";
			std::cout<<"Phoebe: I guess I should just stick with Phoebe.\n";
			std::cout<<"====----====----====----THIS IS NOT THE CORRECT ANSWER====----====----====----!!!!\n\n";
  break;
  case 'C': std::cout<<"Phoebe: What? Can't you see I'm in the middle of something? Ooh, I like it.\n";
  break;
  default: std::cout<<"Sorry, you have not entered any valid choice. GOODBYE!!\n";
  break;
}

std::cout<<"----------SCENE 3-----------\n";
std::cout<<"=====THE ONE WITH PRINCESS CONSUELA=====\n";

std::cout<<"Mike: Hey (He kisses Phoebe)\n";
std::cout<<"Phoebe: Welcome back!\n";
std::cout<<"Mike: Ah! I missed you\n";
std::cout<<"Phoebe: Oh, me too!\n";
std::cout<<"Mike: So, what's new?\n";
std::cout<<"Phoebe: Well, I'm no longer Phoebe Buffay.\n";
std::cout<<"Mike: That's great! You changed you name?\n";
std::cout<<"Phoebe: Yes I did! Meet: Princess Consuela Banana Hammock! (She smiles from ear to ear)\n";
std::cout<<"Mike: (afraid) You're kidding right?\n";
std::cout<<"Phoebe: Nope.\n";
std::cout<<"Mike: You really did that?\n";
std::cout<<"Phoebe: Yep.\n";
std::cout<<"Mike: Yeah, but you can't do that.\n";
std::cout<<"Phoebe: Why? It's fun, it's different, no-one else has a name like it.\n";
std::cout<<"Mike: (looks at her astonished) Alright, then I'm gonna change my name.\n";
std::cout<<"Phoebe: Great, okay, what are you gonna change it to?\n\n";

std::cout<<"What did Mike change his name to and how did Phoebe react to it?\n";

char ch3;
for(int i=1; i<=3 && ch3!='A' && ch3!='B' && ch3!='C'; i++)
{
  std::cout<<"Enter A if you think he said Crap Bag\n";
  std::cout<<"Enter B if you think he said I want to call myself as Mr.Consuela.\n";
  std::cout<<"Enter C if you think he said What? Do you really think you would like to change your name to Banana Hammock?\n";
  std::cin>>ch3;
}

switch(ch3)
{
case 'A': std::cout<<"Mike: Crap Bag.\n";
          std::cout<<"Phoebe:(not amused) Mike Crap Bag?\n";
		  std::cout<<"Mike: No, no Mike, just Crap Bag. First name Crap, last name Bag.\n";
		  std::cout<<"Phoebe: You're not serious, right?\n";
		  std::cout<<"Mike: Yeah, I'm serious. (sarcastic) It's fun, it's different and no-one else has a name like that!\n";
		  std::cout<<"Phoebe: Uhu, uhu, well, then, great. If you love it, I love it.\n";
		  std::cout<<"Mike: I do love it, and I love your name. I love Princess Consuela.\n";
		  std::cout<<"Phoebe: And I love Crap.\n";
break;
case 'B': std::cout<<"Mike: Mr.Consuela!\n";
          std::cout<<"Phoebe: What?\n";
		  std::cout<<"Mike:Yes, I will change my name to Mr. Princess Consuela Banana Hammock Buffay\n";
		  std::cout<<"Phoebe: Uhu!! Okay.\n";
		  std::cout<<"====----====----====----THIS IS NOT THE CORRECT ANSWER====----====----====----!!!!\n\n";
break;
case 'C': std::cout<<"Mike: What? Do you really think you would like to change your name to Banana Hammock? Its' so weird!\n";
          std::cout<<"====----====----====----THIS IS NOT THE CORRECT ANSWER====----====----====----!!!!\n\n";
break;
default: std::cout<<"Sorry, you have not entered any valid choice. GOODBYE!!\n";
  break;
}
return 0;
}