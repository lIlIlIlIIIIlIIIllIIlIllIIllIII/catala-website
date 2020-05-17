[%bs.raw {|require("../assets/catala_code.css")|}];

module FrenchFamilyBenefits = {
  let family_benefits: string = [%bs.raw
    {|require("../assets/allocations_familiales.html")|}
  ];

  [@react.component]
  let make = () => {
    <>
      <Utils.PageTitle>
        <Lang.String
          english="French family benefits computation"
          french={js|Calcul des allocations familiales|js}
        />
      </Utils.PageTitle>
      <p className=[%tw "pb-16"]>
        <Lang.String
          english="The source code for this example is available "
          french={js|Le code source de cet exemple est disponible |js}
        />
        <Utils.TextLink
          target="https://github.com/CatalaLang/catala/tree/master/examples/allocations_familiales">
          <Lang.String english="here" french={js|ici|js} />
        </Utils.TextLink>
        <Lang.String
          english=". What you can see here is the \"weaved\" output of the source files processed by the Catala compiler.
        Weaving is a concept from "
          french={js|. Ce que vous pouvez voir en dessous est la version "tissée" des fichiers sources transformés par le compilateur Catala.
        Le tissage est un concept issu de la |js}
        />
        <Utils.TextLink
          target="https://en.wikipedia.org/wiki/Literate_programming#Workflow">
          <Lang.String
            english="literate programming"
            french={js|programmation littéraire|js}
          />
        </Utils.TextLink>
        <Lang.String
          english=" corresponding to the action of interleaving together the code and its textual documentation
         as to produce a reviewable and comprehensive document. Please refer to the "
          french={js| , qui correspond à l'action d'entremêler le code et sa documentation textuelle dans un document
         complet et lisible. Veuillez vous réferer au |js}
        />
        <Utils.InternalLink target=[|Elements.home, Elements.guide|]>
          <Lang.String
            english="reading guide"
            french={js|guide de lecture|js}
          />
        </Utils.InternalLink>
        <Lang.String
          english=" for a hands-on introduction on how to read this document."
          french={js| pour savoir comment lire ce document.|js}
        />
      </p>
      <div
        className="catala-code"
        dangerouslySetInnerHTML={"__html": family_benefits}
      />
    </>;
  };
};

module DummyEnglish = {
  let english: string = [%bs.raw {|require("../assets/english.html")|}];

  [@react.component]
  let make = () => {
    <>
      <Utils.PageTitle>
        <Lang.String
          english="Catala in English example"
          french={js|Catala en anglais|js}
        />
      </Utils.PageTitle>
      <p className=[%tw "pb-16"]>
        <Lang.String
          english="The source code for this example is available "
          french={js|Le code source de cet exemple est disponible |js}
        />
        <Utils.TextLink
          target="https://github.com/CatalaLang/catala/tree/master/examples/dummy_english">
          <Lang.String english="here" french={js|ici|js} />
        </Utils.TextLink>
        <Lang.String
          english=". What you can see here is the \"weaved\" output of the source files processed by the Catala compiler.
        Weaving is a concept from "
          french={js|. Ce que vous pouvez voir en dessous est la version "tissée" des fichiers sources transformés par le compilateur Catala.
        Le tissage est un concept issu de la |js}
        />
        <Utils.TextLink
          target="https://en.wikipedia.org/wiki/Literate_programming#Workflow">
          <Lang.String
            english="literate programming"
            french={js|programmation littéraire|js}
          />
        </Utils.TextLink>
        <Lang.String
          english=" corresponding to the action of interleaving together the code and its textual documentation
         as to produce a reviewable and comprehensive document. Please refer to the "
          french={js| , qui correspond à l'action d'entremêler le code et sa documentation textuelle dans un document
         complet et lisible. Veuillez vous réferer au |js}
        />
        <Utils.InternalLink target=[|Elements.home, Elements.guide|]>
          <Lang.String
            english="reading guide"
            french={js|guide de lecture|js}
          />
        </Utils.InternalLink>
        <Lang.String
          english=" for a hands-on introduction on how to read this document."
          french={js| pour savoir comment lire ce document.|js}
        />
      </p>
      <div
        className="catala-code"
        dangerouslySetInnerHTML={"__html": english}
      />
    </>;
  };
};

module DummyFrench = {
  let french: string = [%bs.raw {|require("../assets/french.html")|}];

