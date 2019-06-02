<?php require_once('inc/ClassType.php'); ?>
<?php require_once('inc/Race.php'); ?>
<?php require_once('inc/ForceGroup.php'); ?>

<?php
class Hero {

    private $Race;
    private $ClassType;

    public function __construct(Race $race, ClassType $classType){
        $this->Race = $race;
        $this->ClassType = $classType;
    }

    public function raceName(){
        return $this->Race->name();
    }

    public function ClassTypeName(){
        return $this->ClassType->name();
    }

    public function ClassTypeAbout(){
        return $this->ClassType->about();
    }
}

?>