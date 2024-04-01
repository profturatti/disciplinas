-- Criação da tabela de usuario
CREATE TABLE usuario (
    id SERIAL PRIMARY KEY,
    nome_completo VARCHAR(250) NOT NULL,
    nome_user VARCHAR(50) NOT NULL,
    senha VARCHAR(100) NOT NULL
)

-- Inclusão de 1 dado na tabela 
INSERT INTO usuario (nome_completo, nome_user, senha)
VALUES 
   ('Rafael Santos', 'rafael123', '123mudar')
   
-- Inclusão de multiplos na tabela 
INSERT INTO usuario (nome_completo, nome_user, senha) 
VALUES
   ('João da Silva', 'joao123', 'senha123'),
   ('Maria de Souza', 'maria456', 'abcdef'),
   ('José Oliveira Santos', 'jose789', 'xk321pp')
   
--Leitura dos dados do usuarios   
select * from usuario   

--Leitura de uma coluna 
select nome_completo from usuario 

--Leitura dos dados do usuarios pelo Id   
select * from usuario
where id = 2

--Deletar dados de uma tabela
delete from usuario 
where id = 2

--Atualizar registro da tabela
UPDATE usuario
SET nome_completo = 'João Silva', 
    nome_user = 'joao.silva@email.com',
    senha = 'nova_senha'
WHERE id = 1;