  [@react.component]
  let make = () => {
    <>
      <Utils.PageTitle>
        {{js|Exemple de programme conçu expréssement pour des juristes|js}
         |> React.string}
      </Utils.PageTitle>
      <p>
        {{js|
      Dans le cadre d'un projet de recherche de l'|js}
         |> React.string}
        <Utils.TextLink target="https://www.inria.fr/fr">
          {"Inria" |> React.string}
        </Utils.TextLink>
        {{js| sur l'amélioration
        de la fiabilité des logiciels censés suivre une spécification législative, le langage |js}
         |> React.string}
        <Utils.TextLink target="https://github.com/CatalaLang/catala">
          {"Catala" |> React.string}
        </Utils.TextLink>
        {{js| propose d'annoter directement les textes
        législatifs avec leur contenu logiciel.|js}
         |> React.string}
      </p>
      <p>
        {{js|Ci-dessous se trouve un exemple purement illustratif d'annotation d'une partie de l'article D 521-1 du code
        de la sécurité sociale décrivant une partie du calcul du montant des allocations familiales. Chaque
        ligne de l'article est annotée par un bloc de code informatique (préfixé par des numéros de ligne).|js}
         |> React.string}
      </p>
      <p>
        {{js|Le code informatique se lit en français ; les couleurs sont là à titre purement indicatif pour
        faciliter la lecture mais ne portent pas d'informations sur la manière dont le code s'exécutera.|js}
         |> React.string}
      </p>
      <p>
        {{js|Le "champ d'application" correspond au contexte logique dans lequel on se place pour appliquer
        l'article D 521-1. La "définition" d'une quantité permet de décrire sa valeur en fonction d'autres
        quantité. Une quantité est nommée par un identifiant (par exemple "allocations_familiales") parfois suivi d'un
        point et d'un autre identifiant correspondant à une partie de la quantité précédant le point. "sous condition"
        et "conséquence" décrivent une condition à remplir pour que la définition prenne effet. Les opérations arithmétiques
        usuelles sont utilisées, les parenthèses servent à
        délimiter des sous-expressions de manière non-ambigue.|js}
         |> React.string}
      </p>
      <p className=[%tw "pb-16"]>
        {{js|  Si cet exemple vous intéresse ou si vous avez d'autres questions, vous pouvez contacter directement
          l'auteur à l'adresse |js}
         |> React.string}
        <Utils.TextLink target="mailto:denis.merigoux@inria.fr">
          {"denis.merigoux@inria.fr" |> React.string}
        </Utils.TextLink>
        {"." |> React.string}
      </p>
      <div
        className="catala-code"
        dangerouslySetInnerHTML={"__html": french}
      />
    </>;
  };
};

let family_benefits: string = [%bs.raw
  {|require("../assets/allocations_familiales.html")|}
];

let family_benefits_card: Utils.presentation_card = {
  title:
    <Lang.String
      english="French family benefits"
      french="Allocations familiales"
    />,
  action:
    Some((
      [|
        Elements.home,
        Elements.examples,
        Elements.french_family_benefits_example,
      |],
      <Lang.String english="see example" french={js|Voir l'exemple|js} />,
    )),
  icon: None,
  quote: None,
  content: {
    <>
      <Lang.String
        english="The content of the example is generated by the Catala compiler from the "
        french={js|Le contenu de cet exemple est généré par le compilateur Catala à partir des |js}
      />
      <a
        href="https://github.com/CatalaLang/catala/tree/master/examples/allocations_familiales">
        <Lang.String
          english="source code files of the example"
          french={js|sources de l'exemple|js}
        />
      </a>
      <Lang.String
        english=". The code, like the legislative text it follows, is written in French."
        french="."
      />
    </>;
  },
};

let english_card: Utils.presentation_card = {
  title:
    <Lang.String
      english="English dummy example"
      french="Exemple en anglais"
    />,
  action:
    Some((
      [|Elements.home, Elements.examples, Elements.english_example|],
      <Lang.String english="see example" french={js|Voir l'exemple|js} />,
    )),
  icon: None,
  quote: None,
  content: {
    <>
      <Lang.String
        english="The content of this example is generated by the Catala compiler from the "
        french={js|Le contenu de cet exemple est généré par le compilateur de Catala à partir des |js}
      />
      <a
        href="https://github.com/CatalaLang/catala/tree/master/examples/dummy_english">
        <Lang.String
          english="source code files of the example"
          french={js|fichiers source de l'exemple|js}
        />
      </a>
      <Lang.String
        english=". The code does not model real anglo-saxon legislation but showcases the
      English version of Catala"
        french={js|. Le code ne modèle pas de véritables articles de loi anglo-saxonne mais est là pour
        illustrer la version anglaise de Catala.|js}
      />
    </>;
  },
};

let french_card: Utils.presentation_card = {
  title:
    <Lang.String
      english="French dummy example"
      french={js|Exemple en français|js}
    />,
  action:
    Some((
      [|Elements.home, Elements.examples, Elements.french_example|],
      <Lang.String english="see example" french={js|Voir l'exemple|js} />,
    )),
  icon: None,
  quote: None,
  content: {
    <>
      <Lang.String
        english="This example has been used for illustrating the concepts of Catala for
     a rules-as-code poll sent by the "
        french={js|Cet exemple a été utilisé pour illustrer les concepts de Catala pour un sondage
       sur le thème "transformer la loi en code" envoyé par l'association |js}
      />
      <a href="hhttps://openlaw.fr/"> {React.string("OpenLaw")} </a>
      <Lang.String english=" association." french={js|.|js} />
    </>;
  },
};

[@react.component]
let make = () => {
  <>
    <Utils.PageTitle>
      <Lang.String
        english="Catala examples"
        french={js|Exemples de programmes Catala|js}
      />
    </Utils.PageTitle>
    <Utils.PresentationCards
      cards=[|family_benefits_card, english_card, french_card|]
    />
  </>;
};
