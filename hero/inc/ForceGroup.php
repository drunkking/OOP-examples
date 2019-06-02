<?php

interface ForceGroup {
    public function about();
    public function addHero(Hero $hero);
    public function aboutHeroes();
}


class Alliance implements ForceGroup {

    private $heroes = [];

    public function addHero(Hero $hero){
        $this->heroes[] = $hero;
    }

    public function aboutHeroes(){
        echo "<h2>Alliance best ones:</h2>";
        foreach ($this->heroes as $hero) {
           echo "<h4>My race is ".$hero->raceName(). " and I'am ". $hero->ClassTypeName()." class type</h4>";
           echo $hero->ClassTypeAbout()."<br>";
       
        }
    }


    public function about(){
        echo "<h1>We are Alliance</h1><br>";
    }

}

class Horde implements ForceGroup {

    private $heroes = [];

    public function addHero(Hero $hero){
        $this->heroes[] = $hero;
    }

    public function aboutHeroes(){
        echo "<h2>Horde best ones:</h2>";
        foreach ($this->heroes as $hero) {
            echo "<h4>My race is ".$hero->raceName(). " and I'am ". $hero->ClassTypeName()." class type</h4>";
            echo $hero->ClassTypeAbout()."<br>";
        
         }
    }

    public function about(){
        echo "<h1>We are Horde<h1><br>";
    }
}

class AlliedRaces implements ForceGroup {

    private $heroes = [];

    public function addHero(Hero $hero){
        $this->heroes[] = $hero;
    }


    public function aboutHeroes(){
        echo "Allied Races best ones:<br>";
        foreach ($this->heroes as $hero) {
            echo "<h4>My race is ".$hero->raceName(). " and I'am ". $hero->ClassTypeName()." class type</h4>";
            echo $hero->ClassTypeAbout()."<br>";
        
         }
    }

    public function about(){
        echo "<h1>We are Allied Races</h1><br>";
    }
}

?>